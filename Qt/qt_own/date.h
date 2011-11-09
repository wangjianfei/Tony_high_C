#include <QLCDNumber>
class myDate:public QLCDNumber
{
Q_OBJECT
public:
    myDate(QWidget *parent);

private slots:
    void show_date();
};
