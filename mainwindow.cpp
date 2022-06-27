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
    else
    {
        ui->buttonDot->setEnabled(false);
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

void MainWindow::multiplication()
{
    QString result = "";
    double tmpReal = (num_1.real.toDouble() * num_2.real.toDouble()) - (num_1.imag.replace("i", "").toDouble() * (num_2.imag.replace("i", "").toDouble()));
    double tmpImag = num_1.real.toDouble() * num_2.imag.replace("i", "").toDouble() + num_2.real.toDouble() * num_1.imag.replace("i", "").toDouble();
    result = QString::number(tmpReal, 'f', 2) + (tmpImag < 0 ? "" : "+") + QString::number(tmpImag, 'f', 2) + "i";
    ui->labelNumbers->setText(result);
}

void MainWindow::division()
{
    double real_1 = num_1.real.toDouble();
    double real_2 = num_2.real.toDouble();
    double imag_1 = num_1.imag.replace("i", "").toDouble();
    double imag_2 = num_2.imag.replace("i", "").toDouble();

    if (real_2 == 0 && imag_2 == 0)
    {
        QMessageBox::information(this, "Math Error", "WARNING: division by 0 is not possible!");
        onCclicked();
    }
    else
    {
        QString result = "";
        double tmpReal = ((real_1 * real_2) + (imag_1 * imag_2)) / ((real_2 * real_2) + (imag_2 * imag_2));
        double tmpImag = ((real_2 * imag_1) - (real_1 * imag_2)) / ((real_2 * real_2) + (imag_2 * imag_2));
        result = QString::number(tmpReal, 'f', 2) + (tmpImag < 0 ? "" : "+") + QString::number(tmpImag, 'f', 2) + "i";
        ui->labelNumbers->setText(result);
    }
}

void MainWindow::addition()
{
    QString result = QString::number(num_1.real.toDouble() + num_2.real.toDouble(), 'f', 2);
    double tmpImag = num_1.imag.replace("i", "").toDouble() + num_2.imag.replace("i", "").toDouble();
    result += (tmpImag < 0 ? "" : "+") + QString::number(tmpImag, 'f', 2) + "i";
    ui->labelNumbers->setText(result);
}

void MainWindow::substitution()
{
    QString result = QString::number(num_1.real.toDouble() - num_2.real.toDouble(), 'f', 2);
    double tmpImag = num_1.imag.replace("i", "").toDouble() - num_2.imag.replace("i", "").toDouble();
    result += (tmpImag < 0 ? "" : "+") + QString::number(tmpImag, 'f', 2) + "i";
    ui->labelNumbers->setText(result);
}

void MainWindow::writeFirstNumber()
{
    ui->buttonDot->setEnabled(true);

    QString num = ui->labelNumbers->text();

    if (num.contains("+i") || num.contains("−i"))
    {
        num.insert(num.size() - 1, '1');
    }

    QStringList list = num.split(QRegExp("[+|−]"));

    if (list[0].contains("i"))
    {
        num_1.imag = list[0];
        num_1.real = num.replace(list[0], "0");
    }
    else
    {
        num_1.real = list[0];
        num.remove(0, list[0].size());
        num_1.imag = num;
    }
}

void MainWindow::writeSecondNumber()
{
    QString num = ui->labelNumbers->text();

    if (num.contains("+i") || num.contains("−i"))
    {
        num.insert(num.size() - 1, '1');
    }

    QStringList list = num.split(QRegExp("[+|−]"));

    if (list[0].contains("i"))
    {
        num_2.imag = list[0];
        num_2.real = num.replace(list[0], "0");
    }
    else
    {
        num_2.real = list[0];
        num.remove(0, list[0].count());
        num_2.imag = num;
    }
}

void MainWindow::onEqualClicked()
{
    ui->buttonEqual->setEnabled(false);

    writeSecondNumber();

    if (operation == "+")
    {
        MainWindow::addition();
    }
    else if (operation == "−")
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
    this->num_1.real.clear();
    this->num_1.imag.clear();
    this->num_2.real.clear();
    this->num_2.imag.clear();
    this->operation.clear();

    ui->buttonDot->setEnabled(true);
    ui->buttonDiv->setEnabled(false);
    ui->buttonMult->setEnabled(false);
    ui->buttonMinus->setEnabled(true);
    if (!ui->labelNumbers->text().contains("i"))
    {
        ui->button_i->setEnabled(true);
        ui->buttonDot->setEnabled(true);
        ui->buttonEqual->setEnabled(false);
    }
}

void MainWindow::onDotClicked()
{
    QString str = ui->labelNumbers->text();
    int size = ui->labelNumbers->text().size();
    if (str[size - 1] != "+" && str[size - 1] != "−" && numbersLength())
    {
        ui->labelNumbers->setText(ui->labelNumbers->text() + ".");
        ui->buttonDot->setEnabled(false);
    }
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
    if (ui->labelNumbers->text().size() >= 12)
    {
        return false;
    }
    return true;
}

