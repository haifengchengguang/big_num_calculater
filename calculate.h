#ifndef CALCULATE_H
#define CALCULATE_H

#include <QDialog>
#include "big_num.h"
#include "function0.h"
namespace Ui {
class calculate;
}

class calculate : public QDialog
{
    Q_OBJECT

public:
    explicit calculate(QWidget *parent = nullptr);
    ~calculate();
    void calcu();

private:
    Ui::calculate *ui;
    string string1,string2;
private slots:
    void on_pushButton_3_clicked();//加
    void on_pushButton_clicked();//减
    void on_pushButton_2_clicked();//乘
    void on_pushButton_4_clicked();//除
    void on_pushButton_5_clicked();//指数
    void on_pushButton_6_clicked();//返回
void on_pushButton_7_clicked();
void on_pushButton_8_clicked();
void on_pushButton_9_clicked();
};

#endif // CALCULATE_H
