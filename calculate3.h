#ifndef CALCULATE3_H
#define CALCULATE3_H

#include <QDialog>
#include "big_num.h"
#include "function0.h"
namespace Ui {
class calculate3;
}

class calculate3 : public QDialog
{
    Q_OBJECT

public:
    explicit calculate3(QWidget *parent = nullptr);
    ~calculate3();
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
         void on_pushButton_6_clicked();//返回
         void on_pushButton_7_clicked();//显示文件内容
         void on_pushButton_8_clicked();//清除
private:
    Ui::calculate3 *ui;
    QString FileName;
    string str[3];
};

#endif // CALCULATE3_H
