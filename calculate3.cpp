#include "calculate3.h"
#include "ui_calculate3.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDebug>
#include<time.h>
#define CLOCKS_PER_SEC ((clock_t)1000000)
calculate3::calculate3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calculate3)
{
    ui->setupUi(this);
    this->setWindowTitle("取余且涉及文件的大数运算");
    this->setWindowFlags(Qt::Dialog | Qt::WindowMinMaxButtonsHint | Qt::WindowCloseButtonHint);
}

calculate3::~calculate3()
{
    delete ui;
}
void calculate3::welcome()
{
        FileName=ui->lineEdit->text();
        QFile file(FileName);
        //QFile file("C:/Users/19218/Desktop/input.txt");
        if (!file.open(QIODevice::ReadWrite| QIODevice::Text)) return;
        QTextStream stream(&file );
        QString temp1=stream.readLine();
        QString temp2=stream.readLine();
        QString temp3=stream.readLine();
        ui->textBrowser->setText(temp1);
        ui->textBrowser_2->setText(temp2);
        ui->textBrowser_3->setText(temp3);
        str[0]=temp1.toStdString();
        str[1]=temp2.toStdString();
        str[2]=temp3.toStdString();
        file.close();
        return;
}
void calculate3::calcu_add()
{
            bigNum a;
            linkedList  B1, B2, B3, C,C1;

            B1=a.createfromstring(str[0]);
            B2=a.createfromstring(str[1]);
            B3=a.createfromstring(str[2]);
            C=a.add_bigNum(B1,B2,B3);
            string result1;
            result1=a.translation(C);
            QString qresult1=QString::fromStdString(result1);
            ui->textBrowser_4->setText("add:"+qresult1);
            QFile file(FileName);
            if (!file.open(QIODevice::ReadWrite| QIODevice::Append)) return;
            QTextStream stream(&file );
            stream<<endl;
            stream<<"Sum: "<<qresult1<<endl<<endl;
            file.close();

}
void calculate3::calcu_sub()
{
            bigNum a;
            linkedList  B1, B2, B3, C,C1;

            B1=a.createfromstring(str[0]);
            B2=a.createfromstring(str[1]);
            B3=a.createfromstring(str[2]);
            int comp=a.compare(B1,B2);
            if(comp==-1){ui->textBrowser_4->setText("No Exit(Regardless of the negative)");}
            if(comp==0){ui->textBrowser_4->setText("0");}
            if(comp==1){C=a.sub_bigNum(B1,B2);
            C1=a.mod_bigNum(C,B3);
            string result1;
            result1=a.translation(C1);
            QString qresult1=QString::fromStdString(result1);
            ui->textBrowser_4->setText("sub:"+qresult1);

            QFile file(FileName);
            if (!file.open(QIODevice::ReadWrite| QIODevice::Append)) return;
            QTextStream stream(&file );
            stream<<endl;
            stream<<"Sub: "<<qresult1<<endl<<endl;
            file.close();

}}
void calculate3::calcu_mul()
{
            bigNum a;
            linkedList  B1, B2, B3, C,C1;

            B1=a.createfromstring(str[0]);
            B2=a.createfromstring(str[1]);
            B3=a.createfromstring(str[2]);
            C=a.mul_bigNum(B1,B2,B3);
            string result1;
            result1=a.translation(C);
            QString qresult1=QString::fromStdString(result1);
            ui->textBrowser_4->setText("mul:"+qresult1);
            QFile file(FileName);
            if (!file.open(QIODevice::ReadWrite| QIODevice::Append)) return;
            QTextStream stream(&file );
            stream<<endl;
            stream<<"Mul: "<<qresult1<<endl<<endl;
            file.close();

}
void calculate3::calcu_div()
{
            bigNum a;
            linkedList  B1, B2, B3, C,C1;

            B1=a.createfromstring(str[0]);
            B2=a.createfromstring(str[1]);
            B3=a.createfromstring(str[2]);
            C=a.div_bigNum(B1,B2,B3);
            string result1;
            result1=a.translation(C);
            QString qresult1=QString::fromStdString(result1);
            ui->textBrowser_4->setText("div:"+qresult1);
            QFile file(FileName);
            if (!file.open(QIODevice::ReadWrite| QIODevice::Append)) return;
            QTextStream stream(&file );
            stream<<endl;
            stream<<"Div: "<<qresult1<<endl<<endl;
            file.close();

}
void calculate3::calcu_ind()
{
            bigNum a;
            linkedList  B1, B2, B3, C,C1;

            B1=a.createfromstring(str[0]);
            B2=a.createfromstring(str[1]);
            B3=a.createfromstring(str[2]);
            C=a.ind_bigNum(B1,B2,B3);
            string result1;
            result1=a.translation(C);
            QString qresult1=QString::fromStdString(result1);
            ui->textBrowser_4->setText(qresult1);
            QFile file(FileName);
            if (!file.open(QIODevice::ReadWrite| QIODevice::Append)) return;
            QTextStream stream(&file );
            stream<<endl;
            stream<<"ind: "<<qresult1<<endl<<endl;
            file.close();

}
void calculate3::on_pushButton_clicked()
{clock_t startTime,endTime;
    startTime = clock();
    welcome();
    calcu_add();
    endTime = clock();
    double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
    QString b1;
    b1 =  QString::number(time1,10,6);
    ui->textBrowser_6->setText(b1+"s");
}
void calculate3::on_pushButton_2_clicked()
{clock_t startTime,endTime;
    startTime = clock();
    welcome();
    calcu_sub();
    endTime = clock();
    double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
    QString b1;
    b1 =  QString::number(time1,10,6);
    ui->textBrowser_6->setText(b1+"s");
}
void calculate3::on_pushButton_3_clicked()
{clock_t startTime,endTime;
    startTime = clock();
    welcome();
    calcu_mul();
    endTime = clock();
    double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
    QString b1;
    b1 =  QString::number(time1,10,6);
    ui->textBrowser_6->setText(b1+"s");
}
void calculate3::on_pushButton_4_clicked()
{clock_t startTime,endTime;
    startTime = clock();
    welcome();
    calcu_div();
    endTime = clock();
    double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
    QString b1;
    b1 =  QString::number(time1,10,6);
    ui->textBrowser_6->setText(b1+"s");
}
void calculate3::on_pushButton_5_clicked()
{clock_t startTime,endTime;
    startTime = clock();
    welcome();
    calcu_ind();
    endTime = clock();
    double time1=(double)(endTime - startTime) / CLOCKS_PER_SEC;
    QString b1;
    b1 =  QString::number(time1,10,6);
    ui->textBrowser_6->setText(b1+"s");
}
void calculate3::on_pushButton_6_clicked()
{
    this->hide();
    function0 *func=new function0;
    func->show();
}
void calculate3::on_pushButton_7_clicked()
{
    FileName=ui->lineEdit->text();
    QFile file(FileName);
    //QFile file("C:/Users/19218/Desktop/input.txt");
   // if (!file.open(QIODevice::ReadWrite| QIODevice::Text)) return;
   // QTextStream stream(&file );
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug()<<"Can't open the file!"<<endl;
    }
    QString str=file.readAll();
    ui->textBrowser_4->setText(str);
}
void calculate3::on_pushButton_8_clicked()
{
    ui->lineEdit->setText("");
}
