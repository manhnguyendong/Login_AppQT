#ifndef FORGOPASSDIA_H
#define FORGOPASSDIA_H

#include <QDialog>

namespace Ui {
class forgopassDia;
}

class forgopassDia : public QDialog
{
    Q_OBJECT

public:
    explicit forgopassDia(QWidget *parent = nullptr);
    ~forgopassDia();

private slots:
    void on_confirm_clicked();

private:
    Ui::forgopassDia *ui;
};

#endif // FORGOPASSDIA_H
