/********************************************************************************
** Form generated from reading UI file 'dialogaddstreet.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDSTREET_H
#define UI_DIALOGADDSTREET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogAddStreet
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_start_city;
    QLabel *labelendcity;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *lineEdit_end_city;
    QLabel *labelstartcity;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *DialogAddStreet)
    {
        if (DialogAddStreet->objectName().isEmpty())
            DialogAddStreet->setObjectName(QString::fromUtf8("DialogAddStreet"));
        DialogAddStreet->resize(400, 300);
        gridLayout = new QGridLayout(DialogAddStreet);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEdit_start_city = new QLineEdit(DialogAddStreet);
        lineEdit_start_city->setObjectName(QString::fromUtf8("lineEdit_start_city"));

        gridLayout->addWidget(lineEdit_start_city, 1, 1, 1, 1);

        labelendcity = new QLabel(DialogAddStreet);
        labelendcity->setObjectName(QString::fromUtf8("labelendcity"));

        gridLayout->addWidget(labelendcity, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogAddStreet);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 0, 1, 1);

        lineEdit_end_city = new QLineEdit(DialogAddStreet);
        lineEdit_end_city->setObjectName(QString::fromUtf8("lineEdit_end_city"));

        gridLayout->addWidget(lineEdit_end_city, 3, 1, 1, 1);

        labelstartcity = new QLabel(DialogAddStreet);
        labelstartcity->setObjectName(QString::fromUtf8("labelstartcity"));

        gridLayout->addWidget(labelstartcity, 1, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 0, 0, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 2);

        retranslateUi(DialogAddStreet);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogAddStreet, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogAddStreet, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogAddStreet);
    } // setupUi

    void retranslateUi(QDialog *DialogAddStreet)
    {
        DialogAddStreet->setWindowTitle(QCoreApplication::translate("DialogAddStreet", "Add new street", nullptr));
        labelendcity->setText(QCoreApplication::translate("DialogAddStreet", "End city", nullptr));
        labelstartcity->setText(QCoreApplication::translate("DialogAddStreet", "Start city", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddStreet: public Ui_DialogAddStreet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDSTREET_H
