/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QFrame *frame_principal;
    QVBoxLayout *verticalLayout_2;
    QFrame *FrameSuperior;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QRadioButton *Conect;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLabel *Puerto_2;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *Puerto;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frameInferior;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_izquierdo;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_12;
    QLabel *TempActual;
    QFrame *line;
    QFrame *frame_7;
    QLCDNumber *lcd_Temp;
    QPushButton *Ver;
    QPushButton *Apagar;
    QFrame *line_4;
    QFrame *frame_central;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_superior;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QFrame *line_8;
    QFrame *frame_10;
    QLCDNumber *lcdErroActual;
    QPushButton *ApagarError;
    QPushButton *VerError;
    QFrame *line_2;
    QFrame *Frame_inferiori;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QFrame *line_9;
    QFrame *frame_11;
    QPushButton *Apagar_PWM;
    QPushButton *Encender_PWM;
    QLCDNumber *lcdPWM;
    QFrame *line_3;
    QFrame *frame_derecho;
    QVBoxLayout *verticalLayout_3;
    QFrame *dere_superior;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QFrame *line_6;
    QFrame *frame_3;
    QGridLayout *gridLayout_4;
    QLCDNumber *lcdNumber_3;
    QPushButton *Aumentrar;
    QPushButton *Disminuir;
    QPushButton *Enviar;
    QFrame *line_5;
    QFrame *dere_infer;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QFrame *line_7;
    QFrame *frame_5;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcd_SetPoint_actual;
    QPushButton *VerSetPoint;
    QPushButton *OffSetPoint;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(854, 488);
        MainWindow->setMinimumSize(QSize(0, 0));
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget(MainWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_principal = new QFrame(widget);
        frame_principal->setObjectName(QString::fromUtf8("frame_principal"));
        frame_principal->setFrameShape(QFrame::StyledPanel);
        frame_principal->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_principal);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        FrameSuperior = new QFrame(frame_principal);
        FrameSuperior->setObjectName(QString::fromUtf8("FrameSuperior"));
        FrameSuperior->setMaximumSize(QSize(16777215, 40));
        FrameSuperior->setFrameShape(QFrame::StyledPanel);
        FrameSuperior->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(FrameSuperior);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        Conect = new QRadioButton(FrameSuperior);
        Conect->setObjectName(QString::fromUtf8("Conect"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        Conect->setFont(font);
        Conect->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(Conect);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label = new QLabel(FrameSuperior);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(true);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Arial"));
        font1.setPointSize(11);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0);"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_5 = new QSpacerItem(199, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        Puerto_2 = new QLabel(FrameSuperior);
        Puerto_2->setObjectName(QString::fromUtf8("Puerto_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Arial"));
        font2.setPointSize(10);
        Puerto_2->setFont(font2);

        horizontalLayout_2->addWidget(Puerto_2);

        horizontalSpacer_2 = new QSpacerItem(43, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        Puerto = new QComboBox(FrameSuperior);
        Puerto->addItem(QString());
        Puerto->addItem(QString());
        Puerto->addItem(QString());
        Puerto->addItem(QString());
        Puerto->addItem(QString());
        Puerto->addItem(QString());
        Puerto->setObjectName(QString::fromUtf8("Puerto"));
        Puerto->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(Puerto);

        horizontalSpacer_3 = new QSpacerItem(226, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 3);
        horizontalLayout_2->setStretch(3, 2);
        horizontalLayout_2->setStretch(4, 9);
        horizontalLayout_2->setStretch(5, 2);
        horizontalLayout_2->setStretch(6, 2);
        horizontalLayout_2->setStretch(7, 2);

        verticalLayout_2->addWidget(FrameSuperior);

        frameInferior = new QFrame(frame_principal);
        frameInferior->setObjectName(QString::fromUtf8("frameInferior"));
        frameInferior->setFrameShape(QFrame::StyledPanel);
        frameInferior->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frameInferior);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_izquierdo = new QFrame(frameInferior);
        frame_izquierdo->setObjectName(QString::fromUtf8("frame_izquierdo"));
        frame_izquierdo->setFrameShape(QFrame::StyledPanel);
        frame_izquierdo->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_izquierdo);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(frame_izquierdo);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_6);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        TempActual = new QLabel(frame_6);
        TempActual->setObjectName(QString::fromUtf8("TempActual"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Arial"));
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setWeight(75);
        TempActual->setFont(font3);
        TempActual->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        TempActual->setAlignment(Qt::AlignCenter);

        verticalLayout_12->addWidget(TempActual);


        verticalLayout_6->addWidget(frame_6);

        line = new QFrame(frame_izquierdo);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line);

        frame_7 = new QFrame(frame_izquierdo);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        lcd_Temp = new QLCDNumber(frame_7);
        lcd_Temp->setObjectName(QString::fromUtf8("lcd_Temp"));
        lcd_Temp->setGeometry(QRect(70, 80, 131, 61));
        Ver = new QPushButton(frame_7);
        Ver->setObjectName(QString::fromUtf8("Ver"));
        Ver->setGeometry(QRect(20, 190, 221, 31));
        Apagar = new QPushButton(frame_7);
        Apagar->setObjectName(QString::fromUtf8("Apagar"));
        Apagar->setGeometry(QRect(19, 260, 221, 31));

        verticalLayout_6->addWidget(frame_7);

        verticalLayout_6->setStretch(0, 2);
        verticalLayout_6->setStretch(2, 11);

        horizontalLayout->addWidget(frame_izquierdo);

        line_4 = new QFrame(frameInferior);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy);
        line_4->setLineWidth(1);
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_4);

        frame_central = new QFrame(frameInferior);
        frame_central->setObjectName(QString::fromUtf8("frame_central"));
        frame_central->setFrameShape(QFrame::StyledPanel);
        frame_central->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_central);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame_superior = new QFrame(frame_central);
        frame_superior->setObjectName(QString::fromUtf8("frame_superior"));
        frame_superior->setFrameShape(QFrame::StyledPanel);
        frame_superior->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_superior);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        frame_9 = new QFrame(frame_superior);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_9);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_5);


        verticalLayout_10->addWidget(frame_9);

        line_8 = new QFrame(frame_superior);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout_10->addWidget(line_8);

        frame_10 = new QFrame(frame_superior);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        lcdErroActual = new QLCDNumber(frame_10);
        lcdErroActual->setObjectName(QString::fromUtf8("lcdErroActual"));
        lcdErroActual->setGeometry(QRect(30, 10, 201, 71));
        ApagarError = new QPushButton(frame_10);
        ApagarError->setObjectName(QString::fromUtf8("ApagarError"));
        ApagarError->setGeometry(QRect(20, 130, 241, 21));
        VerError = new QPushButton(frame_10);
        VerError->setObjectName(QString::fromUtf8("VerError"));
        VerError->setGeometry(QRect(20, 100, 241, 21));

        verticalLayout_10->addWidget(frame_10);

        verticalLayout_10->setStretch(0, 2);
        verticalLayout_10->setStretch(2, 5);

        verticalLayout_5->addWidget(frame_superior);

        line_2 = new QFrame(frame_central);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(line_2);

        Frame_inferiori = new QFrame(frame_central);
        Frame_inferiori->setObjectName(QString::fromUtf8("Frame_inferiori"));
        Frame_inferiori->setFrameShape(QFrame::StyledPanel);
        Frame_inferiori->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(Frame_inferiori);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Frame_inferiori);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_2);


        verticalLayout_11->addWidget(frame);

        line_9 = new QFrame(Frame_inferiori);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(line_9);

        frame_11 = new QFrame(Frame_inferiori);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        Apagar_PWM = new QPushButton(frame_11);
        Apagar_PWM->setObjectName(QString::fromUtf8("Apagar_PWM"));
        Apagar_PWM->setGeometry(QRect(10, 108, 241, 21));
        Encender_PWM = new QPushButton(frame_11);
        Encender_PWM->setObjectName(QString::fromUtf8("Encender_PWM"));
        Encender_PWM->setGeometry(QRect(10, 80, 241, 21));
        lcdPWM = new QLCDNumber(frame_11);
        lcdPWM->setObjectName(QString::fromUtf8("lcdPWM"));
        lcdPWM->setGeometry(QRect(30, 10, 191, 61));

        verticalLayout_11->addWidget(frame_11);

        verticalLayout_11->setStretch(0, 2);
        verticalLayout_11->setStretch(2, 5);

        verticalLayout_5->addWidget(Frame_inferiori);

        verticalLayout_5->setStretch(0, 6);
        verticalLayout_5->setStretch(2, 5);

        horizontalLayout->addWidget(frame_central);

        line_3 = new QFrame(frameInferior);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_3);

        frame_derecho = new QFrame(frameInferior);
        frame_derecho->setObjectName(QString::fromUtf8("frame_derecho"));
        frame_derecho->setFrameShape(QFrame::StyledPanel);
        frame_derecho->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_derecho);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        dere_superior = new QFrame(frame_derecho);
        dere_superior->setObjectName(QString::fromUtf8("dere_superior"));
        dere_superior->setFrameShape(QFrame::StyledPanel);
        dere_superior->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(dere_superior);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(dere_superior);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_8->addWidget(frame_2);

        line_6 = new QFrame(dere_superior);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_8->addWidget(line_6);

        frame_3 = new QFrame(dere_superior);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame_3);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lcdNumber_3 = new QLCDNumber(frame_3);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout_4->addWidget(lcdNumber_3, 0, 0, 2, 1);

        Aumentrar = new QPushButton(frame_3);
        Aumentrar->setObjectName(QString::fromUtf8("Aumentrar"));

        gridLayout_4->addWidget(Aumentrar, 0, 1, 1, 1);

        Disminuir = new QPushButton(frame_3);
        Disminuir->setObjectName(QString::fromUtf8("Disminuir"));

        gridLayout_4->addWidget(Disminuir, 1, 1, 1, 1);

        Enviar = new QPushButton(frame_3);
        Enviar->setObjectName(QString::fromUtf8("Enviar"));

        gridLayout_4->addWidget(Enviar, 2, 0, 1, 2);


        verticalLayout_8->addWidget(frame_3);

        verticalLayout_8->setStretch(0, 2);
        verticalLayout_8->setStretch(2, 5);

        verticalLayout_3->addWidget(dere_superior);

        line_5 = new QFrame(frame_derecho);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_5);

        dere_infer = new QFrame(frame_derecho);
        dere_infer->setObjectName(QString::fromUtf8("dere_infer"));
        dere_infer->setFrameShape(QFrame::StyledPanel);
        dere_infer->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(dere_infer);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(dere_infer);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_4);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_4);


        verticalLayout_9->addWidget(frame_4);

        line_7 = new QFrame(dere_infer);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_9->addWidget(line_7);

        frame_5 = new QFrame(dere_infer);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_5);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lcd_SetPoint_actual = new QLCDNumber(frame_5);
        lcd_SetPoint_actual->setObjectName(QString::fromUtf8("lcd_SetPoint_actual"));

        gridLayout_3->addWidget(lcd_SetPoint_actual, 0, 0, 2, 1);

        VerSetPoint = new QPushButton(frame_5);
        VerSetPoint->setObjectName(QString::fromUtf8("VerSetPoint"));

        gridLayout_3->addWidget(VerSetPoint, 0, 1, 1, 1);

        OffSetPoint = new QPushButton(frame_5);
        OffSetPoint->setObjectName(QString::fromUtf8("OffSetPoint"));

        gridLayout_3->addWidget(OffSetPoint, 1, 1, 1, 1);


        verticalLayout_9->addWidget(frame_5);

        verticalLayout_9->setStretch(0, 2);
        verticalLayout_9->setStretch(2, 5);

        verticalLayout_3->addWidget(dere_infer);

        verticalLayout_3->setStretch(0, 6);
        verticalLayout_3->setStretch(2, 5);

        horizontalLayout->addWidget(frame_derecho);


        verticalLayout_2->addWidget(frameInferior);

        verticalLayout_2->setStretch(0, 5);

        verticalLayout->addWidget(frame_principal);

        MainWindow->setCentralWidget(widget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        Conect->setText(QApplication::translate("MainWindow", "CONECT", nullptr));
        label->setText(QString());
        Puerto_2->setText(QApplication::translate("MainWindow", "Puerto COM", nullptr));
        Puerto->setItemText(0, QApplication::translate("MainWindow", "COM3", nullptr));
        Puerto->setItemText(1, QApplication::translate("MainWindow", "COM2", nullptr));
        Puerto->setItemText(2, QApplication::translate("MainWindow", "COM1", nullptr));
        Puerto->setItemText(3, QApplication::translate("MainWindow", "COM4", nullptr));
        Puerto->setItemText(4, QApplication::translate("MainWindow", "COM5", nullptr));
        Puerto->setItemText(5, QApplication::translate("MainWindow", "COM6", nullptr));

        TempActual->setText(QApplication::translate("MainWindow", "TEMPERATURA ACTUAL", nullptr));
        Ver->setText(QApplication::translate("MainWindow", "Encender", nullptr));
        Apagar->setText(QApplication::translate("MainWindow", "Apagar", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "ERROR ACTUAL", nullptr));
        ApagarError->setText(QApplication::translate("MainWindow", "Apagar", nullptr));
        VerError->setText(QApplication::translate("MainWindow", "Encender", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "% PWM", nullptr));
        Apagar_PWM->setText(QApplication::translate("MainWindow", "Apagar", nullptr));
        Encender_PWM->setText(QApplication::translate("MainWindow", "Encender", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "ESTABLECER SET POINT", nullptr));
        Aumentrar->setText(QApplication::translate("MainWindow", "Aumentar", nullptr));
        Disminuir->setText(QApplication::translate("MainWindow", "Disminuir", nullptr));
        Enviar->setText(QApplication::translate("MainWindow", "ENVIAR", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "SET POINT ACTUAL", nullptr));
        VerSetPoint->setText(QApplication::translate("MainWindow", "Encender", nullptr));
        OffSetPoint->setText(QApplication::translate("MainWindow", "Apagar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
