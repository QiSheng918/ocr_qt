#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "screen.h"
#include "traymenu.h"
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QPoint>
#include <QTime>
#include <QMouseEvent>
#include <QSettings>
#include <QMessageBox>
#include <QDateTime>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QJsonParseError>
#include <QJsonDocument>
#include <QJsonObject>
#include <QTextCodec>
#include <QJsonArray>
#include <QClipboard>
#include <QFont>
#include <QUrlQuery>
#include <QScreen>
#include <QVector>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    beginPos = this->pos();
    leftPress = false;
    this->setProperty("CanMove", true);
    //实现无边框 (Qt::FramelessWindowHint去边框)  Qt::WindowStaysOnTopHint 窗体置顶 防止拖到任务栏下面
    //this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowSystemMenuHint | Qt::WindowMinMaxButtonsHint|Qt::WindowStaysOnTopHint);
    QFont font_ch(tr("SimSun"),11);
    font_ch.setStretch(100);
    font_ch.setWeight(25);
    QFont font_en(tr("Times New Roman"),11);
    font_en.setStretch(100);
    font_en.setWeight(25);
    ui->resultEdit->setFont(font_ch);
    ui->resultEdit->setFont(font_en);


    ui->translateEdit->setFont(font_ch);
    ui->translateEdit->setFont(font_en);

    this->loadConfigSettings();

    connect(ui->screenshotButton,SIGNAL(clicked()),this,SLOT(onScreenshotClicked()));
    connect(ui->translateButton,SIGNAL(clicked()),this,SLOT(onTranslateClicked()));
    connect(ui->splitButton,SIGNAL(clicked()),this,SLOT(onSplitButtonClicked()));
    connect(ui->mergeButton,SIGNAL(clicked()),this,SLOT(onMergeButtonClicked()));
    connect(ui->exitTranslateButton,SIGNAL(clicked()),this,SLOT(onExitTranslateButtonClicked()));

    this->setWindowIcon(QIcon("./ocr.png"));
    this->resize(500,500);
    ui->frame->hide();

    pSystemTray = new QSystemTrayIcon(this);
    TrayMenu *pTrayMenu = new TrayMenu(this);

    pSystemTray->setContextMenu(pTrayMenu);

    pSystemTray->setToolTip("OCR软件");
    pSystemTray->setIcon(QIcon("./ocr.png"));

    connect(pTrayMenu, SIGNAL(showSettings()), this, SLOT(showSettings()));
    connect(pTrayMenu, SIGNAL(quit()), qApp, SLOT(quit()));
    connect(pTrayMenu, SIGNAL(showMainwindow()), this, SLOT(showMainwindow()));
    connect(pSystemTray , SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(onActivated(QSystemTrayIcon::ActivationReason)));

    pSystemTray->show();
    split_flag=1;

    qk=new QHotkey(QKeySequence("ctrl+q"), true);
    connect(qk, SIGNAL(activated()),this, SLOT(onScreenshotClicked()));

    qDebug()<<"program started!";
    this->hide();
}

void MainWindow::onActivated(QSystemTrayIcon::ActivationReason reason){
    if(reason==QSystemTrayIcon::DoubleClick) this->onScreenshotClicked();
}

MainWindow::~MainWindow(){
    delete ui;
    if(pSystemTray!=NULL) delete  pSystemTray;
    if(m_setting!=NULL) delete m_setting;
    if(nam!=NULL) delete nam;
    if(qk!=NULL) delete qk;
}

void MainWindow::showSettings(){
    m_setting=new setting;
    connect(m_setting, SIGNAL(closeSettings()), this, SLOT(closeSettings()));
    m_setting->show();
}

void MainWindow::closeSettings(){
    if(m_setting!=nullptr){
        m_setting->hide();
        m_setting->deleteLater();        
    }
    
    this->loadConfigSettings();
}

void MainWindow::getScreenshotImgBase64Str(QString str) {
    screenshot_img_base64=str;
    if(key.isEmpty() || secret.isEmpty()){
        QMessageBox::information(NULL, "错误", "百度密钥不能为空");
        return;
    }
    getTextByApi();
//    this->show();
}

