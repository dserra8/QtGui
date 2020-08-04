#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    ui->setupUi(this);

    //Initializing the server
    udpServer = new MyUDP();


    //Setting up the graph

    ui->plot->addGraph();
    ui->plot->graph(0)->setScatterStyle(QCPScatterStyle::ssDisc);


    //Modifying the look of the graph

    ui->plot->xAxis->setLabel("Torque (N * M");
    ui->plot->yAxis->setLabel("Ankle Angle (deg)");

    ui->plot->xAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
    ui->plot->yAxis->setUpperEnding(QCPLineEnding::esSpikeArrow);
    ui->plot->xAxis2->setVisible(true);
    ui->plot->xAxis2->setTickLabels(false);
    ui->plot->yAxis2->setVisible(true);
    ui->plot->yAxis2->setTickLabels(false);
    ui->plot->graph(0)->setPen(QPen(Qt::red));
    ui->plot->setInteractions(QCP::iRangeDrag
                              | QCP::iRangeZoom );

    ui->plot->setBackground(QBrush(Qt::black));
    ui->plot->xAxis->setTickLabelColor(Qt::white);
    ui->plot->xAxis->setBasePen(QPen(Qt::white));
    ui->plot->xAxis->setLabelColor(Qt::white);
    ui->plot->xAxis->setTickPen(QPen(Qt::white));
    ui->plot->xAxis->setSubTickPen(QPen(Qt::white));

    ui->plot->yAxis->setTickLabelColor(Qt::white);
    ui->plot->yAxis->setBasePen(QPen(Qt::white));
    ui->plot->yAxis->setLabelColor(Qt::white);
    ui->plot->yAxis->setTickPen(QPen(Qt::white));
    ui->plot->yAxis->setSubTickPen(QPen(Qt::white));


    //Setting up the menus

    QMenuBar *menu = new QMenuBar(this);
    QMenu *Options = menu->addMenu("File");
    QMenu *Graph = menu->addMenu("Graph");

    Options->setMouseTracking(true);
    Graph->setMouseTracking(true);

    QAction *Exit = Options->addAction("Exit");
    QAction *Save = Options->addAction("Save");
    QAction *Open = Options->addAction("Open");

    QAction *SavePDF = Graph->addAction("Save PDF");
    QAction *SaveJpg = Graph->addAction("Save JPG");
    QAction *SavePng = Graph->addAction("Save PNG");

    menu->setStyleSheet("background-color:black; color:white");
    Options->



    //Connecting signals and slots of the menus.

    connect(Save,SIGNAL(triggered()), this, SLOT(save()));
    connect(Exit,SIGNAL(triggered()), this, SLOT(exit()));
    connect(Open,SIGNAL(triggered()), this, SLOT(open()));

    connect(SavePDF,SIGNAL(triggered()), this, SLOT(saveGraph()));
    connect(SaveJpg,SIGNAL(triggered()), this, SLOT(saveGraph()));
    connect(SavePng,SIGNAL(triggered()), this, SLOT(saveGraph()));

    connect(udpServer->socket,SIGNAL(readyRead()), this, SLOT(addPoint()));
    counter = 0;

}

Widget::~Widget()
{
    delete ui;

}

