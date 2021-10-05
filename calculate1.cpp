#include "calculate1.h"
#include "ui_calculate1.h"
#include <QMessageBox>
#include<time.h>
#define CLOCKS_PER_SEC ((clock_t)1000000)
calculate1::calculate1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculate1)
{
    ui->setupUi(this);
    this->setWindowTitle("取余不涉及文件的大数运算");
    this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);

}

calculate1::~calculate1()
{
    delete ui;
}
void calculate1::on_pushButton_clicked()//加
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty()
             || ui->textEdit_3->document()->isEmpty() )

    {

        QMessageBox::warning(this, tr("警告信息"), tr("输入不能为空"));

        return;

    }
    else{ bigNum a;
        linkedList  B1, B2, B3, C;
        QString str1;
        str1=ui->textEdit->toPlainText();
        string1=str1.toStdString();
        QString str2;
        str2=ui->textEdit_2->toPlainText();
        string2=str2.toStdString();
        QString str3;
        str3=ui->textEdit_3->toPlainText();
        string3=str3.toStdString();
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        B3=a.createfromstring(string3);
        C=a.add_bigNum(B1,B2,B3);
        string result1;
        result1=a.translation(C);
        QString qresult1=QString::fromStdString(result1);
        ui->textBrowser->setText(qresult1);
        endTime = clock();
        double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
        QString b1;
        b1 =  QString::number(time1,10,6);
        ui->textBrowser_3->setText(b1+"s");
    }
}
void calculate1::on_pushButton_2_clicked()//减
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty()
             || ui->textEdit_3->document()->isEmpty() )

    {

        QMessageBox::warning(this, tr("警告信息"), tr("输入不能为空"));

        return;

    }
    /*else{ bigNum a;
        linkedList  B1, B2, B3, C;
        QString str1;
        str1=ui->textEdit->toPlainText();
        string1=str1.toStdString();
        QString str2;
        str2=ui->textEdit_2->toPlainText();
        string2=str2.toStdString();
        QString str3;
        str3=ui->textEdit_3->toPlainText();
        string3=str3.toStdString();
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        B3=a.createfromstring(string3);
        C=a.sub_bigNum(B1,B2,B3);
        string result1;
        result1=a.translation(C);
        QString qresult1=QString::fromStdString(result1);
        ui->textBrowser->setText(qresult1);}*/
    else{ bigNum a;
        linkedList  B1, B2, B3, C,C1;
        QString str1;
        str1=ui->textEdit->toPlainText();
        string1=str1.toStdString();
        QString str2;
        str2=ui->textEdit_2->toPlainText();
        string2=str2.toStdString();
        QString str3;
        str3=ui->textEdit_3->toPlainText();
        string3=str3.toStdString();
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        B3=a.createfromstring(string3);
        int comp=a.compare(B1,B2);
        if(comp==-1){ui->textBrowser->setText("No Exit(Regardless of the negative)");}
        if(comp==0){ui->textBrowser->setText("0");}
        if(comp==1){C=a.sub_bigNum(B1,B2);
        C1=a.mod_bigNum(C,B3);
        string result1;
        result1=a.translation(C1);
        QString qresult1=QString::fromStdString(result1);
        ui->textBrowser->setText(qresult1);
        endTime = clock();
        double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
        QString b1;
        b1 =  QString::number(time1,10,6);
        ui->textBrowser_3->setText(b1+"s");}
    }
}
void calculate1::on_pushButton_3_clicked()//乘
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty()
             || ui->textEdit_3->document()->isEmpty() )

    {

        QMessageBox::warning(this, tr("警告信息"), tr("输入不能为空"));

        return;

    }
    else{ bigNum a;
        linkedList  B1, B2, B3, C;
        QString str1;
        str1=ui->textEdit->toPlainText();
        string1=str1.toStdString();
        QString str2;
        str2=ui->textEdit_2->toPlainText();
        string2=str2.toStdString();
        QString str3;
        str3=ui->textEdit_3->toPlainText();
        string3=str3.toStdString();
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        B3=a.createfromstring(string3);
        C=a.mul_bigNum(B1,B2,B3);
        string result1;
        result1=a.translation(C);
        QString qresult1=QString::fromStdString(result1);
        ui->textBrowser->setText(qresult1);
        endTime = clock();
        double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
        QString b1;
        b1 =  QString::number(time1,10,6);
        ui->textBrowser_3->setText(b1+"s");
    }
}
void calculate1::on_pushButton_4_clicked()//除
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty()
             || ui->textEdit_3->document()->isEmpty() )

    {

        QMessageBox::warning(this, tr("警告信息"), tr("输入不能为空"));

        return;

    }
    else{ bigNum a;
        linkedList  B1, B2, B3, C;
        QString str1;
        str1=ui->textEdit->toPlainText();
        string1=str1.toStdString();
        QString str2;
        str2=ui->textEdit_2->toPlainText();
        string2=str2.toStdString();
        QString str3;
        str3=ui->textEdit_3->toPlainText();
        string3=str3.toStdString();
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        B3=a.createfromstring(string3);
        C=a.div_bigNum(B1,B2,B3);
        string result1;
        result1=a.translation(C);
        QString qresult1=QString::fromStdString(result1);
        ui->textBrowser->setText(qresult1);
        endTime = clock();
        double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
        QString b1;
        b1 =  QString::number(time1,10,6);
        ui->textBrowser_3->setText(b1+"s");
    }
}
void calculate1::on_pushButton_5_clicked()//乘方
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty()
             || ui->textEdit_3->document()->isEmpty() )

    {

        QMessageBox::warning(this, tr("警告信息"), tr("输入不能为空"));

        return;

    }
    else{ bigNum a;
        linkedList  B1, B2, B3, C;
        QString str1;
        str1=ui->textEdit->toPlainText();
        string1=str1.toStdString();
        QString str2;
        str2=ui->textEdit_2->toPlainText();
        string2=str2.toStdString();
        QString str3;
        str3=ui->textEdit_3->toPlainText();
        string3=str3.toStdString();
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        B3=a.createfromstring(string3);
        C=a.ind_bigNum(B1,B2,B3);
        string result1;
        result1=a.translation(C);
        QString qresult1=QString::fromStdString(result1);
        ui->textBrowser->setText(qresult1);
        endTime = clock();
        double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
        QString b1;
        b1 =  QString::number(time1,10,6);
        ui->textBrowser_3->setText(b1+"s");
    }
}
void calculate1::on_pushButton_6_clicked()
{
    this->hide();
    function0 *func=new function0;
    func->show();
}
void calculate1::on_pushButton_7_clicked()
{
    ui->textEdit->setPlainText("");
}
void calculate1::on_pushButton_8_clicked()
{
    ui->textEdit_2->setPlainText("");
}
void calculate1::on_pushButton_9_clicked()
{
    ui->textEdit_3->setPlainText("");
}
void calculate1::on_pushButton_10_clicked()
{
    ui->textBrowser->setText("");
}
