#include "sockettest.h"

SocketTest::SocketTest(QObject *parent) : QObject(parent)
{

}

void SocketTest::Connect()
{
    socket = new QTcpSocket(this);

    socket->connectToHost("voidrealms.com", 80);


    //connected

    //sent

    //got

    //closed
}