// ADDS (x,y) to the vector that contains the graph data
void Widget::addPoint()
{
    double a[1];
    QByteArray buffer;
    buffer.resize(udpServer->socket->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderPort;
    udpServer->socket->readDatagram(buffer.data(),buffer.size(), &sender, &senderPort);

    memcpy(&a, buffer, sizeof(double));
    if (a[0] != prev[0])
    {
        qDebug() << "Message from: " << sender.toString();

        qDebug() << "Message port: " << senderPort;

        qDebug() << "Message: " << buffer;

        qDebug() << a[0];

        //qDebug() << buffer.size();
        // bool ok;

        data = a[0];

        // qDebug() << data;

        X.append(counter);
        Y.append(data);
        plot();
        counter++;
    }
    prev[0] = a[0];
}

// Clears the graph
void Widget::clearData()
{
    X.clear();
    Y.clear();

}

//Plots
void Widget::plot()
{
    ui->plot->graph(0)->setData(X,Y);
    ui->plot->graph(0)->rescaleAxes();
    ui->plot->replot();
    ui->plot->update();
}

//To be implemented
//Will possibly save all the values and comments into a text.
void Widget::save()
{
   QString path("DataSaves/" );
   QDir dir;

   if (!dir.exists(path))
        dir.mkpath(path);

   if(ui->filename->displayText() != "")
   {
       path = path + ui->filename->displayText() + ".txt";
   }
   else
       path+= "Data.txt";

   QString filter = "Text File (*.txt)";
   QString filename = QFileDialog::getSaveFileName(this, "Choose Saving Location", path, filter );

   QFile file(filename);

   if (!file.open(QFile::WriteOnly | QFile::Text))
   {
       qDebug() << "File Not Opened";
   }
   else
   {
       QTextStream out(&file);

       QString comment = ui->comment->toPlainText();

       out << "Parameter 1: " << ui->parameter1SpinBox->value() << "\n";
       out << "Parameter 2: " << ui->parameter2SpinBox->value() << "\n\n";

       out << "X Values: \n";
       for (int var = 0; var < X.size()-1; ++var) {
           out << X[var] << ", ";
           if (var % 10 == 0 && var != 0)
               out << "\n";

        }

       out << X[X.size()-1] << "\n\n";
       out << "Y Values: \n";

       for (int var = 0; var < Y.size()-1; ++var) {
           out << Y[var] << ", ";
           if (var % 10 == 0 && var != 0)
               out << "\n";
        }
       out << Y[Y.size()-1] << "\n\n";

       out << "Comment: \n";
       out << comment;

       file.flush();
       file.close();


   }

}

//Quits the program
void Widget::exit()
{
    QApplication::quit();
}

//QFile Widget::createFile(QString fileType)
//{
    
//    int count = 1;
//    QString name = ui->filename->text();
//    QString type = fileType;
//    QString Default = "plot";
    
    
//}

//Will save the graph as an ??
void Widget::saveGraph()
{
    qDebug() << "Saving...";
    QString path("plotSaves/");
    QDir dir;
    QAction *temp = (QAction*)sender();



    if (!dir.exists(path))
        dir.mkpath(path);

    QString filename = path + "plot.pdf";
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly))
    {

       qDebug() << file.errorString();
    }
    else
    {
        if (temp->text() == "Save PDF")
        {
            ui->plot->savePdf(filename);
        }
        else if(temp->text() == "Save JPG")
        {
            ui->plot->saveJpg(filename);
        }
        else if(temp->text() == "Save PNG")
        {
            ui->plot->savePng(filename);
        }
    }




}

//Clears the graph
void Widget::on_btn_clear_clicked()
{
    clearData();
    plot();
    counter = 0;
}

//Sends the updated parameters to the destination
void Widget::on_updateButton_clicked()
{
   send.clear();
   send.append(ui->parameter1SpinBox->value());
  // send.append(ui->parameter2SpinBox->value());
   qDebug() << send;

  if (udpServer->socket->writeDatagram(send,QHostAddress::LocalHost,8888) != -1)
      qDebug() << "sent";
  else
      qDebug() << "did not send";

}



void Widget::open()
{
    QString filter = "Text File (*.txt)";
    QString filename = QFileDialog::getOpenFileName(this, "Open a file", "DataSaves/", filter);
    int temp = 0;
    QString dummy = "";
    clearData();
    if (filename.isNull())
    {
        qDebug() << "filename is null";
    }
    else
    {
        QFile file(filename);

        if (!file.open(QFile::ReadOnly | QFile::Text))
        {
            qDebug() << "File Not Opened";
        }
        else
        {
            QTextStream in(&file);

            bool end = false;
            while(!end)
            {
                QString text = in.readLine();
                if (text.isNull())
                    end = true;
                if (text != "")
                {

                    if (text[0] == 'P')
                    {
                        temp = text.size() - text.indexOf(":") - 2;
                        dummy = text.right(temp);
                        if (text[10] == '1')
                            ui->parameter1SpinBox->setValue(text.toDouble());
                        else
                            ui->parameter2SpinBox->setValue(text.toDouble());
                    }
                    else if (text[0] == 'X')
                    {

                        text = in.readLine();
                        while(text != "")
                        {
                            dummy = text.mid(0, text.indexOf(","));
                            X.append(dummy.toDouble());

                            for (int var = 0; var < text.size(); ++var)
                            {

                            }

                        }


                    }
                    else if (text[0] == 'Y')
                    {

                    }
                    else if (text[0] == 'C')
                    {

                    }


                }

                qDebug() << text;
            }



            file.close();


        }
    }

}
