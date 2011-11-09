#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ui_dialog.h"
#include<QHostAddress>
#include<QMessageBox>
#include<QTcpSocket>


class Dialog : public QDialog,public Ui_Dialog {
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:
    void sendMsg();
    void recvMsg();
    void error();

private:
    QTcpSocket *tcpSocket;
    QString msgBuffer;
};

#endif // DIALOG_H
