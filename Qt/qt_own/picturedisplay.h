#ifndef PICTUREDISPLAY_H
#define PICTUREDISPLAY_H

#include <QDialog>
#include <QLabel>
#include <QString>
#include <QPixmap>

class  myPicture:public QLabel
{
Q_OBJECT
public:
    myPicture(QWidget *parent);
    ~myPicture()
    {
        delete []label_pic_dis;
        //delete []picmap;
    }
    void file_list();

    QPixmap *picmap[50];
    int valchanged;
    int k;
    int listlen;
private slots:
    void show_picture();

private:
    QString str;
    QLabel *label_pic_dis;
};

#endif // PICTUREDISPLAY_H
