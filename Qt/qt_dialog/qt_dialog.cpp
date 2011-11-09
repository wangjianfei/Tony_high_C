#include "qt_dialog.h"
#include "ui_qt_dialog.h"

qt_dialog::qt_dialog(QWidget *parent) :
    QDialog(parent)
 //   ui(new Ui::qt_dialog)
{
    setupUi(this);
    connect(pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

qt_dialog::~qt_dialog()
{
 //   delete ui;
}

void qt_dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        /*ui->*/retranslateUi(this);
        break;
    default:
        break;
    }
}
