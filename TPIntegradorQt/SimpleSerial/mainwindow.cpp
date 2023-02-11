#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <string>
//Definición de clases

#include "chartv1.h"
#include <QMessageBox>
#include <QtCharts/QAbstractAxis>
#include <QtCharts/QSplineSeries>
#include <QtCharts/QValueAxis>
#include <QtCore/QRandomGenerator>
#include <QtCore/QDebug>

 extern float aux=0;

QSerialPort *serial;

MainWindow::MainWindow(QWidget *parent) : //Definición del constructor
    QMainWindow(parent),   //Invoca al constructor de la clase base
    ui(new Ui::MainWindow)  //Instancia un objeto y lo asigna a la variable ui
{
    ui->setupUi(this); //instanciación de los widgets dentro de la interfaz gráfica

    serial = new QSerialPort(this);
    //serialBuffer="";

   //Conecto el objeto "serial" con la señal "readyRead", se pasa el objeto this y luego se llama al metodo "serialRecived"
    QObject::connect(serial, SIGNAL(readyRead()),this, SLOT(serialReceived()));

    setWindowTitle("TP Final - TD3 - UTN-FRC");
}

Chart::Chart(QGraphicsItem *parent, Qt::WindowFlags wFlags):
    QChart(QChart::ChartTypeCartesian, parent, wFlags),
    m_series(0),
    m_axisX(new QValueAxis()),
    m_axisY(new QValueAxis()),
    m_step(0),
    m_x(0), //Valor Inicial de X
    m_y(0)  // Valor Inicial de Y
{
    QObject::connect(&m_timer, &QTimer::timeout, this, &Chart::handleTimeout);
    m_timer.setInterval(1000); // ESTO MODIFICA EL TIEMPO DE REFRESCO

    m_series = new QSplineSeries(this);
    QPen green(Qt::blue); //Color de la traza
    green.setWidth(3); //Ancho de la linea
    m_series->setPen(green); // Estilo de la linea
    m_series->append(m_x, m_y); //Añade los valores a la grafica

    addSeries(m_series);

    addAxis(m_axisX,Qt::AlignBottom);
    addAxis(m_axisY,Qt::AlignLeft);
    m_series->attachAxis(m_axisX); //Asocia los ejes con el correspondiente
    m_series->attachAxis(m_axisY);
    m_axisX->setTickCount(500); //Establece la cantidad de lineas de referencia en el eje X presente (grid)
    m_axisX->setRange(0, 30000);   // RANGO DEL EJE X
    m_axisY->setRange(20, 45); // RANGO DEL EJE Y

    m_timer.start();
}

MainWindow::~MainWindow() //Destructor
{

    delete ui;
    serial->close();
}

//FUNCION PRINCIPAL
void MainWindow::serialReceived(){

    datoleido = serial->readAll();
    QStringList lst=datoleido.split(",");

    if((lst.size())>=4){
        ADC =lst[1].toInt();
        PWM_V=lst[2].toInt();
        value3 = lst[3].toInt();
        aux = (3.3*ADC/4095)/0.01;

        qDebug()<<datoleido;
    }else{
        qDebug()<<lst.size();
    }

    PWM = PWM_V;
    Error = aux - (float)SETPOINT_flag;

    //ENCENDER ADC
    if(TEMPERATURA==1){
        ui->lcd_Temp->display((3.3*ADC/4095)/0.01);
    }else{
        ui->lcd_Temp->display("0");
    }

    //Lcd Error Actual
    if(Error_flag==1)
    {
        ui->lcdErroActual->display(Error);
    }
    else
    {
        ui->lcdErroActual->display("0");
    }

    //Lcd PWM
    if(PWM_flag==1)
    {
        ui->lcdPWM->display(PWM);
    }
    else
    {
        ui->lcdPWM->display("0");
    }

    //Lcd Set Point Actual
    if(SETPOINT==1){
        ui->lcd_SetPoint_actual->display(SETPOINT_flag);
    }else{
        ui->lcd_SetPoint_actual->display("0");
    }

    QObject().thread()->usleep(1000*1000*1);

}

//REALIZAR CONEXION SERIAL//

void MainWindow::on_Conect_clicked()
{
       //Abre y configura el puerto serial
    serial ->setPortName("com3");
    serial -> setBaudRate(QSerialPort::Baud115200); //Número de unidades de señal por segundo
    serial -> setDataBits(QSerialPort::Data8); //Cantidad de bits que recibe o envía
    serial -> setParity(QSerialPort::NoParity); //Pariedad
    serial -> setStopBits(QSerialPort::OneStop); //Bit de stop
    serial -> setFlowControl(QSerialPort::NoFlowControl);

    if(serial->open(QIODevice::ReadWrite))  //Comprueba que no haya habido problema de escritura y lectura
    {
        ui ->label ->clear();
        ui ->label ->setText("Conexión exitosa");
    }
    else
    {
        ui ->label ->clear();
        ui ->label ->setText("Conexión fallida");
    }

}

//FUNCIONES DE DISPLAY DE ADC
void MainWindow::on_Ver_clicked()
{
    TEMPERATURA=1;
}


void MainWindow::on_Apagar_clicked()
{
    TEMPERATURA=0;
}


void MainWindow::on_VerSetPoint_clicked()
{
    SETPOINT=1;
}


void MainWindow::on_OffSetPoint_clicked()
{
    SETPOINT=0;
}


void MainWindow::on_Aumentar_clicked()
{
    NUEVOSETPOINT+=1;
    ui->lcdNumber_3->display(NUEVOSETPOINT);
}


void MainWindow::on_Disminuir_clicked()
{
    NUEVOSETPOINT-=1;
    ui->lcdNumber_3->display(NUEVOSETPOINT);
}

void MainWindow::on_Encender_PWM_clicked()
{
    PWM_flag = 1;
}


void MainWindow::on_Apagar_PWM_clicked()
{
    PWM_flag = 0;
}


void MainWindow::on_VerError_clicked()
{
    Error_flag=1;
}


void MainWindow::on_ApagarError_clicked()
{
    Error_flag = 0;
}

//FUNCION PARA ENVIAR
void MainWindow::on_Enviar_clicked()
{
    serial->clear();
    SETPOINT_flag = NUEVOSETPOINT;
    sprintf(Salida, "%lu",SETPOINT_flag);
    serial->write(Salida, 8);
    serial->waitForBytesWritten(1000);
    qDebug()<<Salida;
    memset(Salida, 0, 9);
}


Chart::~Chart()
{

}
void Chart::handleTimeout()
{   //auxv2 = aux;

    //qreal x = plotArea().width() / m_axisX->tickCount();
    qreal y = (m_axisX->max() - m_axisX->min()) / m_axisX->tickCount();
    m_x += y;
    m_y = aux; //ESTABLECE EL VALOR FINAL
    m_series->append(m_x, m_y);
    //scroll(1, 0);
    if (m_x == 30000)
        m_timer.stop();
}


