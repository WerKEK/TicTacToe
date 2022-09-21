/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QLabel *label_IP;
    QLabel *labe_Port;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_Enter_Your_Nickname;
    QLineEdit *lineEdit_Nickname;
    QLabel *label_ChooseSymbol;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_X;
    QRadioButton *radioButton_O;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_ID;
    QPushButton *pushButton_Create_Lobby;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1_2;
    QPushButton *pushButton_1_1;
    QPushButton *pushButton_3_1;
    QPushButton *pushButton_2_1;
    QPushButton *pushButton_1_3;
    QPushButton *pushButton_2_2;
    QPushButton *pushButton_2_3;
    QPushButton *pushButton_3_2;
    QPushButton *pushButton_3_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_InGame_Player1Name;
    QLabel *label_InGame_VS;
    QLabel *label_InGame_Player2Name;
    QPushButton *pushButton_resetGame;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(728, 465);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMaximumSize(QSize(340, 340));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_IP = new QLabel(tab);
        label_IP->setObjectName(QString::fromUtf8("label_IP"));

        verticalLayout_3->addWidget(label_IP);

        labe_Port = new QLabel(tab);
        labe_Port->setObjectName(QString::fromUtf8("labe_Port"));

        verticalLayout_3->addWidget(labe_Port);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_Enter_Your_Nickname = new QLabel(tab);
        label_Enter_Your_Nickname->setObjectName(QString::fromUtf8("label_Enter_Your_Nickname"));

        horizontalLayout->addWidget(label_Enter_Your_Nickname);

        lineEdit_Nickname = new QLineEdit(tab);
        lineEdit_Nickname->setObjectName(QString::fromUtf8("lineEdit_Nickname"));

        horizontalLayout->addWidget(lineEdit_Nickname);


        verticalLayout->addLayout(horizontalLayout);

        label_ChooseSymbol = new QLabel(tab);
        label_ChooseSymbol->setObjectName(QString::fromUtf8("label_ChooseSymbol"));

        verticalLayout->addWidget(label_ChooseSymbol);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        radioButton_X = new QRadioButton(tab);
        radioButton_X->setObjectName(QString::fromUtf8("radioButton_X"));

        horizontalLayout_5->addWidget(radioButton_X);

        radioButton_O = new QRadioButton(tab);
        radioButton_O->setObjectName(QString::fromUtf8("radioButton_O"));

        horizontalLayout_5->addWidget(radioButton_O);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_ID = new QLineEdit(tab);
        lineEdit_ID->setObjectName(QString::fromUtf8("lineEdit_ID"));

        horizontalLayout_2->addWidget(lineEdit_ID);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton_Create_Lobby = new QPushButton(tab);
        pushButton_Create_Lobby->setObjectName(QString::fromUtf8("pushButton_Create_Lobby"));

        verticalLayout->addWidget(pushButton_Create_Lobby);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_2 = new QGridLayout(tab_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        pushButton_1_2 = new QPushButton(tab_2);
        pushButton_1_2->setObjectName(QString::fromUtf8("pushButton_1_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_1_2->sizePolicy().hasHeightForWidth());
        pushButton_1_2->setSizePolicy(sizePolicy);
        pushButton_1_2->setMinimumSize(QSize(60, 60));
        pushButton_1_2->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_1_2, 0, 1, 1, 1);

        pushButton_1_1 = new QPushButton(tab_2);
        pushButton_1_1->setObjectName(QString::fromUtf8("pushButton_1_1"));
        sizePolicy.setHeightForWidth(pushButton_1_1->sizePolicy().hasHeightForWidth());
        pushButton_1_1->setSizePolicy(sizePolicy);
        pushButton_1_1->setMinimumSize(QSize(60, 60));
        pushButton_1_1->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_1_1, 0, 0, 1, 1);

        pushButton_3_1 = new QPushButton(tab_2);
        pushButton_3_1->setObjectName(QString::fromUtf8("pushButton_3_1"));
        sizePolicy.setHeightForWidth(pushButton_3_1->sizePolicy().hasHeightForWidth());
        pushButton_3_1->setSizePolicy(sizePolicy);
        pushButton_3_1->setMinimumSize(QSize(60, 60));
        pushButton_3_1->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_3_1, 2, 0, 1, 1);

        pushButton_2_1 = new QPushButton(tab_2);
        pushButton_2_1->setObjectName(QString::fromUtf8("pushButton_2_1"));
        sizePolicy.setHeightForWidth(pushButton_2_1->sizePolicy().hasHeightForWidth());
        pushButton_2_1->setSizePolicy(sizePolicy);
        pushButton_2_1->setMinimumSize(QSize(60, 60));
        pushButton_2_1->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_2_1, 1, 0, 1, 1);

        pushButton_1_3 = new QPushButton(tab_2);
        pushButton_1_3->setObjectName(QString::fromUtf8("pushButton_1_3"));
        sizePolicy.setHeightForWidth(pushButton_1_3->sizePolicy().hasHeightForWidth());
        pushButton_1_3->setSizePolicy(sizePolicy);
        pushButton_1_3->setMinimumSize(QSize(60, 60));
        pushButton_1_3->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_1_3, 0, 2, 1, 1);

        pushButton_2_2 = new QPushButton(tab_2);
        pushButton_2_2->setObjectName(QString::fromUtf8("pushButton_2_2"));
        sizePolicy.setHeightForWidth(pushButton_2_2->sizePolicy().hasHeightForWidth());
        pushButton_2_2->setSizePolicy(sizePolicy);
        pushButton_2_2->setMinimumSize(QSize(60, 60));
        pushButton_2_2->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_2_2, 1, 1, 1, 1);

        pushButton_2_3 = new QPushButton(tab_2);
        pushButton_2_3->setObjectName(QString::fromUtf8("pushButton_2_3"));
        sizePolicy.setHeightForWidth(pushButton_2_3->sizePolicy().hasHeightForWidth());
        pushButton_2_3->setSizePolicy(sizePolicy);
        pushButton_2_3->setMinimumSize(QSize(60, 60));
        pushButton_2_3->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_2_3, 1, 2, 1, 1);

        pushButton_3_2 = new QPushButton(tab_2);
        pushButton_3_2->setObjectName(QString::fromUtf8("pushButton_3_2"));
        sizePolicy.setHeightForWidth(pushButton_3_2->sizePolicy().hasHeightForWidth());
        pushButton_3_2->setSizePolicy(sizePolicy);
        pushButton_3_2->setMinimumSize(QSize(60, 60));
        pushButton_3_2->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_3_2, 2, 1, 1, 1);

        pushButton_3_3 = new QPushButton(tab_2);
        pushButton_3_3->setObjectName(QString::fromUtf8("pushButton_3_3"));
        sizePolicy.setHeightForWidth(pushButton_3_3->sizePolicy().hasHeightForWidth());
        pushButton_3_3->setSizePolicy(sizePolicy);
        pushButton_3_3->setMinimumSize(QSize(60, 60));
        pushButton_3_3->setMaximumSize(QSize(60, 60));

        gridLayout->addWidget(pushButton_3_3, 2, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(17);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_InGame_Player1Name = new QLabel(tab_2);
        label_InGame_Player1Name->setObjectName(QString::fromUtf8("label_InGame_Player1Name"));

        horizontalLayout_3->addWidget(label_InGame_Player1Name);

        label_InGame_VS = new QLabel(tab_2);
        label_InGame_VS->setObjectName(QString::fromUtf8("label_InGame_VS"));
        label_InGame_VS->setLayoutDirection(Qt::LeftToRight);
        label_InGame_VS->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_InGame_VS);

        label_InGame_Player2Name = new QLabel(tab_2);
        label_InGame_Player2Name->setObjectName(QString::fromUtf8("label_InGame_Player2Name"));
        label_InGame_Player2Name->setLayoutDirection(Qt::LeftToRight);
        label_InGame_Player2Name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_InGame_Player2Name);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout_2->addLayout(verticalLayout_2, 1, 1, 1, 1);

        pushButton_resetGame = new QPushButton(tab_2);
        pushButton_resetGame->setObjectName(QString::fromUtf8("pushButton_resetGame"));

        gridLayout_2->addWidget(pushButton_resetGame, 2, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_4->addWidget(tabWidget);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 728, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_IP->setText(QApplication::translate("MainWindow", "Your IP:", nullptr));
        labe_Port->setText(QApplication::translate("MainWindow", "Your Port:", nullptr));
        label_Enter_Your_Nickname->setText(QApplication::translate("MainWindow", "Enter your Nickname:", nullptr));
        label_ChooseSymbol->setText(QApplication::translate("MainWindow", "Choose your symbol:", nullptr));
        radioButton_X->setText(QApplication::translate("MainWindow", "X", nullptr));
        radioButton_O->setText(QApplication::translate("MainWindow", "O", nullptr));
        label->setText(QApplication::translate("MainWindow", "Enter ID to connect:", nullptr));
        pushButton_Create_Lobby->setText(QApplication::translate("MainWindow", "Connect", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Menu", nullptr));
        pushButton_1_2->setText(QString());
        pushButton_1_1->setText(QString());
        pushButton_3_1->setText(QString());
        pushButton_2_1->setText(QString());
        pushButton_1_3->setText(QString());
        pushButton_2_2->setText(QString());
        pushButton_2_3->setText(QString());
        pushButton_3_2->setText(QString());
        pushButton_3_3->setText(QString());
        label_InGame_Player1Name->setText(QApplication::translate("MainWindow", "Player1Name", nullptr));
        label_InGame_VS->setText(QApplication::translate("MainWindow", "VS", nullptr));
        label_InGame_Player2Name->setText(QApplication::translate("MainWindow", "Player2Name", nullptr));
        pushButton_resetGame->setText(QApplication::translate("MainWindow", "Reset Game", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
