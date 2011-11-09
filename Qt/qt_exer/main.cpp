#include <QtGui/QApplication>
#include "message.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyMessage w;
    w.show();
    return a.exec();
}
