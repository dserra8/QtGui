#include "myudp.h"

MyUDP::MyUDP(QObject *parent):
    QObject (parent)
{
    socket = new QUdpSocket(this);
    socket->bind(QHostAddress::LocalHost,8001);
    //connect(socket,SIGNAL(readyRead()), this, SLOT(readyRead()));
   // data = 0;
}

MyUDP::~MyUDP()
{
    delete socket;
}
void MyUDP::SayHello()
{
    QByteArray Data;
    Data.append("Hello from UDP land");
    socket->writeDatagram(Data,QHostAddress::LocalHost,8001);

}

//void MyUDP::readyRead()
//{
//    QByteArray buffer;
//    buffer.resize(socket->pendingDatagramSize());

//    QHostAddress sender;
//    quint16 senderPort;
//    socket->readDatagram(buffer.data(),buffer.size(), &sender, &senderPort);

//    qDebug() << "Message from: " << sender.toString();

//    qDebug() << "Message port: " << senderPort;

//    qDebug() << "Message: " << buffer;

//    qDebug() << buffer.size();
//   // bool ok;
//    unsigned buff = (unsigned char)buffer[0];
//    double data = (double)buff;

//    qDebug() << data;

//}
