#include "principal.h"
#include "ui_principal.h"


Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::paintEvent(QPaintEvent *event)
{
    // Objeto que permite dibujar (Picaso)
    // Se envía como dispositivo a este (this) objeto (Principal)
    QPainter painter(this);

    // Establecer un pincel azul
    painter.setPen(Qt::blue);

    // Establecer un tipo de letra y tamaño
    painter.setFont(QFont("Arial", 30)); //QFont: fuente

    // Dibujar un texto
    painter.drawText(rect(), Qt::AlignCenter, "Rodrigo"); //rect(): rectangulo (0,0) por el largo y ancho

    // Crear un pincel
    QPen pincel;
    pincel.setColor(Qt::red);
    pincel.setWidth(5);
    pincel.setCapStyle(Qt::RoundCap);

    // establecer nuevo pincel
    painter.setPen(pincel);

    // Dibujar una línea
    painter.drawLine(100,100, 200,200);

    // Estableer una brocha
    painter.setBrush(Qt::yellow);

    // Dibujar un rectangulo
    painter.drawRect(300,100,50,100);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setWidth(5);
    pincel2.setColor(Qt::darkGreen);
    pincel2.setStyle(Qt::DashLine);

    // Establecer nuevo pincel
    painter.setPen(pincel2);
    painter.setBrush(Qt::green);

    // Dibujar una circunferencia
    painter.drawEllipse(400,100,50, 50);

    // Dibujar un arco
    QRectF rectangle(500.0, 100.0, 50.0, 50.0); //Rectángulos con # flotantes
      int startAngle = 30 * 16; //cada ángulo Qt lo divide en 16 partes
      int spanAngle = 120 * 16;
    painter.drawArc(rectangle,startAngle, spanAngle);

    QPen pincel3;
    pincel3.setWidth(4);
    pincel3.setColor(Qt::black);
    pincel3.setStyle(Qt::DashDotDotLine);
    painter.setBrush(Qt::gray);

    painter.setPen(pincel3);
    painter.drawLine(100, 500, 350, 350); //(coordenada1, coordenada2)
    painter.drawEllipse(90, 490, 50, 50); //(coordenada), largo, alto
    painter.drawEllipse(340, 340, 50, 50);

    QPen pincel4;
    pincel4.setWidth(6);
    QColor color(122, 244, 122);
    pincel4.setColor(color);
    painter.setPen(pincel4);
    painter.drawLine(150, 550, 230, 420);
    painter.drawLine(230, 420, 300, 550);
    painter.drawLine(300, 550, 150, 550);
}

