/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *button_4;
    QPushButton *buttonHelp;
    QPushButton *button_0;
    QPushButton *button_i;
    QPushButton *button_5;
    QPushButton *buttonMult;
    QPushButton *button_7;
    QPushButton *buttonC;
    QPushButton *button_8;
    QPushButton *button_3;
    QPushButton *buttonEqual;
    QPushButton *button_2;
    QPushButton *buttonDiv;
    QPushButton *buttonDot;
    QPushButton *button_6;
    QPushButton *button_1;
    QPushButton *button_9;
    QPushButton *buttonPlus;
    QPushButton *buttonMinus;
    QPushButton *buttonDEL;
    QVBoxLayout *verticalLayout;
    QLabel *labelNumbers;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(440, 543);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(440, 543));
        MainWindow->setMaximumSize(QSize(440, 543));
        MainWindow->setCursor(QCursor(Qt::ArrowCursor));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../Pictures/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(94, 92, 100);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetNoConstraint);
        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setMinimumSize(QSize(101, 70));
        button_4->setMaximumSize(QSize(101, 70));
        button_4->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_4, 2, 0, 1, 1);

        buttonHelp = new QPushButton(centralwidget);
        buttonHelp->setObjectName(QString::fromUtf8("buttonHelp"));
        sizePolicy.setHeightForWidth(buttonHelp->sizePolicy().hasHeightForWidth());
        buttonHelp->setSizePolicy(sizePolicy);
        buttonHelp->setMinimumSize(QSize(101, 70));
        buttonHelp->setMaximumSize(QSize(101, 70));
        buttonHelp->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonHelp->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(buttonHelp, 0, 2, 1, 1);

        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setMinimumSize(QSize(101, 70));
        button_0->setMaximumSize(QSize(101, 70));
        button_0->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_0, 4, 0, 1, 1);

        button_i = new QPushButton(centralwidget);
        button_i->setObjectName(QString::fromUtf8("button_i"));
        button_i->setEnabled(true);
        sizePolicy.setHeightForWidth(button_i->sizePolicy().hasHeightForWidth());
        button_i->setSizePolicy(sizePolicy);
        button_i->setMinimumSize(QSize(101, 70));
        button_i->setMaximumSize(QSize(101, 70));
        button_i->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_i->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_i, 4, 1, 1, 1);

        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setMinimumSize(QSize(101, 70));
        button_5->setMaximumSize(QSize(101, 70));
        button_5->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_5, 2, 1, 1, 1);

        buttonMult = new QPushButton(centralwidget);
        buttonMult->setObjectName(QString::fromUtf8("buttonMult"));
        buttonMult->setEnabled(false);
        sizePolicy.setHeightForWidth(buttonMult->sizePolicy().hasHeightForWidth());
        buttonMult->setSizePolicy(sizePolicy);
        buttonMult->setMinimumSize(QSize(101, 70));
        buttonMult->setMaximumSize(QSize(101, 70));
        buttonMult->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonMult->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(buttonMult, 1, 3, 1, 1);

        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setMinimumSize(QSize(101, 70));
        button_7->setMaximumSize(QSize(101, 70));
        button_7->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_7, 1, 0, 1, 1);

        buttonC = new QPushButton(centralwidget);
        buttonC->setObjectName(QString::fromUtf8("buttonC"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonC->sizePolicy().hasHeightForWidth());
        buttonC->setSizePolicy(sizePolicy1);
        buttonC->setMinimumSize(QSize(101, 70));
        buttonC->setMaximumSize(QSize(101, 70));
        buttonC->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));
        buttonC->setIconSize(QSize(16, 16));

        gridLayout->addWidget(buttonC, 0, 1, 1, 1);

        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setMinimumSize(QSize(101, 70));
        button_8->setMaximumSize(QSize(101, 70));
        button_8->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_8, 1, 1, 1, 1);

        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setMinimumSize(QSize(101, 70));
        button_3->setMaximumSize(QSize(101, 70));
        button_3->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_3, 3, 2, 1, 1);

        buttonEqual = new QPushButton(centralwidget);
        buttonEqual->setObjectName(QString::fromUtf8("buttonEqual"));
        buttonEqual->setEnabled(false);
        sizePolicy.setHeightForWidth(buttonEqual->sizePolicy().hasHeightForWidth());
        buttonEqual->setSizePolicy(sizePolicy);
        buttonEqual->setMinimumSize(QSize(70, 70));
        buttonEqual->setMaximumSize(QSize(101, 70));
        buttonEqual->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonEqual->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 147, 48);\n"
