/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *Boton1;
    QPushButton *Boton2;
    QPushButton *Boton3;
    QFrame *line;
    QFrame *line_2;
    QPushButton *Boton4;
    QPushButton *Boton6;
    QPushButton *Boton5;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QLabel *label_5;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuVI;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(509, 441);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 120, 131, 71));
        lcdNumber->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(255, 255, 255);background-color:rgb(0, 0, 0);}"));
        lcdNumber->setDigitCount(5);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 120, 211, 31));
        label->setStyleSheet(QString::fromUtf8("\n"
"\n"
"border-color: rgb(170, 170, 170);\n"
"font: 75 8pt \"Nirmala UI\";\n"
"text-decoration: underline;"));
        label->setAlignment(Qt::AlignCenter);
        lcdNumber_2 = new QLCDNumber(centralWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(10, 250, 131, 71));
        lcdNumber_2->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(255, 255, 255);background-color:rgb(0, 0, 0);}"));
        lcdNumber_2->setDigitCount(5);
        lcdNumber_3 = new QLCDNumber(centralWidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(260, 250, 131, 71));
        lcdNumber_3->setStyleSheet(QString::fromUtf8("QLCDNumber{color:rgb(255, 255, 255);background-color:rgb(0, 0, 0);}"));
        lcdNumber_3->setDigitCount(5);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 160, 171, 25));
        pushButton->setStyleSheet(QString::fromUtf8("\n"
"border-color: rgb(159, 159, 159);\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 90, 221, 16));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 0, 65);\n"
"font: 11pt \"Sitka Small\";\n"
"border-color: rgb(170, 170, 170);"));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 220, 221, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 0, 65);\n"
"border-color: rgb(170, 170, 170);"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 220, 221, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 0, 65);\n"
"border-color: rgb(170, 170, 170);"));
        label_4->setAlignment(Qt::AlignCenter);
        Boton1 = new QPushButton(centralWidget);
        Boton1->setObjectName(QString::fromUtf8("Boton1"));
        Boton1->setGeometry(QRect(150, 130, 80, 25));
        Boton2 = new QPushButton(centralWidget);
        Boton2->setObjectName(QString::fromUtf8("Boton2"));
        Boton2->setGeometry(QRect(150, 160, 80, 25));
        Boton3 = new QPushButton(centralWidget);
        Boton3->setObjectName(QString::fromUtf8("Boton3"));
        Boton3->setGeometry(QRect(150, 260, 80, 25));
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-20, 70, 571, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(233, 80, 20, 261));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        Boton4 = new QPushButton(centralWidget);
        Boton4->setObjectName(QString::fromUtf8("Boton4"));
        Boton4->setGeometry(QRect(150, 290, 80, 25));
        Boton6 = new QPushButton(centralWidget);
        Boton6->setObjectName(QString::fromUtf8("Boton6"));
        Boton6->setGeometry(QRect(400, 290, 80, 25));
        Boton6->setStyleSheet(QString::fromUtf8(""));
        Boton5 = new QPushButton(centralWidget);
        Boton5->setObjectName(QString::fromUtf8("Boton5"));
        Boton5->setGeometry(QRect(400, 260, 80, 25));
        Boton5->setStyleSheet(QString::fromUtf8(""));
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(-10, 0, 571, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(0, 200, 241, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(centralWidget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(250, 200, 241, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(250, 90, 221, 16));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(43, 0, 65);\n"
"border-color: rgb(170, 170, 170);"));
        label_5->setAlignment(Qt::AlignCenter);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 330, 91, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 509, 21));
        menuVI = new QMenu(menuBar);
        menuVI->setObjectName(QString::fromUtf8("menuVI"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuVI->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ESTADO DE LA CONEXI\303\223N", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "INICIAR", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TEMPERATURA ACTUAL", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "SET POINT ACTUAL", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "ESTABLECER SET POINT", nullptr));
        Boton1->setText(QCoreApplication::translate("MainWindow", "VER ", nullptr));
        Boton2->setText(QCoreApplication::translate("MainWindow", "APAGAR", nullptr));
        Boton3->setText(QCoreApplication::translate("MainWindow", "VER", nullptr));
        Boton4->setText(QCoreApplication::translate("MainWindow", "APAGAR", nullptr));
        Boton6->setText(QCoreApplication::translate("MainWindow", "- -", nullptr));
        Boton5->setText(QCoreApplication::translate("MainWindow", "++", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "PARA INICIAR PULSE 2 VECES", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "ENVIAR", nullptr));
        menuVI->setTitle(QCoreApplication::translate("MainWindow", "VI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
