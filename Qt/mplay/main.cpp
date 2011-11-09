#include <QtGui/QApplication>
#include "widget.h"
#include <QWidget>
#include<QProcess>
#include<QStringList>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //QWidget *widget = new QWidget;
    //widget->setWindowTitle(" MPlayer");
    //widget->resize(600,500);

     Widget w;
     w.show();
    return a.exec();
}
