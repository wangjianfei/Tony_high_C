#include <QtGui/QApplication>
#include "my_clock.h"
#include "widget.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   /* Widget w;
    w.show();*/
    myClock   w;
    w.show();
    return a.exec();
}
