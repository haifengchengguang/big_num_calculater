#ifndef FUNCTION0_H
#define FUNCTION0_H

#include <QDialog>

namespace Ui {
class function0;
}

class function0 : public QDialog
{
    Q_OBJECT

public:
    explicit function0(QWidget *parent = nullptr);
    ~function0();

private:
    Ui::function0 *ui;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
};

#endif // FUNCTION0_H
