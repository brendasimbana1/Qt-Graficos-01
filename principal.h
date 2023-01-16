#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class Principal; }
QT_END_NAMESPACE

class Principal : public QMainWindow
{
    Q_OBJECT

public:
    Principal(QWidget *parent = nullptr);
    ~Principal();

    virtual void paintEvent(QPaintEvent *event); //Evento de pintura, encargado de repintar cada que pasa
                                                 //algo en la ventana

private:
    Ui::Principal *ui;
};
#endif // PRINCIPAL_H
