/********************************************************************************
** Form generated from reading UI file 'qt_dialog.ui'
**
** Created: Fri Nov 4 19:59:33 2011
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_DIALOG_H
#define UI_QT_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_qt_dialog
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *qt_dialog)
    {
        if (qt_dialog->objectName().isEmpty())
            qt_dialog->setObjectName(QString::fromUtf8("qt_dialog"));
        qt_dialog->resize(402, 330);
        pushButton = new QPushButton(qt_dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 290, 93, 27));
        lineEdit = new QLineEdit(qt_dialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 290, 221, 27));
        textBrowser = new QTextBrowser(qt_dialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 40, 341, 211));

        retranslateUi(qt_dialog);

        QMetaObject::connectSlotsByName(qt_dialog);
    } // setupUi

    void retranslateUi(QDialog *qt_dialog)
    {
        qt_dialog->setWindowTitle(QApplication::translate("qt_dialog", "qt_dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("qt_dialog", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qt_dialog: public Ui_qt_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_DIALOG_H
