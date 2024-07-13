/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "animationstackedwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widgetBody;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidgetMain;
    QWidget *LoginWidget;
    QWidget *widgetUser;
    QPushButton *btnExit;
    QPushButton *btnLogin;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditUser;
    QLineEdit *lineEditPasswd;
    QWidget *MainWidget;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widgetNav;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnUserInfoPage;
    QPushButton *btnScorePage;
    QPushButton *btnScoreInsertPage;
    QPushButton *btnUsersPage;
    QPushButton *btnPasswordPage;
    QPushButton *btnDataBackup;
    QSpacerItem *verticalSpacer;
    QPushButton *btnQuit;
    QWidget *widgetRight;
    QVBoxLayout *verticalLayout_8;
    AnimationStackedWidget *stackedWidgetFunc;
    QWidget *page;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QTextBrowser *textBrowser;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_9;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_6;
    QWidget *widget_2;
    QTableView *tableViewUsers;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEditAddPasswd;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_10;
    QLabel *label_13;
    QLineEdit *lineEditUserEmail;
    QLabel *labelUserHead;
    QLineEdit *lineEditUserPhone;
    QLabel *label_11;
    QLineEdit *lineEditUserGroup;
    QLineEdit *lineEditAddUser;
    QLabel *label_18;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_2;
    QPushButton *btnUserInsert;
    QPushButton *btnUserRefresh;
    QPushButton *btnUserEdit;
    QPushButton *btnUserDelete;
    QWidget *page_5;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_3;
    QLabel *label_15;
    QLineEdit *lineEditOldPasswd;
    QLabel *label_16;
    QLineEdit *lineEditNewPasswd;
    QLabel *label_17;
    QLineEdit *lineEditNewPasswd2;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnPasswdChange;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_6;
    QLineEdit *lineEditBackup;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnBackup;
    QPushButton *btnDataUdo;
    QSpacerItem *verticalSpacer_2;
    QWidget *widgetStatus;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget;
    QLabel *labelHostAddr;
    QLabel *labelSystemTime;
    QWidget *widgetWinTitle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelWinIcon;
    QLabel *labelWinTitle;
    QPushButton *btnWinMin;
    QPushButton *btnWinClose;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(985, 662);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widgetBody = new QWidget(centralwidget);
        widgetBody->setObjectName("widgetBody");
        widgetBody->setGeometry(QRect(10, 40, 952, 571));
        horizontalLayout = new QHBoxLayout(widgetBody);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidgetMain = new QStackedWidget(widgetBody);
        stackedWidgetMain->setObjectName("stackedWidgetMain");
        LoginWidget = new QWidget();
        LoginWidget->setObjectName("LoginWidget");
        widgetUser = new QWidget(LoginWidget);
        widgetUser->setObjectName("widgetUser");
        widgetUser->setGeometry(QRect(600, 160, 282, 147));
        widgetUser->setMinimumSize(QSize(282, 147));
        widgetUser->setMaximumSize(QSize(282, 147));
        btnExit = new QPushButton(widgetUser);
        btnExit->setObjectName("btnExit");
        btnExit->setGeometry(QRect(36, 109, 75, 23));
        btnExit->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resource/images/ic_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnExit->setIcon(icon);
        btnLogin = new QPushButton(widgetUser);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(173, 110, 75, 23));
        btnLogin->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/resource/images/ic_ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLogin->setIcon(icon1);
        label = new QLabel(widgetUser);
        label->setObjectName("label");
        label->setGeometry(QRect(33, 22, 36, 16));
        label_2 = new QLabel(widgetUser);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(33, 66, 36, 16));
        lineEditUser = new QLineEdit(widgetUser);
        lineEditUser->setObjectName("lineEditUser");
        lineEditUser->setGeometry(QRect(78, 22, 171, 20));
        lineEditPasswd = new QLineEdit(widgetUser);
        lineEditPasswd->setObjectName("lineEditPasswd");
        lineEditPasswd->setGeometry(QRect(78, 66, 171, 20));
        lineEditPasswd->setEchoMode(QLineEdit::Password);
        stackedWidgetMain->addWidget(LoginWidget);
        MainWidget = new QWidget();
        MainWidget->setObjectName("MainWidget");
        horizontalLayout_3 = new QHBoxLayout(MainWidget);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(10, 0, 2, 2);
        widgetNav = new QWidget(MainWidget);
        widgetNav->setObjectName("widgetNav");
        verticalLayout_3 = new QVBoxLayout(widgetNav);
        verticalLayout_3->setObjectName("verticalLayout_3");
        btnUserInfoPage = new QPushButton(widgetNav);
        btnUserInfoPage->setObjectName("btnUserInfoPage");
        btnUserInfoPage->setFocusPolicy(Qt::NoFocus);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/resource/images/ic_find.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUserInfoPage->setIcon(icon2);
        btnUserInfoPage->setIconSize(QSize(24, 24));
        btnUserInfoPage->setCheckable(true);
        btnUserInfoPage->setChecked(true);

        verticalLayout_3->addWidget(btnUserInfoPage);

        btnScorePage = new QPushButton(widgetNav);
        btnScorePage->setObjectName("btnScorePage");
        btnScorePage->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/resource/images/ic_goods.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnScorePage->setIcon(icon3);
        btnScorePage->setIconSize(QSize(24, 24));
        btnScorePage->setCheckable(true);

        verticalLayout_3->addWidget(btnScorePage);

        btnScoreInsertPage = new QPushButton(widgetNav);
        btnScoreInsertPage->setObjectName("btnScoreInsertPage");
        btnScoreInsertPage->setFocusPolicy(Qt::NoFocus);
        btnScoreInsertPage->setIcon(icon3);
        btnScoreInsertPage->setIconSize(QSize(24, 24));
        btnScoreInsertPage->setCheckable(true);

        verticalLayout_3->addWidget(btnScoreInsertPage);

        btnUsersPage = new QPushButton(widgetNav);
        btnUsersPage->setObjectName("btnUsersPage");
        btnUsersPage->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/resource/images/if_users.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUsersPage->setIcon(icon4);
        btnUsersPage->setIconSize(QSize(24, 24));
        btnUsersPage->setCheckable(true);

        verticalLayout_3->addWidget(btnUsersPage);

        btnPasswordPage = new QPushButton(widgetNav);
        btnPasswordPage->setObjectName("btnPasswordPage");
        btnPasswordPage->setFocusPolicy(Qt::NoFocus);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/resource/images/ic_key.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPasswordPage->setIcon(icon5);
        btnPasswordPage->setIconSize(QSize(24, 24));
        btnPasswordPage->setCheckable(true);

        verticalLayout_3->addWidget(btnPasswordPage);

        btnDataBackup = new QPushButton(widgetNav);
        btnDataBackup->setObjectName("btnDataBackup");
        btnDataBackup->setFocusPolicy(Qt::NoFocus);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/resource/images/ic_backup.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDataBackup->setIcon(icon6);
        btnDataBackup->setIconSize(QSize(24, 24));
        btnDataBackup->setCheckable(true);

        verticalLayout_3->addWidget(btnDataBackup);

        verticalSpacer = new QSpacerItem(20, 330, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        btnQuit = new QPushButton(widgetNav);
        btnQuit->setObjectName("btnQuit");
        btnQuit->setFocusPolicy(Qt::NoFocus);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/resource/images/ic_exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQuit->setIcon(icon7);
        btnQuit->setIconSize(QSize(24, 24));

        verticalLayout_3->addWidget(btnQuit);


        horizontalLayout_3->addWidget(widgetNav);

        widgetRight = new QWidget(MainWidget);
        widgetRight->setObjectName("widgetRight");
        verticalLayout_8 = new QVBoxLayout(widgetRight);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        stackedWidgetFunc = new AnimationStackedWidget(widgetRight);
        stackedWidgetFunc->setObjectName("stackedWidgetFunc");
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_11 = new QVBoxLayout(page);
        verticalLayout_11->setObjectName("verticalLayout_11");
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName("verticalLayout_4");

        verticalLayout_11->addWidget(groupBox_2, 0, Qt::AlignLeft|Qt::AlignTop);

        stackedWidgetFunc->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setSpacing(10);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(10, 10, 10, 10);
        textBrowser = new QTextBrowser(page_2);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_5->addWidget(textBrowser);

        stackedWidgetFunc->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        verticalLayout_9 = new QVBoxLayout(page_3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        stackedWidgetFunc->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        horizontalLayout_6 = new QHBoxLayout(page_4);
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(10, 10, 10, 0);
        widget_2 = new QWidget(page_4);
        widget_2->setObjectName("widget_2");

        horizontalLayout_6->addWidget(widget_2);

        tableViewUsers = new QTableView(page_4);
        tableViewUsers->setObjectName("tableViewUsers");

        horizontalLayout_6->addWidget(tableViewUsers);

        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout_7 = new QVBoxLayout(groupBox_5);
        verticalLayout_7->setObjectName("verticalLayout_7");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        lineEditAddPasswd = new QLineEdit(groupBox_5);
        lineEditAddPasswd->setObjectName("lineEditAddPasswd");

        gridLayout_3->addWidget(lineEditAddPasswd, 1, 1, 1, 2);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 1, 0, 1, 1);

        label_14 = new QLabel(groupBox_5);
        label_14->setObjectName("label_14");

        gridLayout_3->addWidget(label_14, 3, 0, 1, 1);

        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(label_10, 5, 0, 1, 2);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName("label_13");

        gridLayout_3->addWidget(label_13, 2, 0, 1, 1);

        lineEditUserEmail = new QLineEdit(groupBox_5);
        lineEditUserEmail->setObjectName("lineEditUserEmail");

        gridLayout_3->addWidget(lineEditUserEmail, 4, 1, 1, 2);

        labelUserHead = new QLabel(groupBox_5);
        labelUserHead->setObjectName("labelUserHead");
        labelUserHead->setMinimumSize(QSize(66, 66));
        labelUserHead->setMaximumSize(QSize(66, 66));
        labelUserHead->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	border: 1px solid #C9C9C9;\n"
"	border-radius: 2px;\n"
"}"));
        labelUserHead->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/if_users.png")));
        labelUserHead->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(labelUserHead, 5, 2, 1, 1);

        lineEditUserPhone = new QLineEdit(groupBox_5);
        lineEditUserPhone->setObjectName("lineEditUserPhone");

        gridLayout_3->addWidget(lineEditUserPhone, 3, 1, 1, 2);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName("label_11");

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        lineEditUserGroup = new QLineEdit(groupBox_5);
        lineEditUserGroup->setObjectName("lineEditUserGroup");

        gridLayout_3->addWidget(lineEditUserGroup, 2, 1, 1, 2);

        lineEditAddUser = new QLineEdit(groupBox_5);
        lineEditAddUser->setObjectName("lineEditAddUser");

        gridLayout_3->addWidget(lineEditAddUser, 0, 1, 1, 2);

        label_18 = new QLabel(groupBox_5);
        label_18->setObjectName("label_18");

        gridLayout_3->addWidget(label_18, 4, 0, 1, 1);


        verticalLayout_7->addLayout(gridLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 223, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        btnUserInsert = new QPushButton(groupBox_5);
        btnUserInsert->setObjectName("btnUserInsert");
        btnUserInsert->setFocusPolicy(Qt::NoFocus);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/resource/images/ic_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUserInsert->setIcon(icon8);

        gridLayout_2->addWidget(btnUserInsert, 0, 0, 1, 1);

        btnUserRefresh = new QPushButton(groupBox_5);
        btnUserRefresh->setObjectName("btnUserRefresh");
        btnUserRefresh->setFocusPolicy(Qt::NoFocus);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/resource/images/ic_refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUserRefresh->setIcon(icon9);

        gridLayout_2->addWidget(btnUserRefresh, 0, 1, 1, 1);

        btnUserEdit = new QPushButton(groupBox_5);
        btnUserEdit->setObjectName("btnUserEdit");
        btnUserEdit->setFocusPolicy(Qt::NoFocus);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/resource/images/ic_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUserEdit->setIcon(icon10);

        gridLayout_2->addWidget(btnUserEdit, 1, 0, 1, 1);

        btnUserDelete = new QPushButton(groupBox_5);
        btnUserDelete->setObjectName("btnUserDelete");
        btnUserDelete->setFocusPolicy(Qt::NoFocus);
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/resource/images/ic_delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUserDelete->setIcon(icon11);

        gridLayout_2->addWidget(btnUserDelete, 1, 1, 1, 1);


        verticalLayout_7->addLayout(gridLayout_2);


        horizontalLayout_6->addWidget(groupBox_5);

        horizontalLayout_6->setStretch(1, 1);
        stackedWidgetFunc->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        groupBox_6 = new QGroupBox(page_5);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(180, 170, 351, 251));
        verticalLayout_2 = new QVBoxLayout(groupBox_6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName("formLayout_3");
        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName("label_15");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_15);

        lineEditOldPasswd = new QLineEdit(groupBox_6);
        lineEditOldPasswd->setObjectName("lineEditOldPasswd");
        lineEditOldPasswd->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEditOldPasswd);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName("label_16");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_16);

        lineEditNewPasswd = new QLineEdit(groupBox_6);
        lineEditNewPasswd->setObjectName("lineEditNewPasswd");
        lineEditNewPasswd->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEditNewPasswd);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName("label_17");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_17);

        lineEditNewPasswd2 = new QLineEdit(groupBox_6);
        lineEditNewPasswd2->setObjectName("lineEditNewPasswd2");
        lineEditNewPasswd2->setEchoMode(QLineEdit::Password);

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEditNewPasswd2);


        verticalLayout_2->addLayout(formLayout_3);

        verticalSpacer_5 = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalSpacer_4 = new QSpacerItem(37, 17, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        btnPasswdChange = new QPushButton(groupBox_6);
        btnPasswdChange->setObjectName("btnPasswdChange");
        btnPasswdChange->setMinimumSize(QSize(150, 30));
        btnPasswdChange->setFocusPolicy(Qt::NoFocus);
        btnPasswdChange->setIcon(icon1);

        horizontalLayout_8->addWidget(btnPasswdChange);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_4 = new QSpacerItem(20, 45, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        stackedWidgetFunc->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        verticalLayout_6 = new QVBoxLayout(page_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        groupBox = new QGroupBox(page_6);
        groupBox->setObjectName("groupBox");
        verticalLayout_10 = new QVBoxLayout(groupBox);
        verticalLayout_10->setObjectName("verticalLayout_10");
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout_14->addWidget(label_6);

        lineEditBackup = new QLineEdit(groupBox);
        lineEditBackup->setObjectName("lineEditBackup");
        lineEditBackup->setMinimumSize(QSize(350, 0));
        lineEditBackup->setReadOnly(true);

        horizontalLayout_14->addWidget(lineEditBackup);

        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName("toolButton");

        horizontalLayout_14->addWidget(toolButton);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_5);

        btnBackup = new QPushButton(groupBox);
        btnBackup->setObjectName("btnBackup");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/resource/images/ic_data_backup.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnBackup->setIcon(icon12);
        btnBackup->setIconSize(QSize(24, 24));

        horizontalLayout_14->addWidget(btnBackup);

        btnDataUdo = new QPushButton(groupBox);
        btnDataUdo->setObjectName("btnDataUdo");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/resource/images/ic_data_udo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDataUdo->setIcon(icon13);
        btnDataUdo->setIconSize(QSize(24, 24));

        horizontalLayout_14->addWidget(btnDataUdo);


        verticalLayout_10->addLayout(horizontalLayout_14);

        verticalSpacer_2 = new QSpacerItem(20, 490, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);


        verticalLayout_6->addWidget(groupBox);

        stackedWidgetFunc->addWidget(page_6);

        verticalLayout_8->addWidget(stackedWidgetFunc);

        widgetStatus = new QWidget(widgetRight);
        widgetStatus->setObjectName("widgetStatus");
        widgetStatus->setMinimumSize(QSize(0, 35));
        horizontalLayout_5 = new QHBoxLayout(widgetStatus);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        widget = new QWidget(widgetStatus);
        widget->setObjectName("widget");

        horizontalLayout_5->addWidget(widget);

        labelHostAddr = new QLabel(widgetStatus);
        labelHostAddr->setObjectName("labelHostAddr");

        horizontalLayout_5->addWidget(labelHostAddr);

        labelSystemTime = new QLabel(widgetStatus);
        labelSystemTime->setObjectName("labelSystemTime");
        labelSystemTime->setMinimumSize(QSize(200, 0));
        labelSystemTime->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(labelSystemTime);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_8->addWidget(widgetStatus);


        horizontalLayout_3->addWidget(widgetRight);

        stackedWidgetMain->addWidget(MainWidget);

        horizontalLayout->addWidget(stackedWidgetMain);

        widgetWinTitle = new QWidget(centralwidget);
        widgetWinTitle->setObjectName("widgetWinTitle");
        widgetWinTitle->setGeometry(QRect(10, 0, 952, 40));
        widgetWinTitle->setMinimumSize(QSize(0, 40));
        widgetWinTitle->setMaximumSize(QSize(16777215, 40));
        horizontalLayout_2 = new QHBoxLayout(widgetWinTitle);
        horizontalLayout_2->setSpacing(5);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(10, 0, 0, 0);
        labelWinIcon = new QLabel(widgetWinTitle);
        labelWinIcon->setObjectName("labelWinIcon");
        labelWinIcon->setMinimumSize(QSize(30, 30));
        labelWinIcon->setMaximumSize(QSize(50, 50));
        labelWinIcon->setPixmap(QPixmap(QString::fromUtf8(":/resource/images/ic_app.png")));

        horizontalLayout_2->addWidget(labelWinIcon);

        labelWinTitle = new QLabel(widgetWinTitle);
        labelWinTitle->setObjectName("labelWinTitle");
        labelWinTitle->setStyleSheet(QString::fromUtf8("color: #FFFFFF;"));

        horizontalLayout_2->addWidget(labelWinTitle);

        btnWinMin = new QPushButton(widgetWinTitle);
        btnWinMin->setObjectName("btnWinMin");
        btnWinMin->setFocusPolicy(Qt::NoFocus);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/resource/common/ic_min.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinMin->setIcon(icon14);

        horizontalLayout_2->addWidget(btnWinMin, 0, Qt::AlignTop);

        btnWinClose = new QPushButton(widgetWinTitle);
        btnWinClose->setObjectName("btnWinClose");
        btnWinClose->setFocusPolicy(Qt::NoFocus);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/resource/common/ic_close_white.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnWinClose->setIcon(icon15);

        horizontalLayout_2->addWidget(btnWinClose, 0, Qt::AlignTop);

        horizontalLayout_2->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 985, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidgetMain->setCurrentIndex(1);
        stackedWidgetFunc->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\345\220\215\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        lineEditUser->setText(QCoreApplication::translate("MainWindow", "admin", nullptr));
        lineEditPasswd->setText(QCoreApplication::translate("MainWindow", "123456", nullptr));
        btnUserInfoPage->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\346\237\245\350\257\242", nullptr));
        btnScorePage->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        btnScoreInsertPage->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\351\205\215\347\275\256", nullptr));
        btnUsersPage->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        btnPasswordPage->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\344\277\256\346\224\271", nullptr));
        btnDataBackup->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\244\207\344\273\275", nullptr));
        btnQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\347\263\273\347\273\237", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
        lineEditAddPasswd->setPlaceholderText(QCoreApplication::translate("MainWindow", "\351\273\230\350\256\2441~6", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\257\206\347\240\201\357\274\232", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "\350\201\224\347\263\273\347\224\265\350\257\235\357\274\232", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\244\264\345\203\217\357\274\232", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\347\273\204\357\274\232", nullptr));
        lineEditUserEmail->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\351\202\256\347\256\261", nullptr));
        labelUserHead->setText(QString());
        lineEditUserPhone->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\201\224\347\263\273\347\224\265\350\257\235", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\247\223\345\220\215\357\274\232", nullptr));
        lineEditUserGroup->setPlaceholderText(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\347\273\204", nullptr));
        lineEditAddUser->setPlaceholderText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\247\223\345\220\215", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "\345\267\245\344\275\234\351\202\256\347\256\261\357\274\232", nullptr));
        btnUserInsert->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        btnUserRefresh->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260", nullptr));
        btnUserEdit->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btnUserDelete->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\227\247\345\257\206\347\240\201\357\274\232", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        btnPasswdChange->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        groupBox->setTitle(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\244\207\344\273\275\347\233\256\345\275\225\357\274\232", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        btnBackup->setText(QCoreApplication::translate("MainWindow", "\345\244\207\344\273\275", nullptr));
        btnDataUdo->setText(QCoreApplication::translate("MainWindow", "\350\277\230\345\216\237", nullptr));
        labelHostAddr->setText(QCoreApplication::translate("MainWindow", "\346\234\254\346\234\272IP\357\274\232192.168.1.1", nullptr));
        labelSystemTime->setText(QString());
        labelWinIcon->setText(QString());
        labelWinTitle->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btnWinMin->setText(QString());
        btnWinClose->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
