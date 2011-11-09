#include <QLCDNumber>
class myClock:public QLCDNumber
{
Q_OBJECT
public:
    myClock(QWidget *parent);

private slots:
    void show_time();
};
