#include <QtGui/QApplication>
#include "qt_dialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qt_dialog w;
    w.show();
    return a.exec();
}
