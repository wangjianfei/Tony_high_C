#include <QtGui/QApplication>
#include "logo.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyLogo w;
    w.show();
    return a.exec();
}
