#ifndef MAINFORM_H
#define MAINFORM_H
#include<QMainWindow>
#include <QDialog>
#include "mymessage.h"
#include "picturedisplay.h"
class MainForm:public QMainWindow
{
public:
    MainForm(QWidget *parent = 0);
    ~MainForm()
    {
        delete []message;
        delete []pic;
    }
    void myForm();
    void mydisplayer();
    MyMessage *message;
    myPicture *pic;
private:
    QString filename;

};

#endif // MAINFORM_H
