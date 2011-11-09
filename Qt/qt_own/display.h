#ifndef _DISPLAY_H_
#define _DISPLAY_H_

#include<QWidget>
#include<QProcess>
class mydisplay:public QWidget
{
    Q_OBJECT
public:
    mydisplay(QWidget *parent = 0);
    void dis_show(const QString filename);
    ~mydisplay()
    {
       delete []process;
       delete []playform;
    }
signals:
    void started();

private:
     QWidget *playform;
     QProcess *process;
};



#endif
