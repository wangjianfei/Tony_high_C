#ifndef LOGO_H
#define LOGO_H

#include <QDialog>
#include <QLabel>

class MyLogo:public QLabel
{
public:
    MyLogo(QWidget *parent );
//private:
    QString filename;
};

#endif // LOGO_H
