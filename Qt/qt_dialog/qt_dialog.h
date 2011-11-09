#ifndef QT_DIALOG_H
#define QT_DIALOG_H

#include <QDialog>
#include "ui_qt_dialog.h"
namespace Ui {
    class qt_dialog;
}

class qt_dialog : public QDialog ,public Ui_qt_dialog{
    Q_OBJECT
public:
    qt_dialog(QWidget *parent = 0);
    ~qt_dialog();

protected:
    void changeEvent(QEvent *e);

/*private:
    Ui::qt_dialog *ui;*/
};

#endif // QT_DIALOG_H
