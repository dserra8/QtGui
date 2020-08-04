#include "server.h"

Server::Server(QObject *parent):
       QObject(parent)
{
    server = new QTcpServer(this);
    connect(server,SIGNAL(newConnection()), this, SLOT(newConnection()));

    if(!server->listen(QHostAddress::Any,1234))
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Server started!";
    }
}


void Server::newConnection()
{
    char *data = nullptr;
    QTcpSocket *socket = server->nextPendingConnection();

    socket->write("hello client\r\n");
    socket->flush();

    socket->waitForBytesWritten(9000);
    socket->read(data, 4000);
    qDebug() << data;

    socket->close();

    qDebug() <<"Server Closed";
    delete data;

}
