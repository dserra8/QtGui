#ifndef MYUDP_H
#define MYUDP_H

#include <QObject>
#include <QUdpSocket>
//#include "widget.h"


class MyUDP : public QObject

{
Q_OBJECT
public:
    explicit MyUDP(QObject *parent = 0);
    ~MyUDP();
    void SayHello();
    friend class Widget;

public slots:
   // void readyRead();

private:
    QUdpSocket *socket;
    //double data;

};

#endif // MYUDP_H
