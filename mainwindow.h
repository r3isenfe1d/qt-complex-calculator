#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ComplexNumber.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //when button is pushed, this happens
    void onNumClicked();
    void onIclicked();
    void onDELclicked();
    void onPlusMinusClicked();
    void onEqualClicked();
    void onHelpClicked();
    void onMultiDivClicked();
    void onCclicked();
    void onDotClicked();

private:
    Ui::MainWindow *ui;

    ComplexNumber num_1, num_2;
    QString operation;

    //methods for several operations
    void addition();
    void substitution();
    void multiplication();
    void division();

    //cut number into parts
    void writeFirstNumber();
    void writeSecondNumber();

    bool numbersLength();
};
#endif // MAINWINDOW_H
