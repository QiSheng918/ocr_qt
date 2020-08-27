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
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout;
    QLineEdit *keyEdit;
    QLineEdit *secretEdit;
    QLabel *keyLabel;
    QLabel *secretLabel;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QRadioButton *googleradioButton;
    QRadioButton *youdaoRadioButton;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *autoCopyCheckBox;
    QCheckBox *preciseCheckBox;
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
        verticalLayout_4 = new QVBoxLayout(setting);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
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

        secretEdit = new QLineEdit(setting);
        secretEdit->setObjectName(QStringLiteral("secretEdit"));

        gridLayout->addWidget(secretEdit, 1, 1, 1, 1);

        keyLabel = new QLabel(setting);
        keyLabel->setObjectName(QStringLiteral("keyLabel"));

        gridLayout->addWidget(keyLabel, 0, 0, 1, 1);

        secretLabel = new QLabel(setting);
        secretLabel->setObjectName(QStringLiteral("secretLabel"));

        gridLayout->addWidget(secretLabel, 1, 0, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 4);

        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label = new QLabel(setting);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        googleradioButton = new QRadioButton(setting);
        googleradioButton->setObjectName(QStringLiteral("googleradioButton"));

        verticalLayout->addWidget(googleradioButton);

        youdaoRadioButton = new QRadioButton(setting);
        youdaoRadioButton->setObjectName(QStringLiteral("youdaoRadioButton"));

        verticalLayout->addWidget(youdaoRadioButton);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 38, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        autoCopyCheckBox = new QCheckBox(setting);
        autoCopyCheckBox->setObjectName(QStringLiteral("autoCopyCheckBox"));

        verticalLayout_2->addWidget(autoCopyCheckBox);

        preciseCheckBox = new QCheckBox(setting);
        preciseCheckBox->setObjectName(QStringLiteral("preciseCheckBox"));

        verticalLayout_2->addWidget(preciseCheckBox);


        horizontalLayout->addLayout(verticalLayout_2);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_3->addLayout(horizontalLayout);

        verticalLayout_3->setStretch(0, 3);
        verticalLayout_3->setStretch(1, 2);
        verticalLayout_3->setStretch(3, 3);

        verticalLayout_4->addLayout(verticalLayout_3);

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

        verticalLayout_4->addLayout(horizontalLayout_2);


        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QDialog *setting)
    {
        setting->setWindowTitle(QApplication::translate("setting", "Dialog", 0));
        keyLabel->setText(QApplication::translate("setting", "\347\231\276\345\272\246API Key", 0));
        secretLabel->setText(QApplication::translate("setting", "\347\231\276\345\272\246Secret Key", 0));
        label->setText(QApplication::translate("setting", "  \347\277\273\350\257\221\345\274\225\346\223\216", 0));
        googleradioButton->setText(QApplication::translate("setting", "Google", 0));
        youdaoRadioButton->setText(QApplication::translate("setting", "\346\234\211\351\201\223", 0));
        autoCopyCheckBox->setText(QApplication::translate("setting", "\350\207\252\345\212\250\345\244\215\345\210\266", 0));
        preciseCheckBox->setText(QApplication::translate("setting", "\351\253\230\347\262\276\345\272\246\350\257\206\345\210\253", 0));
        saveButton->setText(QApplication::translate("setting", "Save", 0));
        exitButton->setText(QApplication::translate("setting", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
