#ifndef CALCULATE2_H
#define CALCULATE2_H

#include <QDialog>
#include "big_num.h"
#include "function0.h"
namespace Ui {
class calculate2;
}

class calculate2 : public QDialog
{
    Q_OBJECT

public:
    explicit calculate2(QWidget *parent = nullptr);
    ~calculate2();
void welcome();
void calcu_add();
void calcu_sub();
void calcu_mul();
void calcu_div();
void calcu_ind();
private slots:
     void on_pushButton_clicked();//加
     void on_pushButton_2_clicked();//减
     void on_pushButton_3_clicked();//乘
     void on_pushButton_4_clicked();//除
     void on_pushButton_5_clicked();//指数
     void on_pushButton_6_clicked();
     void on_pushButton_7_clicked();//返回
     void on_pushButton_8_clicked();//清除
private:
    Ui::calculate2 *ui;
    QString FileName;
    string str[2];
};

#endif // CALCULATE2_H
