#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Calculator");
    /*QWidget::setWindowOpacity(0.95);*/
    connect(ui->button_0, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_1, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_2, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_3, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_4, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_5, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_6, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_7, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_8, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_9, &QPushButton::clicked, this, &MainWindow::onNumClicked);
    connect(ui->button_i, &QPushButton::clicked, this, &MainWindow::onIclicked);
    connect(ui->buttonC, &QPushButton::clicked, this, &MainWindow::onCclicked);
    connect(ui->buttonDEL, &QPushButton::clicked, this, &MainWindow::onDELclicked);
    connect(ui->buttonDiv, &QPushButton::clicked, this, &MainWindow::onMultiDivClicked);
    connect(ui->buttonMult, &QPushButton::clicked, this, &MainWindow::onMultiDivClicked);
    connect(ui->buttonMinus, &QPushButton::clicked, this, &MainWindow::onPlusMinusClicked);
    connect(ui->buttonPlus, &QPushButton::clicked, this, &MainWindow::onPlusMinusClicked);
    connect(ui->buttonEqual, &QPushButton::clicked, this, &MainWindow::onEqualClicked);
    connect(ui->buttonDot, &QPushButton::clicked, this, &MainWindow::onDotClicked);
    connect(ui->buttonHelp, &QPushButton::clicked, this, &MainWindow::onHelpClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNumClicked()
{
    QPushButton *button = (QPushButton *) sender();

    QString str = ui->labelNumbers->text();
    QStringList list = str.split(QRegExp("[+|-]"));

    if (list[list.size() - 1] == "0" && numbersLength())
    {
        if (button->text() != "0")
        {
            str.chop(1);
            str+=button->text();
            ui->labelNumbers->setText(str);
        }
    }
    else if (!ui->labelNumbers->text().contains("i") && numbersLength())
    {
        ui->labelNumbers->setText(ui->labelNumbers->text() + button->text());
    }

    if (ui->labelNumbers->text() != "0" && ui->labelNumbers->text() != "−0" && numbersLength())
    {
        ui->buttonPlus->setEnabled(true);
        ui->buttonMinus->setEnabled(true);
    }
}

void MainWindow::onIclicked()
{
    if (!ui->labelNumbers->text().contains("i") && numbersLength())
    {
        ui->labelNumbers->setText(ui->labelNumbers->text() + "i");
    }
    else if (ui->labelNumbers->text() == "0" && numbersLength())
    {
        ui->labelNumbers->setText("i");
    }

    ui->button_i->setEnabled(false);
    ui->buttonDot->setEnabled(false);
    ui->buttonMult->setEnabled(true);
    ui->buttonDiv->setEnabled(true);
    ui->buttonPlus->setEnabled(true);
    ui->buttonMinus->setEnabled(true);
    ui->buttonEqual->setEnabled(true);
}

void MainWindow::onDELclicked()
{
    QString str = ui->labelNumbers->text();
    str.chop(1);
    if (str.isEmpty())
    {
        str = "0";
    }
    ui->labelNumbers->setText(str);

    if (!ui->labelNumbers->text().contains("i"))
    {
        ui->buttonEqual->setEnabled(false);
        ui->buttonDiv->setEnabled(false);
        ui->buttonMult->setEnabled(false);
    }

    if (!ui->labelNumbers->text().contains("."))
    {
        ui->buttonDot->setEnabled(true);
    }
    else if (ui->labelNumbers->text().contains("+") || ui->labelNumbers->text().contains("−"))
    {
        if (ui->labelNumbers->text().count(".") < 2)
        {
            ui->buttonDot->setEnabled(true);
        }
    }

    if (!ui->labelNumbers->text().contains("i"))
    {
        ui->button_i->setEnabled(true);
    }
    else
    {
        ui->button_i->setEnabled(false);
    }

    if (!ui->labelNumbers->text().contains("+|−"))
    {
        ui->buttonPlus->setEnabled(true);
        ui->buttonMinus->setEnabled(true);
    }

}

void MainWindow::onPlusMinusClicked()
{
    QPushButton *button = (QPushButton *) sender();

    if (ui->labelNumbers->text().contains("i"))
    {
        writeFirstNumber();
        operation = button->text();
        ui->labelNumbers->setText("0");
        ui->buttonEqual->setEnabled(true);
        ui->button_i->setEnabled(true);
        ui->buttonMult->setEnabled(false);
        ui->buttonDiv->setEnabled(false);
    }
    else if (ui->labelNumbers->text() == "0" && button->text() == "-")
    {
        ui->labelNumbers->setText("-0");
    }
    else if (numbersLength())
    {
        ui->labelNumbers->setText(ui->labelNumbers->text() + button->text());
        ui->buttonPlus->setEnabled(false);
        ui->buttonMinus->setEnabled(false);
    }
}

void MainWindow::onMultiDivClicked()
{
    ui->buttonDot->setEnabled(true);

    QPushButton *button = (QPushButton *) sender();

    writeFirstNumber();

    operation = button->text();
    ui->labelNumbers->setText("0");
    ui->buttonEqual->setEnabled(true);
    ui->button_i->setEnabled(true);
}

void MainWindow::addition()
{

    QString str = QString::fromStdString((num_1 + num_2).createStringResult());
    ui->labelNumbers->setText(str);
}

void MainWindow::substitution()
{
    QString str = QString::fromStdString((num_1 - num_2).createStringResult());
    ui->labelNumbers->setText(str);
}

void MainWindow::multiplication()
{
    QString str = QString::fromStdString((num_1 * num_2).createStringResult());
    ui->labelNumbers->setText(str);
}

void MainWindow::division()
{
    if (num_2.getReal() == 0 && num_2.getImag() == 0)
    {
        QMessageBox::critical(this, "Math Error", "WARNING: division by 0 is not possible!");
        onCclicked();
    }
    else
    {
        QString str = QString::fromStdString((num_1 / num_2).createStringResult());
        ui->labelNumbers->setText(str);
    }
}

void MainWindow::writeFirstNumber()
{
    ui->buttonDot->setEnabled(true);

    QString qstr = ui->labelNumbers->text();
    string str = qstr.toStdString();
    ComplexNumber num(str);
    num_1 = num;
}

void MainWindow::writeSecondNumber()
{
    ui->buttonDot->setEnabled(true);

    QString qstr = ui->labelNumbers->text();
    string str = qstr.toStdString();
    ComplexNumber num(str);
    num_2 = num;
}

void MainWindow::onEqualClicked()
{
    ui->buttonEqual->setEnabled(false);

    writeSecondNumber();

    if (operation == "+")
    {
        MainWindow::addition();
    }
    else if (operation == "-")
    {
        MainWindow::substitution();
    }
    else if(operation == "×")
    {
        MainWindow::multiplication();
    }
    else if(operation == "÷")
    {
        MainWindow::division();
    }
}

void MainWindow::onCclicked()
{
    ui->labelNumbers->setText("0");
    this->num_1.setReal("0");
    this->num_1.setImag("0");
    this->num_2.setReal("0");
    this->num_2.setImag("0");
    this->operation.clear();

    ui->buttonDot->setEnabled(true);
    ui->buttonDiv->setEnabled(false);
    ui->buttonMult->setEnabled(false);
    ui->buttonMinus->setEnabled(true);
    ui->buttonPlus->setEnabled(true);

    if (!ui->labelNumbers->text().contains("i"))
    {
        ui->button_i->setEnabled(true);
        ui->buttonDot->setEnabled(true);
        ui->buttonEqual->setEnabled(false);
    }
}

void MainWindow::onDotClicked()
{
    QString qstr = ui->labelNumbers->text();

    if (qstr.contains("+") || qstr.contains("-"))
    {
        QStringList list = qstr.split(QRegExp("[+|-]"));

        if (!list[1].contains("."))
            ui->labelNumbers->setText(ui->labelNumbers->text() + ".");
    }
    else
    {
        if (!qstr.contains("."))
            ui->labelNumbers->setText(ui->labelNumbers->text() + ".");
    }

    ui->buttonPlus->setEnabled(false);
    ui->buttonMinus->setEnabled(false);
    ui->buttonMult->setEnabled(false);
    ui->buttonDiv->setEnabled(false);
    ui->buttonEqual->setEnabled(false);
}

void MainWindow::onHelpClicked()
{
    QMessageBox::information(this, "Help", "Hello, this is a complex number calculator!\n"
                                           "Now you will learn a few rules for working with it.\n"
                                           "First, any number must have an imaginary part (example: 1 + 2i).\n"
                                           "Secondly, the program cannot predict all possible errors, "
                                           "so please be patient, "
                                           "this is our first development of such an application!");
}

bool MainWindow::numbersLength()
{
    if (ui->labelNumbers->text().size() >= 13)
    {
        return false;
    }
    return true;
}
