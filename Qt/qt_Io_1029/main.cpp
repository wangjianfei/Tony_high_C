#include <QtCore/QCoreApplication>
#include<QFile>
#include<QTextStream>
//#include<QIODevice>
#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QFile file("test.txt");
    if(!file.open(QIODevice::WriteOnly))
    {
        cerr<<"Cannot open file for writing;"<<qPrintable(file.errorString())<<endl;
        return 0;
    }
    QTextStream out(&file);
    out<<"Thomas M.Disch"<<334<<endl;
    return a.exec();1
}
