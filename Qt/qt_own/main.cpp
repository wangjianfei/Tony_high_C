#include <QtGui/QApplication>
#include "MainForm.h"
#include <phonon>
#include<QUrl>
#include<QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainForm w;
    w.show();
    return a.exec();
}