void MainWindow::showMainwindow() {
    this->show();
    if( windowState() != Qt::WindowActive){
        setWindowState( Qt::WindowActive);//正常化父窗体
    }
    //延时等待父窗体正常化 延时250毫秒
    QTime _Timer = QTime::currentTime().addMSecs(250);
    while( QTime::currentTime() < _Timer ){
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}

/**
 * 截图槽函数
 */
void MainWindow::onScreenshotClicked(){
    this->show();
//    this->hide();
    ui->frame->hide();
    //截图之前隐去窗体，不然截图之中就会有窗体的存在
    if( windowState() != Qt::WindowMinimized ){
        setWindowState( Qt::WindowMinimized );//最小化父窗体
    }
    //延时等待父窗体最小化 延时250毫秒
    QTime _Timer = QTime::currentTime().addMSecs(350);
    while( QTime::currentTime() < _Timer ){
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
//    qDebug()<<windowState();

    ui->resultEdit->setPlainText("");
    Screen *m = new Screen();
    QObject::connect(m,SIGNAL(sendNewStr(QString)),this,SLOT(getScreenshotImgBase64Str(QString)));
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect temp=screen->geometry();
//    qDebug()<<temp;
//    m->fullScreen = screen->grabWindow(0);
//    QDesktopWidget* desktop = QApplication::desktop();
//    qDebug()<<desktop->screenGeometry(0);
//    m->setGeometry(desktop->screenGeometry(0));

    m->fullScreen = screen->grabWindow(0,temp.left(),temp.top(),temp.width(),temp.height());
    m->showFullScreen();
}


void MainWindow::onTranslateClicked(){
    qDebug()<<"translate started";
    if(translate_flag==0) this->translateByGoogle();
    else this->translateByYoudao();
}


void MainWindow::translateByYoudao(){
    nam = new QNetworkAccessManager(this);
    QNetworkRequest request;
    QString temp=ui->resultEdit->toPlainText();
    qDebug()<<temp;

    QUrl url;
    url.setUrl("http://fanyi.youdao.com/translate?");
    QUrlQuery params;
    params.addQueryItem("type", "auto");
    params.addQueryItem("i", temp);
    params.addQueryItem("doctype", "json");
    params.addQueryItem("version", "2.1");
    params.addQueryItem("keyfrom", "fanyi.web");
    params.addQueryItem("ue", "UTF-8");
    params.addQueryItem("action", "FY_BY_CLICKBUTTON");
    params.addQueryItem("typoResult", "true");

    url.setQuery(params);
    request.setUrl(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/x-www-form-urlencoded"));
    connect(nam, &QNetworkAccessManager::finished,this, &MainWindow::getTranslateByYoudaoRequestFinished);
    QNetworkReply* reply = nam->get(request);
}



void MainWindow::getTranslateByYoudaoRequestFinished(QNetworkReply* reply) {
    QNetworkReply::NetworkError err = reply->error();
    if(err != QNetworkReply::NoError) {
        qDebug() << "Failed: " << reply->errorString();
        QMessageBox::information(NULL, "错误", "翻译出错");
    }
    else {
        QJsonParseError json_error;
        QJsonDocument parse_doucment = QJsonDocument::fromJson(reply->readAll(), &json_error);
        // qDebug()<<parse_doucment;
        qDebug()<<parse_doucment.isEmpty();
        if(parse_doucment.isEmpty()){
            qDebug()<<"Failed";
            return;
        }
        if(parse_doucment.isObject()){
            QJsonObject obj = parse_doucment.object();
            QJsonArray Array=obj["translateResult"].toArray();
            QString temp;
//            qDebug()<<Array.size();
            for(int i=0;i<Array.size();i++){
                temp+=Array[i].toArray()[0].toObject()["tgt"].toString();
                // temp+="\n";
            }
            ui->translateEdit->setText(temp);
            ui->frame->show();
            this->resize(1000,500);
            // qDebug()<<temp;
        }
    }
    nam->deleteLater();
}

void MainWindow::translateByGoogle(){
    nam = new QNetworkAccessManager(this);
    QUrl url;
    url.setUrl("http://translate.google.cn/translate_a/single?");
    QNetworkRequest request;

    QString temp=ui->resultEdit->toPlainText();

    QUrlQuery params;
    params.addQueryItem("client", "gtx");
    params.addQueryItem("dt", "t");
    params.addQueryItem("dj", "1");
    params.addQueryItem("ie", "UTF-8");
    params.addQueryItem("sl", "auto");
    params.addQueryItem("tl", "zh_Ch");
    params.addQueryItem("q", temp);
    url.setQuery(params);
    request.setUrl(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/x-www-form-urlencoded"));
    connect(nam, &QNetworkAccessManager::finished,this, &MainWindow::getTranslateByGoogleRequestFinished);
    QNetworkReply* reply = nam->get(request);

}

void MainWindow::getTranslateByGoogleRequestFinished(QNetworkReply* reply) {
    QNetworkReply::NetworkError err = reply->error();
    if(err != QNetworkReply::NoError) {
        qDebug() << "Failed: " << reply->errorString();
        QMessageBox::information(NULL, "错误", "翻译出错");
    }
    else {
        QJsonParseError json_error;
        QJsonDocument parse_doucment = QJsonDocument::fromJson(reply->readAll(), &json_error);
        // qDebug()<<parse_doucment;
        if(parse_doucment.isEmpty()){
            qDebug()<<"Failed";
            return;
        }
        if(parse_doucment.isObject()){
            QJsonObject obj = parse_doucment.object();
            QJsonArray Array=obj["sentences"].toArray();
            QString temp;
            for(int i=0;i<Array.size();i++){
                temp+=Array[i].toObject()["trans"].toString();
                // temp+="\n";
            }
            ui->translateEdit->setText(temp);
            ui->frame->show();
            this->resize(1000,500);
//            qDebug()<<temp;
        }
    }
    nam->deleteLater();
}


void MainWindow::getTextByApi(){
    if(detect_flag==0) recognitionByBaidu();
    else recognitionByTencent();
}

/**
 * 获取百度Access Token
 */
void MainWindow::getAccessToken(){
    QSettings *configIniWrite = new QSettings("set.ini", QSettings::IniFormat);
    QDateTime time = QDateTime::currentDateTime();   //获取当前时间
    int timeT = time.toTime_t();   //将当前时间转为时间戳
    //    当密钥保存时间超过一个月后重新更新密钥
    if((configIniWrite->value("tokenTime").toInt() + 30*24*3600) < timeT){
        nam = new QNetworkAccessManager(this);
        QString parm = "https://aip.baidubce.com/oauth/2.0/token?grant_type=client_credentials&client_id="+key+"&client_secret="+secret+"&";
        QUrl url(parm);
        connect(nam, &QNetworkAccessManager::finished,this, &MainWindow::getAccessTokenRequestFinished);
        QNetworkReply* reply = nam->get(QNetworkRequest(url));
    }else{
        accessToken = configIniWrite->value("accessToken").toString();
    }
}


/**
 * 获取access_token后的信号槽
 */
void MainWindow::getAccessTokenRequestFinished(QNetworkReply* reply) {
    QNetworkReply::NetworkError err = reply->error();
    if(err != QNetworkReply::NoError) {
        qDebug() << "Failed: " << reply->errorString();
    }else {
        // 获取返回内容
        QJsonParseError json_error;
        QJsonDocument parse_doucment = QJsonDocument::fromJson(reply->readAll(), &json_error);
        if(parse_doucment.isObject()){
            QJsonObject obj = parse_doucment.object();
            accessToken = obj.take("access_token").toString();
            QSettings *configIniWrite = new QSettings("set.ini", QSettings::IniFormat);
            configIniWrite->setValue("accessToken", accessToken);
            QDateTime time = QDateTime::currentDateTime();   //获取当前时间
            int timeT = time.toTime_t();   //将当前时间转为时间戳
            configIniWrite->setValue("tokenTime", timeT);
            delete configIniWrite;
        }
    }
    nam->deleteLater();
}


void MainWindow::recognitionByBaidu(){
    this->getAccessToken();
    QString parm=screenshot_img_base64;
    if(parm.isEmpty()){
        QMessageBox::information(NULL, "错误", "图像数据不能为空");
        return;
    }
    nam = new QNetworkAccessManager(this);
    QUrl url;
    if(precise_flag==0) url.setUrl("https://aip.baidubce.com/rest/2.0/ocr/v1/general_basic?access_token="+accessToken);
    else{
        url.setUrl("https://aip.baidubce.com/rest/2.0/ocr/v1/accurate_basic?access_token="+accessToken);
    }
        

    QNetworkRequest request;
    request.setUrl(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/x-www-form-urlencoded"));
    QByteArray byteArr;
    byteArr.append("image=");
    byteArr.append(QUrl::toPercentEncoding(parm));
    byteArr.append("&paragraph=true");
    // qDebug()<<byteArr;
    connect(nam, &QNetworkAccessManager::finished,this, &MainWindow::recognitionRequestByBaiduFinished);
    QNetworkReply* reply = nam->post(request,byteArr);
}



/**
 * 文字识别的信号槽
 */
void MainWindow::recognitionRequestByBaiduFinished(QNetworkReply* reply){
    QNetworkReply::NetworkError err = reply->error();
    if(err != QNetworkReply::NoError) {
        qDebug() << "Failed: " << reply->errorString();
        QMessageBox::information(NULL, "错误", "识别出错");
    }
    else {
        // 获取返回内容
        QJsonParseError json_error;
        QJsonDocument parse_doucment = QJsonDocument::fromJson(reply->readAll(), &json_error);
        if(parse_doucment.isObject()){
            QJsonObject obj = parse_doucment.object();
            qDebug()<<obj;
            
            int wordsNum = obj.take("words_result_num").toInt();
            if(wordsNum > 0){
                QVector<QString> str_vec;
                split_result.clear();
                merge_result.clear();
                QJsonArray jsonArr = obj.take("words_result").toArray();
                for(int i=0;i<wordsNum;i++){
                    str_vec.push_back(jsonArr[i].toObject().take("words").toString());
                }
                int para_num=obj.take("paragraphs_result_num").toInt();
                jsonArr = obj.take("paragraphs_result").toArray();
                for(int i=0;i<para_num;i++){
                    QJsonArray temp=jsonArr[i].toObject().take("words_result_idx").toArray();
                    for(int j=0;j<temp.size();j++){
                        split_result.append(str_vec[temp[j].toInt()]);
                        merge_result.append(str_vec[temp[j].toInt()]);
                    }
                    split_result.append("\n");
                }    
                ui->resultEdit->setText(split_result);
                if(!split_result.isEmpty()&&copy_flag==1){
                    QClipboard *board = QApplication::clipboard();
                    board->setText(split_result);
                }
            }
   
            else{
                QMessageBox::information(NULL, "提示", "无法识别图片内容");
            }
        }

        if( windowState() != Qt::WindowActive){
            setWindowState( Qt::WindowActive);//正常化父窗体
        }
        //延时等待父窗体正常化 延时250毫秒
        QTime _Timer = QTime::currentTime().addMSecs(250);
        while( QTime::currentTime() < _Timer ){
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        }
    }
    nam->deleteLater();
}

void MainWindow::recognitionByTencent(){
//    qDebug()<<"U are in recognitionByTencent";
    QString parm=screenshot_img_base64;
    if(parm.isEmpty()){
        QMessageBox::information(NULL, "错误", "图像数据不能为空");
        return;
    }
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
    int a = qrand()%10000000;
    int t=QDateTime::currentDateTime().toTime_t();

    QUrl url;
    url.setUrl("https://api.ai.qq.com/fcgi-bin/ocr/ocr_generalocr");

    QMap<QString,QString> key_map;
    key_map.insert("app_id","2156138400");
    key_map.insert("time_stamp",QString::number(t));
    key_map.insert("nonce_str",QString::number(a));
    key_map.insert("image",parm);
    QByteArray ba;
    QString appkey = "zImPou8at9qEM4db";
    QMap<QString,QString>::Iterator it=key_map.begin();
    while(it!=key_map.end())
    {
        ba.append(QUrl::toPercentEncoding(it.key()));
        ba.append("=");
        ba.append(QUrl::toPercentEncoding(it.value()));
        ba.append("&");
        it++;
    }
    ba.append("app_key=");
    ba.append(QUrl::toPercentEncoding(appkey));

    QByteArray bytePwdMd5 = QCryptographicHash::hash(ba, QCryptographicHash::Md5);
    QString strPwdMd5 = bytePwdMd5.toHex();
    QString sign=strPwdMd5.toUpper();
    QByteArray byteArr;
    ba.append("&sign=");
    ba.append(QUrl::toPercentEncoding(sign));

    nam = new QNetworkAccessManager(this);
    QNetworkRequest request;
    request.setUrl(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader,QVariant("application/x-www-form-urlencoded"));
    connect(nam, &QNetworkAccessManager::finished,this, &MainWindow::recognitionRequestByTencentFinished);
    QNetworkReply* reply = nam->post(request,ba);
}

void MainWindow::recognitionRequestByTencentFinished(QNetworkReply* reply){
    QNetworkReply::NetworkError err = reply->error();
    if(err != QNetworkReply::NoError) {
        qDebug() << "Failed: " << reply->errorString();
        QMessageBox::information(NULL, "错误", "识别出错");
    }
    else {
        // 获取返回内容
        QJsonParseError json_error;
        QJsonDocument parse_doucment = QJsonDocument::fromJson(reply->readAll(), &json_error);
//        qDebug()<<parse_doucment;
        if(parse_doucment.isObject()){
            QJsonObject obj = parse_doucment.object();
            int ret_flag = obj["ret"].toInt();
            if(ret_flag == 0){
                split_result.clear();
                merge_result.clear();

//                qDebug()<<obj["data"].toObject()["item_list"].toArray();
                QJsonArray jsonArr = obj["data"].toObject()["item_list"].toArray();
                for(int i=0;i<jsonArr.size();i++){
                    split_result.append(jsonArr[i].toObject()["itemstring"].toString());
                    split_result.append("\n");
                    merge_result.append(jsonArr[i].toObject()["itemstring"].toString());

                }
                ui->resultEdit->setText(split_result);
                if(!split_result.isEmpty()&&copy_flag==1){
                    QClipboard *board = QApplication::clipboard();
                    board->setText(split_result);
                }
            }
            else{
                QMessageBox::information(NULL, "提示", "无法识别图片内容");
            }
        }

        if( windowState() != Qt::WindowActive){
            setWindowState( Qt::WindowActive);//正常化父窗体
        }
        //延时等待父窗体正常化 延时250毫秒
        QTime _Timer = QTime::currentTime().addMSecs(250);
        while( QTime::currentTime() < _Timer ){
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
        }
    }
    nam->deleteLater();
}

void MainWindow::onSplitButtonClicked()
{
    split_flag=1;
    ui->resultEdit->setText(split_result);
}

void MainWindow::onMergeButtonClicked()
{
    split_flag=0;
    ui->resultEdit->setText(merge_result);
}

void MainWindow::loadConfigSettings(){
    QSettings *configIniRead = new QSettings("set.ini", QSettings::IniFormat);
    key=configIniRead->value("key").toString();
    secret=configIniRead->value("secret").toString();
    translate_flag=configIniRead->value("translate").toInt();
    precise_flag=configIniRead->value("precise").toInt();
    copy_flag=configIniRead->value("autoCopy").toInt();
    detect_flag=configIniRead->value("detect").toInt();
    delete configIniRead;
}


void MainWindow::closeEvent(QCloseEvent *event)
{
    if( windowState() != Qt::WindowMinimized ){
        setWindowState( Qt::WindowMinimized );//最小化父窗体
    }
    //延时等待父窗体最小化 延时250毫秒
    QTime _Timer = QTime::currentTime().addMSecs(250);
    while( QTime::currentTime() < _Timer ){
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
    event->ignore();
    this->hide();
}



void MainWindow::mousePressEvent(QMouseEvent *e){
    if (e->button() == Qt::LeftButton){//鼠标左键按下
        leftPress = true;
        beginPos = e->pos();//鼠标相对窗体的位置
    }
}


void MainWindow::mouseMoveEvent(QMouseEvent *e){
    if (leftPress){
        //窗体移动后的位置=//鼠标移动的大小+窗体原来的位置
        move(e->pos() - beginPos + this->pos());
    }
}


void MainWindow::mouseReleaseEvent(QMouseEvent *e){
    leftPress = false;
}


void MainWindow::enterEvent(QEvent *e){
    if(this->pos().y()<=0){
        move(pos().x(),0);
    }

}

void MainWindow::leaveEvent(QEvent *e){
    if(this->pos().y()<=0){
        move(pos().x(),-29);
    }
}


void MainWindow::onExitTranslateButtonClicked()
{
    ui->frame->hide();
    ui->translateEdit->clear();
    this->resize(500,500);
}
