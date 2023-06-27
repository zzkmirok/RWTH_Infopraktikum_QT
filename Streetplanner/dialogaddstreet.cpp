#include "dialogaddstreet.h"
#include "ui_dialogaddstreet.h"

DialogAddStreet::DialogAddStreet(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogAddStreet)
{
    ui->setupUi(this);
}

DialogAddStreet::~DialogAddStreet()
{
    delete ui;
}

Street* DialogAddStreet::userDefinedStreet(const AbstractMap& map)
{
    QString str1 = ui->lineEdit_start_city->text();
    QString str2 = ui->lineEdit_end_city->text();
    if(str1.isEmpty()||str2.isEmpty()){
        QMessageBox msgBox;
        msgBox.setText(QString("Input attribute is missing! Try again"));
        msgBox.exec();
        return nullptr;
    }
    else{
        bool isStr = false;
        std::string str1Check = str1.toStdString();
        size_t posNotString1 = str1Check.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZÄÖÜ "
                                                        "abcdefghijklmnopqrstuvwxyzäöüß");
        std::string str2Check = str2.toStdString();
        size_t posNotString2 = str1Check.find_first_not_of("ABCDEFGHIJKLMNOPQRSTUVWXYZÄÖÜ "
                                                        "abcdefghijklmnopqrstuvwxyzäöüß");
        if((posNotString1==-1)&&(posNotString2==-1)){
            isStr = true;
        }
        else{
            isStr = false;
            QMessageBox msgBox;
            msgBox.setText(QString("Input city invalid! Try again"));
            msgBox.exec();
            return nullptr;
        }
        if(isStr){
            City* startCity = map.findCity(str1);
            City* endCity = map.findCity(str2);
            if((startCity == nullptr)||(endCity == nullptr)){
                QMessageBox msgBox;
                msgBox.setText(QString("Input city not found! Try again"));
                msgBox.exec();
                return nullptr;
            }
            else{
                return new Street(startCity, endCity);
            }

        }
    }
    return nullptr;
}