"	font: 25 25pt \"Comfortaa\";\n"
"\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color: rgb(255, 163, 72);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(255, 163, 72);\n"
"}"));

        gridLayout->addWidget(buttonEqual, 4, 3, 1, 1);

        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setMinimumSize(QSize(101, 70));
        button_2->setMaximumSize(QSize(101, 70));
        button_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_2, 3, 1, 1, 1);

        buttonDiv = new QPushButton(centralwidget);
        buttonDiv->setObjectName(QString::fromUtf8("buttonDiv"));
        buttonDiv->setEnabled(false);
        sizePolicy1.setHeightForWidth(buttonDiv->sizePolicy().hasHeightForWidth());
        buttonDiv->setSizePolicy(sizePolicy1);
        buttonDiv->setMinimumSize(QSize(101, 70));
        buttonDiv->setMaximumSize(QSize(101, 70));
        buttonDiv->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonDiv->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(buttonDiv, 0, 3, 1, 1);

        buttonDot = new QPushButton(centralwidget);
        buttonDot->setObjectName(QString::fromUtf8("buttonDot"));
        sizePolicy.setHeightForWidth(buttonDot->sizePolicy().hasHeightForWidth());
        buttonDot->setSizePolicy(sizePolicy);
        buttonDot->setMinimumSize(QSize(101, 70));
        buttonDot->setMaximumSize(QSize(101, 70));
        buttonDot->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonDot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(buttonDot, 4, 2, 1, 1);

        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setMinimumSize(QSize(101, 70));
        button_6->setMaximumSize(QSize(101, 70));
        button_6->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_6, 2, 2, 1, 1);

        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        button_1->setMinimumSize(QSize(101, 70));
        button_1->setMaximumSize(QSize(101, 70));
        button_1->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_1, 3, 0, 1, 1);

        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setMinimumSize(QSize(101, 70));
        button_9->setMaximumSize(QSize(101, 70));
        button_9->setContextMenuPolicy(Qt::DefaultContextMenu);
        button_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(button_9, 1, 2, 1, 1);

        buttonPlus = new QPushButton(centralwidget);
        buttonPlus->setObjectName(QString::fromUtf8("buttonPlus"));
        buttonPlus->setEnabled(false);
        sizePolicy.setHeightForWidth(buttonPlus->sizePolicy().hasHeightForWidth());
        buttonPlus->setSizePolicy(sizePolicy);
        buttonPlus->setMinimumSize(QSize(101, 70));
        buttonPlus->setMaximumSize(QSize(101, 70));
        buttonPlus->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonPlus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(buttonPlus, 3, 3, 1, 1);

        buttonMinus = new QPushButton(centralwidget);
        buttonMinus->setObjectName(QString::fromUtf8("buttonMinus"));
        buttonMinus->setEnabled(true);
        sizePolicy.setHeightForWidth(buttonMinus->sizePolicy().hasHeightForWidth());
        buttonMinus->setSizePolicy(sizePolicy);
        buttonMinus->setMinimumSize(QSize(101, 70));
        buttonMinus->setMaximumSize(QSize(101, 70));
        buttonMinus->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonMinus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(buttonMinus, 2, 3, 1, 1);

        buttonDEL = new QPushButton(centralwidget);
        buttonDEL->setObjectName(QString::fromUtf8("buttonDEL"));
        sizePolicy.setHeightForWidth(buttonDEL->sizePolicy().hasHeightForWidth());
        buttonDEL->setSizePolicy(sizePolicy);
        buttonDEL->setMinimumSize(QSize(101, 70));
        buttonDEL->setMaximumSize(QSize(101, 70));
        buttonDEL->setContextMenuPolicy(Qt::DefaultContextMenu);
        buttonDEL->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font: 25 25pt \"Comfortaa\";\n"
"	background-color: rgb(61, 56, 70);\n"
"	color:rgb(255,255,255);\n"
"	border-radius: 35%;\n"
"}\n"
"QPushButton:pressed{\n"
"	background-color:rgb(125,125,125);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(125,125,125);\n"
"}"));

        gridLayout->addWidget(buttonDEL, 0, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);


        gridLayout_2->addLayout(gridLayout, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelNumbers = new QLabel(centralwidget);
        labelNumbers->setObjectName(QString::fromUtf8("labelNumbers"));
        sizePolicy.setHeightForWidth(labelNumbers->sizePolicy().hasHeightForWidth());
        labelNumbers->setSizePolicy(sizePolicy);
        labelNumbers->setMinimumSize(QSize(419, 109));
        labelNumbers->setMaximumSize(QSize(419, 109));
        QFont font;
        font.setFamily(QString::fromUtf8("Comfortaa"));
        font.setPointSize(40);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        labelNumbers->setFont(font);
        labelNumbers->setLayoutDirection(Qt::LeftToRight);
        labelNumbers->setAutoFillBackground(false);
        labelNumbers->setStyleSheet(QString::fromUtf8("background-color: rgb(61, 56, 70);\n"
"font: 25 40pt \"Comfortaa\";\n"
"border-radius: 54%\n"
""));
        labelNumbers->setFrameShape(QFrame::NoFrame);
        labelNumbers->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelNumbers->setMargin(10);
        labelNumbers->setIndent(10);

        verticalLayout->addWidget(labelNumbers);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 440, 24));
        MainWindow->setMenuBar(menubar);
#if QT_CONFIG(shortcut)
        labelNumbers->setBuddy(labelNumbers);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        buttonHelp->setText(QCoreApplication::translate("MainWindow", "Help", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_i->setText(QCoreApplication::translate("MainWindow", "i", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        buttonMult->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        buttonC->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        buttonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        buttonDiv->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        buttonDot->setText(QCoreApplication::translate("MainWindow", "\342\210\231", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        buttonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        buttonMinus->setText(QCoreApplication::translate("MainWindow", "\342\210\222", nullptr));
        buttonDEL->setText(QCoreApplication::translate("MainWindow", "DEL", nullptr));
        labelNumbers->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
