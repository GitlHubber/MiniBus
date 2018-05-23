#ifndef MATRIXFORM_H
#define MATRIXFORM_H

#include <QMainWindow>
#include <QLineEdit>
#include <QList>
#include <QVBoxLayout>
#include <QDialog>

namespace Ui {
class MatrixForm;
}

class MatrixForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit MatrixForm(QWidget *parent = 0);
    ~MatrixForm();

public slots:
    void start(int size);

private:
    Ui::MatrixForm *ui;
    QLineEdit *QLE;
};

#endif // MATRIXFORM_H
