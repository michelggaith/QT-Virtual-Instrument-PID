#include "mainwindow.h"
#include <QApplication> //Clase que maneja todos los recursos de GUI
#include "chartv1.h"
#include <QtCharts/QChartView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>

int main(int argc, char *argv[])
{
       //Creación del objeto QAplication
    QApplication a(argc, argv);

        //Define el estilo de las ventanas
    QFile styleSheetFile("C:/Users/Usuario/Desktop/TPIntegradorQt/SimpleSerial/Adaptic.qss");
    styleSheetFile.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(styleSheetFile.readAll());
    a.setStyleSheet(styleSheet);

    MainWindow w, w2;  //w es el objeto que representa a la ventana principal

    Chart *chart = new Chart;

    chart->setTitle("Variación de Temperatura");
    chart->legend()->hide();
    chart->setAnimationOptions(QChart::AllAnimations);
    QChartView chartView(chart);
    chartView.setRenderHint(QPainter::Antialiasing);
    w.setCentralWidget(&chartView);
    w.resize(410, 350);
    w.setGeometry(820,100,900,700); //Plot de curva
    w2.setGeometry(30,100,550,520); //Tamaño VI original
    w.show();
    w2.show();

    return a.exec();
}
