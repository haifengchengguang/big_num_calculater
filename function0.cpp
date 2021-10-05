#include "function0.h"
#include "ui_function0.h"
#include "calculate.h"
#include "calculate1.h"
#include "calculate2.h"
#include "calculate3.h"
#include "mainwindow.h"
function0::function0(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::function0)
{
    ui->setupUi(this);
    this->setWindowTitle("选择功能");
    this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
}

function0::~function0()
{
    delete ui;
}
void function0::on_pushButton_clicked()
{
    this->hide();
    calculate *calc=new calculate;
    calc->show();

}
void function0::on_pushButton_2_clicked()
{
    this->hide();
    calculate1 *calc=new calculate1;
    calc->show();

}
void function0::on_pushButton_3_clicked()
{
    this->hide();
    calculate2 *calc=new calculate2;
    calc->show();

}
void function0::on_pushButton_4_clicked()
{
    this->hide();
    calculate3 *calc=new calculate3;
    calc->show();

}
void function0::on_pushButton_5_clicked()
{
    this->hide();
    MainWindow *main0=new MainWindow;
    main0->show();
}
