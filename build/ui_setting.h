/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QRadioButton *baiduRadioButton;
    QRadioButton *tencentRadioButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QRadioButton *googleradioButton;
    QRadioButton *youdaoRadioButton;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *preciseCheckBox;
    QCheckBox *autoCopyCheckBox;
    QGridLayout *gridLayout;
    QLineEdit *keyEdit;
    QLabel *keyLabel;
    QLabel *secretLabel;
    QLineEdit *secretEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *exitButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QStringLiteral("setting"));
        setting->resize(543, 415);
        verticalLayout_6 = new QVBoxLayout(setting);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label = new QLabel(setting);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        baiduRadioButton = new QRadioButton(setting);
        baiduRadioButton->setObjectName(QStringLiteral("baiduRadioButton"));

        verticalLayout_5->addWidget(baiduRadioButton);

        tencentRadioButton = new QRadioButton(setting);
        tencentRadioButton->setObjectName(QStringLiteral("tencentRadioButton"));

        verticalLayout_5->addWidget(tencentRadioButton);


        horizontalLayout->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(setting);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        googleradioButton = new QRadioButton(setting);
        googleradioButton->setObjectName(QStringLiteral("googleradioButton"));

        verticalLayout->addWidget(googleradioButton);

        youdaoRadioButton = new QRadioButton(setting);
        youdaoRadioButton->setObjectName(QStringLiteral("youdaoRadioButton"));

        verticalLayout->addWidget(youdaoRadioButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        preciseCheckBox = new QCheckBox(setting);
        preciseCheckBox->setObjectName(QStringLiteral("preciseCheckBox"));

        horizontalLayout_4->addWidget(preciseCheckBox);

        autoCopyCheckBox = new QCheckBox(setting);
        autoCopyCheckBox->setObjectName(QStringLiteral("autoCopyCheckBox"));

        horizontalLayout_4->addWidget(autoCopyCheckBox);


        horizontalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        keyEdit = new QLineEdit(setting);
        keyEdit->setObjectName(QStringLiteral("keyEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(keyEdit->sizePolicy().hasHeightForWidth());
        keyEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(keyEdit, 0, 1, 1, 1);

        keyLabel = new QLabel(setting);
        keyLabel->setObjectName(QStringLiteral("keyLabel"));

        gridLayout->addWidget(keyLabel, 0, 0, 1, 1);

        secretLabel = new QLabel(setting);
        secretLabel->setObjectName(QStringLiteral("secretLabel"));

        gridLayout->addWidget(secretLabel, 1, 0, 1, 1);

        secretEdit = new QLineEdit(setting);
        secretEdit->setObjectName(QStringLiteral("secretEdit"));

        gridLayout->addWidget(secretEdit, 1, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 4);

        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        saveButton = new QPushButton(setting);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_2->addWidget(saveButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        exitButton = new QPushButton(setting);
        exitButton->setObjectName(QStringLiteral("exitButton"));

        horizontalLayout_2->addWidget(exitButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 2);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);
        verticalLayout_3->setStretch(3, 2);
        verticalLayout_3->setStretch(4, 1);

        verticalLayout_6->addLayout(verticalLayout_3);


        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QDialog *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "Dialog", 0));
        label->setText(QApplication::translate("setting", "  \350\257\206\345\210\253\345\274\225\346\223\216", 0));
        baiduRadioButton->setText(QApplication::translate("setting", "Baidu", 0));
        tencentRadioButton->setText(QApplication::translate("setting", "Tencent", 0));
        label_2->setText(QApplication::translate("setting", "  \347\277\273\350\257\221\345\274\225\346\223\216", 0));
        googleradioButton->setText(QApplication::translate("setting", "Google", 0));
        youdaoRadioButton->setText(QApplication::translate("setting", "\346\234\211\351\201\223", 0));
        preciseCheckBox->setText(QApplication::translate("setting", "\345\220\257\347\224\250\347\231\276\345\272\246\351\253\230\347\262\276\345\272\246\350\257\206\345\210\253", 0));
        autoCopyCheckBox->setText(QApplication::translate("setting", "\350\207\252\345\212\250\345\244\215\345\210\266", 0));
        keyLabel->setText(QApplication::translate("setting", "API Key", 0));
        secretLabel->setText(QApplication::translate("setting", "Secret Key", 0));
        saveButton->setText(QApplication::translate("setting", "Save", 0));
        exitButton->setText(QApplication::translate("setting", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
