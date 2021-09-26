#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
#include <QIcon>
#include <QMessageBox>
#include <QPixmap>
#include "forgopassdia.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->toolButton->setIcon(QIcon(":/asserts/image/icon-acc.png"));
    ui->toolButton->setIconSize(QSize(100, 100));


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_Login_clicked()
{
//    QMessageBox::about(this, "Login Inform", "Login Successfully");
    QString username = ui->Username->text();
    QString password = ui->Password->text();
    if (username == "test" && password == "test") {
        ui->statusbar->showMessage("Login Successfully");
    }
}


void MainWindow::on_Quit_clicked()
{
    QApplication::quit();
}


void MainWindow::on_clickHere_clicked()
{
    forgopassDia forgetDia;
    forgetDia.setWindowTitle("Forgot Password Box");
    forgetDia.setModal(true);
    forgetDia.exec();
}

