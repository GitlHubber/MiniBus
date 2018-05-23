#include "matrixform.h"
#include "ui_matrixform.h"

MatrixForm::MatrixForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MatrixForm)
{
    ui->setupUi(this);
}

MatrixForm::~MatrixForm()
{
    delete ui;
}

void MatrixForm::start(int size)
{
    for (int i = 0; i < size; ++i)
    {
        QLE = new QLineEdit();
        QLE->show();
    }
}
