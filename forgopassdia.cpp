#include "forgopassdia.h"
#include "ui_forgopassdia.h"
#include <QMessageBox>
forgopassDia::forgopassDia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::forgopassDia)
{
    ui->setupUi(this);
}

forgopassDia::~forgopassDia()
{
    delete ui;
}

void forgopassDia::on_confirm_clicked()
{
    QString user_name = ui->userName->text();
    QString email = ui->Email->text();
    QString infor_user = "Your username : " + user_name;
    QString infor_email = "Your email : " + email;
    if (user_name != "" && email != "") {
        QMessageBox::information(this,"Information", infor_user + "\n" + infor_email);
    }
}

