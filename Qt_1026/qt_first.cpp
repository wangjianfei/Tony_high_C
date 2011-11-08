/*执行顺序为：
 *1、qmake -ptoject
  2、qmake
  3、make*/
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QPushButton *button = new QPushButton("Quit");
    QObject::connect(button,SIGNAL(clicked()),&app,SLOT(quit()));
    button->show(); 
    return app.exec();
}

