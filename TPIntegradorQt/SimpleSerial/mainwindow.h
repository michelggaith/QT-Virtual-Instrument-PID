#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort>
#include <QSerialPortInfo>//Para encontrar todos los puertos seriales

#include <QDialog>
#include <QDebug>
#include<QtCharts>
#include<QChartView>
#include<QLineSeries>

#include <vector>
#include <string>
#include <iostream>

namespace Ui {
    class MainWindow; //Declara una clase (MainWindown) para la ventana principal
}

class MainWindow : public QMainWindow //MainWindow hereada de QMainwindown los comportamientos de la ventana
{
        Q_OBJECT //Macro con codigos necesarios para usar slots y signals

    public:
        explicit MainWindow(QWidget *parent = nullptr); //Constructor
        ~MainWindow(); //Destructor

    private slots:
        //Declaración de las funciones slots de los objetos contenidos en la ventana
        void serialReceived();

        void on_Ver_clicked();

        void on_Apagar_clicked();

        void on_VerSetPoint_clicked();

        void on_OffSetPoint_clicked();

        void on_Aumentar_clicked();

        void on_Disminuir_clicked();

        void on_Enviar_clicked();

        void on_Encender_PWM_clicked();

        void on_Apagar_PWM_clicked();

        void on_VerError_clicked();

        void on_ApagarError_clicked();

        void on_Conect_clicked();


private:

        QString datoleido;
        QString serialBuffer;
        int ADC, PWM_V, value3;
        int SETPOINT_flag;
        int PWM_flag = 0;
        int Error_flag=0;
        int PWM = 0;
        float Error = 0.0;
        float TEMPERATURA;
        int SETPOINT;
        int NUEVOSETPOINT = 25;
        int lectura;
        int Out[8]={0,0,0,0,0,0,0,0};
        char Salida[9];

        Ui::MainWindow *ui; //Objeto puntero que representa la UI
};

#endif // MAINWINDOW_H
