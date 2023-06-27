
#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

City* Dialog::userDefinedCity()
{
    QString str1 = ui->lineEdit_city->text();
    QString str2 = ui->lineEdit_x->text();
    QString str3 = ui->lineEdit_y->text();
    if(str1.isEmpty()||str2.isEmpty()||str3.isEmpty()){
        QMessageBox msgBox;
        msgBox.setText(QString("Input attribute is missing! Try again"));
        msgBox.exec();
    }
    else{
        bool isStr, isInt2, isInt3;
        //int Zahl1 = str1.toInt(&isInt1);
        std::string str1Check = str1.toStdString();
        size_t posNotString = str1Check.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZÄÖÜ "
                                                        "abcdefghijklmnopqrstuvwxyzäöüß");
        if(posNotString==-1){
            isStr = true;
        }
        else{
            isStr = false;
        }
        int Zahl2 = str2.toInt(&isInt2);
        int Zahl3 = str3.toInt(&isInt3);
        if(isStr&&isInt2&&isInt3){
            return new City(str1, Zahl2, Zahl3);
        }
        else{
            QMessageBox msgBox;
            if(!isStr){
            msgBox.setText(QString("Wrongly Input city as number! Try again"));
            }
            else if (!isInt2 || !isInt3){
                msgBox.setText(QString("Wrongly Input coordinates! Try again!"));
            }
            msgBox.exec();
        }
    }
    return nullptr;
}


