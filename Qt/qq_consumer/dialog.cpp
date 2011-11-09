#include "dialog.h"
#include "ui_dialog.h"
#include<QHostAddress>
#include<QMessageBox>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent)
{
    setupUi(this);
    tcpSocket = new QTcpSocket(this);

    connect(pushButton,SIGNAL(clicked()),this,SLOT(sendMsg()));
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(recvMsg()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),
            this,SLOT(error()));
    tcpSocket->connectToHost(QHostAddress::LocalHost,4869);
}

void Dialog::sendMsg()
{
    QTextStream out(tcpSocket);
    out<<lineEdit->text()<<endl;
    lineEdit->clear();
}

void Dialog::recvMsg()
{
    if(!tcpSocket->canReadLine())
        return ;


    QString responseLine;
    do
    {
        responseLine +=tcpSocket->readLine();

    }
    while(tcpSocket->canReadLine());
    msgBuffer +=responseLine;
    textBrowser->setText(msgBuffer);
    textBrowser->moveCursor(QTextCursor::End);
}
void Dialog::error()
{

}
Dialog::~Dialog()
{
        delete tcpSocket;
}

