/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit_y;
    QLineEdit *lineEdit_x;
    QLabel *labelx;
    QLineEdit *lineEdit_city;
    QLabel *labely;
    QLabel *labelcity;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(391, 304);
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit_y = new QLineEdit(Dialog);
        lineEdit_y->setObjectName(QString::fromUtf8("lineEdit_y"));
        lineEdit_y->setGeometry(QRect(141, 164, 171, 25));
        lineEdit_x = new QLineEdit(Dialog);
        lineEdit_x->setObjectName(QString::fromUtf8("lineEdit_x"));
        lineEdit_x->setGeometry(QRect(141, 102, 171, 25));
        labelx = new QLabel(Dialog);
        labelx->setObjectName(QString::fromUtf8("labelx"));
        labelx->setGeometry(QRect(30, 102, 8, 25));
        lineEdit_city = new QLineEdit(Dialog);
        lineEdit_city->setObjectName(QString::fromUtf8("lineEdit_city"));
        lineEdit_city->setGeometry(QRect(141, 40, 171, 25));
        labely = new QLabel(Dialog);
        labely->setObjectName(QString::fromUtf8("labely"));
        labely->setGeometry(QRect(30, 164, 8, 25));
        labelcity = new QLabel(Dialog);
        labelcity->setObjectName(QString::fromUtf8("labelcity"));
        labelcity->setGeometry(QRect(20, 40, 28, 25));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Dialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Add new city", nullptr));
        labelx->setText(QCoreApplication::translate("Dialog", "x", nullptr));
        labely->setText(QCoreApplication::translate("Dialog", "y", nullptr));
        labelcity->setText(QCoreApplication::translate("Dialog", "City", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
