#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QSystemTrayIcon>
#include <QCloseEvent>
#include "setting.h"
#include "QHotkey/qhotkey.h"
#include "QHotkey/qhotkey_p.h"




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void enterEvent(QEvent *e);  //--鼠标进入事件
    void leaveEvent(QEvent *e);  //--鼠标离开事件
    void mousePressEvent(QMouseEvent *e);       //--鼠标按下事件
    void mouseMoveEvent(QMouseEvent *e);       //--鼠标移动事件
    void mouseReleaseEvent(QMouseEvent *e);   //--鼠标释放（松开）事件
    void closeEvent(QCloseEvent *e);  //--关闭事件

    void getAccessToken();
    void getTextByApi();



private slots:

    void recognitionByBaidu();
    void recognitionByTencent();
    void getScreenshotImgBase64Str(QString);

    void getAccessTokenRequestFinished(QNetworkReply* reply);
    void recognitionRequestByTencentFinished(QNetworkReply* reply);
    void recognitionRequestByBaiduFinished(QNetworkReply* reply);

    void translateByGoogle();
    void translateByYoudao();
    void getTranslateByYoudaoRequestFinished(QNetworkReply* reply);
    void getTranslateByGoogleRequestFinished(QNetworkReply* reply);


    void showSettings();
    void closeSettings();

    void onScreenshotClicked();
    void onTranslateClicked();
    void onSplitButtonClicked();
    void onMergeButtonClicked();
    void onExitTranslateButtonClicked();

    void loadConfigSettings();

    void onActivated(QSystemTrayIcon::ActivationReason reason);
    
    void showMainwindow();

private:
    Ui::MainWindow *ui;
    bool leftPress;
    QPoint beginPos;
    QString accessToken;
    QNetworkAccessManager *nam;

    QString key,secret;
    int precise_flag;
    int copy_flag;
    int translate_flag;
    int split_flag;
    int detect_flag;

    QString screenshot_img_base64;
    QString split_result;
    QString merge_result;

    double scale_factor;
    

    QHotkey *qk;

    QSystemTrayIcon *pSystemTray;
    setting *m_setting;
};

#endif // MAINWINDOW_H
