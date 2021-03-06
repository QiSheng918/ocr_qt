#ifndef SCREEN_H
#define SCREEN_H

#include <QWidget>
#include <QPoint>
#include <QMouseEvent>
#include <QContextMenuEvent>
#include <QMenu>//右键菜单
#include <QPaintEvent>
#include <QPainter>//画笔
#include <QPixmap>
#include <QDebug>
#include <QDesktopWidget>
#include <QApplication>
#include <QFileDialog>
#include <QShowEvent>
#include <QClipboard>
#include <QKeyEvent>
#include <QRect>
#include <QFile>


class Screen : public QWidget
{
    Q_OBJECT
public:
    explicit Screen(QWidget *parent = 0);

signals:
     void sendNewStr(QString);

public slots:
     void saveScreenOther();//截图另存为
     void grapFullScreen();//全屏截图
     void copyScreen(); //右键复制到粘贴板
     void baiduDiscern();
protected:
//    void contextMenuEvent(QContextMenuEvent *);  //--右键菜单事件
    void mousePressEvent(QMouseEvent *e);       //--鼠标按下事件
    void mouseMoveEvent(QMouseEvent *e);       //--鼠标移动事件
    void mouseReleaseEvent(QMouseEvent *e);   //--鼠标释放（松开）事件
    void paintEvent(QPaintEvent *);          //--画图事件
    void showEvent(QShowEvent *);           //--窗体show事件
    void keyPressEvent(QKeyEvent *e);      //--按键事件

private:
    QPoint beginPos;//记录鼠标的起始位置
    QPoint endPos;//记录鼠标的结束位置
//    QMenu *menu; //右键菜单对象
    bool leftPres;//记录鼠标左键是否按下，按下为true
    QRect * rect; //矩形截图区域
public:
    QPixmap fullScreen;//全屏截图


public:
    QPoint getBeginPos();//获取鼠标的起始位置
    QPoint getEndPos();//获取鼠标的结束位置
    void setBeginPos(QPoint p);//设置鼠标的起始位置
    void setEndPos(QPoint p);//设置鼠标的结束位置

};

#endif // SCREEN_H
