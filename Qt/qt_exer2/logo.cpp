#include <QMovie>
#include <QLabel>
#include "logo.h"


MyLogo::MyLogo(QWidget *parent)
:QLabel(parent)
{
    QLabel *label_logo = new QLabel(parent);
    filename = QString::fromUtf8("./system_picture/logo.gif");
    QMovie *mygif = new QMovie(filename);
    label_logo->setGeometry(660, 30, 60, 50);
    mygif->setScaledSize(QSize(60, 50));
    label_logo->setMovie(mygif);
    mygif->setSpeed(50);
    mygif->start();
}
