#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "ui_widget.h"
#include "server.h"
#include <QDebug>
#include <QIODevice>
#include "myudp.h"
//#include <QFileDialog>
//#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();



    void clearData();
    void plot();
    QString OpenFileExplorer();
  //  QFile createFile(QString fileType);
public slots:
    void open();
    void save();
    void exit();
    void saveGraph();
    void addPoint();
 //  void saveGraphJPG();
 //  void saveGraphPNG();

private slots:
    void on_btn_clear_clicked();

    void on_updateButton_clicked();

private:
    Ui::Widget *ui;
    MyUDP *udpServer;
    int counter;
    QVector<double> X, Y;
    double data;
    double prev[1];
    QByteArray send;

   

};


#endif // WIDGET_H
