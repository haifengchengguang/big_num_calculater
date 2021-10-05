#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "calculate1.h"
#include "calculate.h"
#include "function0.h"
#include <QFile>
#include <QTextStream>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("长整数的代数计算");
   //this->ui->pushButton->setStyleSheet("QHeaderView::section {"
     //                                                         "color: black;padding-left: 4px;border: 1px solid #6c6c6c;}");

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    this->hide();
    function0 *func=new function0;


    func->show();

}

