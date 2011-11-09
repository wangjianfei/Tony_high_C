#include <QTimer>
#include <QFileDialog>
#include <QPixmap>
#include <QDir>
#include <QStringList>
#include <QLabel>
#include <QDebug>
#include "picturedisplay.h"

myPicture::myPicture(QWidget *parent)
:QLabel(parent)
{
    k = 0;
    listlen = 0;
    valchanged = 0;
    file_list();
    label_pic_dis = new QLabel(parent);
    label_pic_dis->setGeometry(569, 139, 240, 261);
    show_picture();
    QTimer *timer1 = new QTimer(parent);
    QObject::connect(timer1,SIGNAL(timeout()),this,SLOT(show_picture()));

    timer1->stop();
    timer1->start(2000);
}

void myPicture::file_list()
{
    QDir *dir = new QDir("./picture");
    QStringList filters;
    QStringList *stringlist = new QStringList();
    filters << "*.jpg"<<"*.bmp"<<"*.jpeg";
    *stringlist = dir->entryList(filters);
    dir->setNameFilters(filters);
    listlen = stringlist->count();
    for (int i = 0; i < listlen; i++)
    {
        picmap[i] = new QPixmap("./picture/" + stringlist->at(i));
    }


    delete dir;
    delete stringlist;
}

/*void myPictuer::addpic(QString *name)
{
    picmap[listlen]
}*/

void myPicture::show_picture()
{
    label_pic_dis->setPixmap(picmap[k]->scaled(label_pic_dis->width(),label_pic_dis->height()));
    k++;
    if(k >= listlen)
        k = 0;
    if(valchanged == 1)
    {
        file_list();
        valchanged = 0;
    }
}
