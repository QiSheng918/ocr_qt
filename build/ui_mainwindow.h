/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *screenshotButton;
    QPushButton *translateButton;
    QPushButton *splitButton;
    QPushButton *mergeButton;
    QTextEdit *resultEdit;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *exitTranslateButton;
    QTextEdit *translateEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(661, 500);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(500, 500));
        MainWindow->setMaximumSize(QSize(1000, 500));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(centralWidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(15);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        screenshotButton = new QPushButton(frame_2);
        screenshotButton->setObjectName(QStringLiteral("screenshotButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(30);
        sizePolicy2.setHeightForWidth(screenshotButton->sizePolicy().hasHeightForWidth());
        screenshotButton->setSizePolicy(sizePolicy2);
        screenshotButton->setMaximumSize(QSize(16777215, 30));
        screenshotButton->setContextMenuPolicy(Qt::DefaultContextMenu);
        screenshotButton->setCheckable(false);
        screenshotButton->setAutoDefault(false);
        screenshotButton->setFlat(false);

        horizontalLayout->addWidget(screenshotButton);

        translateButton = new QPushButton(frame_2);
        translateButton->setObjectName(QStringLiteral("translateButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(translateButton->sizePolicy().hasHeightForWidth());
        translateButton->setSizePolicy(sizePolicy3);
        translateButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(translateButton);

        splitButton = new QPushButton(frame_2);
        splitButton->setObjectName(QStringLiteral("splitButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(30);
        sizePolicy4.setHeightForWidth(splitButton->sizePolicy().hasHeightForWidth());
        splitButton->setSizePolicy(sizePolicy4);
        splitButton->setMinimumSize(QSize(0, 30));
        splitButton->setMaximumSize(QSize(16777215, 30));

        horizontalLayout->addWidget(splitButton);

        mergeButton = new QPushButton(frame_2);
        mergeButton->setObjectName(QStringLiteral("mergeButton"));
        sizePolicy2.setHeightForWidth(mergeButton->sizePolicy().hasHeightForWidth());
        mergeButton->setSizePolicy(sizePolicy2);
        mergeButton->setMinimumSize(QSize(0, 30));

        horizontalLayout->addWidget(mergeButton);


        verticalLayout_2->addLayout(horizontalLayout);

        resultEdit = new QTextEdit(frame_2);
        resultEdit->setObjectName(QStringLiteral("resultEdit"));
        sizePolicy1.setHeightForWidth(resultEdit->sizePolicy().hasHeightForWidth());
        resultEdit->setSizePolicy(sizePolicy1);
        resultEdit->setFrameShape(QFrame::WinPanel);
        resultEdit->setFrameShadow(QFrame::Sunken);
        resultEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        verticalLayout_2->addWidget(resultEdit);


        horizontalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_4->addWidget(frame_2);

        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        exitTranslateButton = new QPushButton(frame);
        exitTranslateButton->setObjectName(QStringLiteral("exitTranslateButton"));
        QSizePolicy sizePolicy5(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(20);
        sizePolicy5.setHeightForWidth(exitTranslateButton->sizePolicy().hasHeightForWidth());
        exitTranslateButton->setSizePolicy(sizePolicy5);
        exitTranslateButton->setMinimumSize(QSize(0, 30));
        exitTranslateButton->setFlat(false);

        horizontalLayout_2->addWidget(exitTranslateButton);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        translateEdit = new QTextEdit(frame);
        translateEdit->setObjectName(QStringLiteral("translateEdit"));
        sizePolicy1.setHeightForWidth(translateEdit->sizePolicy().hasHeightForWidth());
        translateEdit->setSizePolicy(sizePolicy1);
        translateEdit->setFrameShape(QFrame::WinPanel);
        translateEdit->setFrameShadow(QFrame::Sunken);
        translateEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        verticalLayout->addWidget(translateEdit);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(frame);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        screenshotButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "OCR_QT", 0));
        screenshotButton->setText(QApplication::translate("MainWindow", "\346\210\252\345\233\276", 0));
        translateButton->setText(QApplication::translate("MainWindow", "\347\277\273\350\257\221", 0));
        splitButton->setText(QApplication::translate("MainWindow", "\346\215\242\350\241\214\346\230\276\347\244\272", 0));
        mergeButton->setText(QApplication::translate("MainWindow", "\345\220\210\345\271\266\346\230\276\347\244\272", 0));
        resultEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:11pt;\"><br /></p></body></html>", 0));
        exitTranslateButton->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\347\277\273\350\257\221", 0));
        translateEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:2px; margin-bottom:2px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun'; font-size:11pt;\"><br /></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
