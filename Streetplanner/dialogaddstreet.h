#ifndef DIALOGADDSTREET_H
#define DIALOGADDSTREET_H
#include "street.h"
#include "abstractmap.h"
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class DialogAddStreet;
}

class DialogAddStreet : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddStreet(QWidget *parent = nullptr);
    ~DialogAddStreet();
    Street* userDefinedStreet(const AbstractMap& map);

private:
    Ui::DialogAddStreet *ui;
};

#endif // DIALOGADDSTREET_H
