#ifndef CALCULATE1_H
#define CALCULATE1_H

#include <QDialog>
#include "big_num.h"
#include "function0.h"
namespace Ui {
class calculate1;
}

class calculate1 : public QDialog
{
    Q_OBJECT

public:
    explicit calculate1(QWidget *parent = nullptr);
    ~calculate1();
 void calcu();
private:
    Ui::calculate1 *ui;
    string string1,string2,string3;
private slots:
     void on_pushButton_clicked();//加
     void on_pushButton_2_clicked();//减
      void on_pushButton_3_clicked();//乘
       void on_pushButton_4_clicked();//除
       void on_pushButton_5_clicked();//指数
       void on_pushButton_6_clicked();//返回
       void on_pushButton_7_clicked();//清除
       void on_pushButton_8_clicked();//
       void on_pushButton_9_clicked();//
       void on_pushButton_10_clicked();//
};

#endif // CALCULATE1_H
