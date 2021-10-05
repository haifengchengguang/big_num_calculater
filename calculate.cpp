#include "calculate.h"
#include "ui_calculate.h"
#include <QMessageBox>
#include "big_num.h"
#include<time.h>
#define CLOCKS_PER_SEC ((clock_t)1000000)
calculate::calculate(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculate)
{
    //QPixmap icon("iconfinder_delete_1772623.ico");
    ui->setupUi(this);
    this->setWindowTitle("不取余不涉及文件");
    this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
//ui->label_4->setPixmap(icon);
}

calculate::~calculate()
{
    delete ui;
}
/*void calculate::calcu()
{

    QTextEdit *Qtext1=new QTextEdit;
    QString str1;
    str1=Qtext1->toPlainText();
    string1=str1.toStdString();
    QTextEdit *Qtext2=new QTextEdit;
    QString str2;
    str2=Qtext1->toPlainText();
    string1=str2.toStdString();
}*/
void calculate::on_pushButton_3_clicked()//加
{		clock_t startTime,endTime;
        startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty() )

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
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        C=a.add_bigNum(B1,B2);
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
void calculate::on_pushButton_clicked()//减
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty() )

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
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2); int comp=a.compare(B1,B2);
        if(comp==-1){ C=a.sub_bigNum(B1,B2);
            string result1;
            result1=a.translation(C);
            QString qresult1=QString::fromStdString(result1);
            ui->textBrowser->setText("-"+qresult1);
        }
        if(comp==0){ui->textBrowser->setText("0");}
        if(comp==1){

        C=a.sub_bigNum(B1,B2);
        string result1;
        result1=a.translation(C);
        QString qresult1=QString::fromStdString(result1);
        ui->textBrowser->setText(qresult1);
        endTime = clock();
        double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
        QString b1;
        b1 =  QString::number(time1,10,6);
        ui->textBrowser_3->setText(b1+"s");
    }}
}
void calculate::on_pushButton_2_clicked()//乘
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty() )

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
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        C=a.mul_bigNum(B1,B2);
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
void calculate::on_pushButton_4_clicked()//除
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty() )

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
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        C=a.div_bigNum(B1,B2);
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
void calculate::on_pushButton_5_clicked()//指数
{
    clock_t startTime,endTime;
            startTime = clock();
    if( ui->textEdit->document()->isEmpty()

            || ui->textEdit_2->document()->isEmpty() )

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
        B1=a.createfromstring(string1);
        B2=a.createfromstring(string2);
        C=a.ind_bigNum(B1,B2);
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
void calculate::on_pushButton_6_clicked()
{
    this->hide();
    function0 *func=new function0;
    func->show();
}
void calculate::on_pushButton_7_clicked()
{
    ui->textEdit->setPlainText("");
}
void calculate::on_pushButton_8_clicked()
{
    ui->textEdit_2->setPlainText("");
}
void calculate::on_pushButton_9_clicked()
{
    ui->textBrowser->setPlainText("");
}
