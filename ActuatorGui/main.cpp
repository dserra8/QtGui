#include "widget.h"
//#include "server.h"
#include <QApplication>
#include "myudp.h"

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    Widget w;
   // Server tcp_server;


    w.show();
    return a.exec();
}
