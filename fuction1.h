#ifndef FUCTION1_H
#define FUCTION1_H

#include <QDialog>

namespace Ui {
class fuction1;
}

class fuction1 : public QDialog
{
    Q_OBJECT

public:
    explicit fuction1(QWidget *parent = nullptr);
    ~fuction1();

private:
    Ui::fuction1 *ui;
};

#endif // FUCTION1_H
