#ifndef MESSAGE_H
#define MESSAGE_H

#include <QLabel>
#include <QPainter>
#include <QString>
#include <string.h>


class MyMessage:public QLabel
{
Q_OBJECT
public:
    MyMessage(QWidget *parent = 0);
    ~MyMessage()
    {
        delete []label_message;
    }
    QString msg;
    void setMsg(QString);
private slots:
    void show_message();
private:
    int i;
    int labWidth;
    QLabel *label_message;
};

#endif // MESSAGE_H
