/********************************************************************************
** Form generated from reading UI file 'DotaBPMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOTABPMAINWINDOW_H
#define UI_DOTABPMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DotaBPMainWindowClass
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_RadPick1;
    QLineEdit *lineEdit_DirePick1;
    QLineEdit *lineEdit_RadPick2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_DirePick2;
    QLineEdit *lineEdit_RadPick3;
    QLineEdit *lineEdit_DirePick3;
    QLineEdit *lineEdit_RadPick4;
    QLineEdit *lineEdit_DirePick4;
    QLineEdit *lineEdit_RadPick5;
    QLineEdit *lineEdit_DirePick5;
    QLineEdit *lineEdit_RadBan2;
    QLineEdit *lineEdit_DireBan2;
    QLineEdit *lineEdit_RadBan3;
    QLineEdit *lineEdit_DireBan1;
    QLineEdit *lineEdit_RadBan1;
    QLineEdit *lineEdit_RadBan4;
    QLineEdit *lineEdit_DireBan4;
    QLineEdit *lineEdit_DireBan5;
    QLineEdit *lineEdit_RadBan5;
    QLineEdit *lineEdit_DireBan3;
    QLineEdit *lineEdit_RadBan6;
    QLineEdit *lineEdit_DireBan6;
    QTableView *tableView;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QGroupBox *groupBox_Team;
    QRadioButton *radio_Radiant;
    QRadioButton *radio_Dire;
    QGroupBox *groupBox_First;
    QRadioButton *radio_First;
    QRadioButton *radio_Second;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DotaBPMainWindowClass)
    {
        if (DotaBPMainWindowClass->objectName().isEmpty())
            DotaBPMainWindowClass->setObjectName(QStringLiteral("DotaBPMainWindowClass"));
        DotaBPMainWindowClass->resize(829, 550);
        centralWidget = new QWidget(DotaBPMainWindowClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lineEdit_RadPick1 = new QLineEdit(centralWidget);
        lineEdit_RadPick1->setObjectName(QStringLiteral("lineEdit_RadPick1"));
        lineEdit_RadPick1->setGeometry(QRect(80, 170, 113, 20));
        lineEdit_DirePick1 = new QLineEdit(centralWidget);
        lineEdit_DirePick1->setObjectName(QStringLiteral("lineEdit_DirePick1"));
        lineEdit_DirePick1->setGeometry(QRect(260, 170, 113, 20));
        lineEdit_RadPick2 = new QLineEdit(centralWidget);
        lineEdit_RadPick2->setObjectName(QStringLiteral("lineEdit_RadPick2"));
        lineEdit_RadPick2->setGeometry(QRect(80, 200, 113, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 30, 111, 20));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 30, 111, 21));
        label_2->setAlignment(Qt::AlignCenter);
        lineEdit_DirePick2 = new QLineEdit(centralWidget);
        lineEdit_DirePick2->setObjectName(QStringLiteral("lineEdit_DirePick2"));
        lineEdit_DirePick2->setGeometry(QRect(260, 200, 113, 20));
        lineEdit_RadPick3 = new QLineEdit(centralWidget);
        lineEdit_RadPick3->setObjectName(QStringLiteral("lineEdit_RadPick3"));
        lineEdit_RadPick3->setGeometry(QRect(80, 320, 113, 20));
        lineEdit_DirePick3 = new QLineEdit(centralWidget);
        lineEdit_DirePick3->setObjectName(QStringLiteral("lineEdit_DirePick3"));
        lineEdit_DirePick3->setGeometry(QRect(260, 320, 113, 20));
        lineEdit_RadPick4 = new QLineEdit(centralWidget);
        lineEdit_RadPick4->setObjectName(QStringLiteral("lineEdit_RadPick4"));
        lineEdit_RadPick4->setGeometry(QRect(80, 350, 113, 20));
        lineEdit_DirePick4 = new QLineEdit(centralWidget);
        lineEdit_DirePick4->setObjectName(QStringLiteral("lineEdit_DirePick4"));
        lineEdit_DirePick4->setGeometry(QRect(260, 350, 113, 20));
        lineEdit_RadPick5 = new QLineEdit(centralWidget);
        lineEdit_RadPick5->setObjectName(QStringLiteral("lineEdit_RadPick5"));
        lineEdit_RadPick5->setGeometry(QRect(80, 450, 113, 20));
        lineEdit_DirePick5 = new QLineEdit(centralWidget);
        lineEdit_DirePick5->setObjectName(QStringLiteral("lineEdit_DirePick5"));
        lineEdit_DirePick5->setGeometry(QRect(260, 450, 113, 20));
        lineEdit_RadBan2 = new QLineEdit(centralWidget);
        lineEdit_RadBan2->setObjectName(QStringLiteral("lineEdit_RadBan2"));
        lineEdit_RadBan2->setGeometry(QRect(80, 100, 113, 20));
        lineEdit_RadBan2->setAutoFillBackground(false);
        lineEdit_DireBan2 = new QLineEdit(centralWidget);
        lineEdit_DireBan2->setObjectName(QStringLiteral("lineEdit_DireBan2"));
        lineEdit_DireBan2->setGeometry(QRect(260, 100, 113, 20));
        lineEdit_DireBan2->setAutoFillBackground(false);
        lineEdit_RadBan3 = new QLineEdit(centralWidget);
        lineEdit_RadBan3->setObjectName(QStringLiteral("lineEdit_RadBan3"));
        lineEdit_RadBan3->setGeometry(QRect(80, 130, 113, 20));
        lineEdit_RadBan3->setAutoFillBackground(false);
        lineEdit_DireBan1 = new QLineEdit(centralWidget);
        lineEdit_DireBan1->setObjectName(QStringLiteral("lineEdit_DireBan1"));
        lineEdit_DireBan1->setGeometry(QRect(260, 70, 113, 20));
        lineEdit_DireBan1->setAutoFillBackground(false);
        lineEdit_RadBan1 = new QLineEdit(centralWidget);
        lineEdit_RadBan1->setObjectName(QStringLiteral("lineEdit_RadBan1"));
        lineEdit_RadBan1->setGeometry(QRect(80, 70, 113, 20));
        lineEdit_RadBan1->setAutoFillBackground(false);
        lineEdit_RadBan4 = new QLineEdit(centralWidget);
        lineEdit_RadBan4->setObjectName(QStringLiteral("lineEdit_RadBan4"));
        lineEdit_RadBan4->setGeometry(QRect(80, 240, 113, 20));
        lineEdit_DireBan4 = new QLineEdit(centralWidget);
        lineEdit_DireBan4->setObjectName(QStringLiteral("lineEdit_DireBan4"));
        lineEdit_DireBan4->setGeometry(QRect(260, 240, 113, 20));
        lineEdit_DireBan5 = new QLineEdit(centralWidget);
        lineEdit_DireBan5->setObjectName(QStringLiteral("lineEdit_DireBan5"));
        lineEdit_DireBan5->setGeometry(QRect(260, 270, 113, 20));
        lineEdit_RadBan5 = new QLineEdit(centralWidget);
        lineEdit_RadBan5->setObjectName(QStringLiteral("lineEdit_RadBan5"));
        lineEdit_RadBan5->setGeometry(QRect(80, 270, 113, 20));
        lineEdit_DireBan3 = new QLineEdit(centralWidget);
        lineEdit_DireBan3->setObjectName(QStringLiteral("lineEdit_DireBan3"));
        lineEdit_DireBan3->setGeometry(QRect(260, 130, 113, 20));
        lineEdit_DireBan3->setAutoFillBackground(false);
        lineEdit_RadBan6 = new QLineEdit(centralWidget);
        lineEdit_RadBan6->setObjectName(QStringLiteral("lineEdit_RadBan6"));
        lineEdit_RadBan6->setGeometry(QRect(80, 400, 113, 20));
        lineEdit_DireBan6 = new QLineEdit(centralWidget);
        lineEdit_DireBan6->setObjectName(QStringLiteral("lineEdit_DireBan6"));
        lineEdit_DireBan6->setGeometry(QRect(260, 400, 113, 20));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(430, 100, 331, 371));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 70, 54, 12));
        label_3->setAutoFillBackground(false);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 170, 54, 12));
        label_4->setAutoFillBackground(false);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 240, 54, 12));
        label_5->setAutoFillBackground(false);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 320, 54, 12));
        label_6->setAutoFillBackground(false);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 400, 54, 12));
        label_7->setAutoFillBackground(false);
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 450, 54, 12));
        label_8->setAutoFillBackground(false);
        groupBox_Team = new QGroupBox(centralWidget);
        groupBox_Team->setObjectName(QStringLiteral("groupBox_Team"));
        groupBox_Team->setGeometry(QRect(430, 10, 151, 71));
        radio_Radiant = new QRadioButton(groupBox_Team);
        radio_Radiant->setObjectName(QStringLiteral("radio_Radiant"));
        radio_Radiant->setGeometry(QRect(20, 30, 89, 16));
        radio_Dire = new QRadioButton(groupBox_Team);
        radio_Dire->setObjectName(QStringLiteral("radio_Dire"));
        radio_Dire->setGeometry(QRect(80, 30, 89, 16));
        groupBox_First = new QGroupBox(centralWidget);
        groupBox_First->setObjectName(QStringLiteral("groupBox_First"));
        groupBox_First->setGeometry(QRect(610, 10, 151, 71));
        radio_First = new QRadioButton(groupBox_First);
        radio_First->setObjectName(QStringLiteral("radio_First"));
        radio_First->setGeometry(QRect(20, 30, 89, 16));
        radio_Second = new QRadioButton(groupBox_First);
        radio_Second->setObjectName(QStringLiteral("radio_Second"));
        radio_Second->setGeometry(QRect(80, 30, 89, 16));
        DotaBPMainWindowClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DotaBPMainWindowClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 829, 23));
        DotaBPMainWindowClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DotaBPMainWindowClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        DotaBPMainWindowClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DotaBPMainWindowClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        DotaBPMainWindowClass->setStatusBar(statusBar);

        retranslateUi(DotaBPMainWindowClass);

        QMetaObject::connectSlotsByName(DotaBPMainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *DotaBPMainWindowClass)
    {
        DotaBPMainWindowClass->setWindowTitle(QApplication::translate("DotaBPMainWindowClass", "DotaBPMainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("DotaBPMainWindowClass", "\345\244\251\350\276\211", Q_NULLPTR));
        label_2->setText(QApplication::translate("DotaBPMainWindowClass", "\345\244\234\351\255\207", Q_NULLPTR));
        lineEdit_RadBan2->setText(QString());
        lineEdit_DireBan2->setText(QString());
        lineEdit_RadBan3->setText(QString());
        lineEdit_DireBan1->setText(QString());
        lineEdit_RadBan1->setText(QString());
        lineEdit_RadBan4->setText(QString());
        lineEdit_DireBan4->setText(QString());
        lineEdit_DireBan5->setText(QString());
        lineEdit_RadBan5->setText(QString());
        lineEdit_DireBan3->setText(QString());
        lineEdit_RadBan6->setText(QString());
        lineEdit_DireBan6->setText(QString());
        label_3->setText(QApplication::translate("DotaBPMainWindowClass", "Ban", Q_NULLPTR));
        label_4->setText(QApplication::translate("DotaBPMainWindowClass", "Pick", Q_NULLPTR));
        label_5->setText(QApplication::translate("DotaBPMainWindowClass", "Ban", Q_NULLPTR));
        label_6->setText(QApplication::translate("DotaBPMainWindowClass", "Pick", Q_NULLPTR));
        label_7->setText(QApplication::translate("DotaBPMainWindowClass", "Ban", Q_NULLPTR));
        label_8->setText(QApplication::translate("DotaBPMainWindowClass", "Pick", Q_NULLPTR));
        groupBox_Team->setTitle(QApplication::translate("DotaBPMainWindowClass", "\346\210\221\346\226\271", Q_NULLPTR));
        radio_Radiant->setText(QApplication::translate("DotaBPMainWindowClass", "\345\244\251\350\276\211", Q_NULLPTR));
        radio_Dire->setText(QApplication::translate("DotaBPMainWindowClass", "\345\244\234\351\255\207", Q_NULLPTR));
        groupBox_First->setTitle(QApplication::translate("DotaBPMainWindowClass", "\346\230\257\345\220\246\345\205\210\351\200\211", Q_NULLPTR));
        radio_First->setText(QApplication::translate("DotaBPMainWindowClass", "\345\205\210\351\200\211", Q_NULLPTR));
        radio_Second->setText(QApplication::translate("DotaBPMainWindowClass", "\345\220\216\351\200\211", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DotaBPMainWindowClass: public Ui_DotaBPMainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOTABPMAINWINDOW_H
