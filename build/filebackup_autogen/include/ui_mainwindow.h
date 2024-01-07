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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_image;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *name1;
    QLineEdit *password1;
    QLabel *login_title;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *register_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *login;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(827, 520);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_image = new QLabel(centralwidget);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(390, 0, 441, 521));
        label_image->setFrameShape(QFrame::NoFrame);
        label_image->setFrameShadow(QFrame::Plain);
        label_image->setLineWidth(1);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 200, 281, 101));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        name1 = new QLineEdit(layoutWidget);
        name1->setObjectName(QString::fromUtf8("name1"));
        name1->setMaximumSize(QSize(15555555, 40));
        name1->setSizeIncrement(QSize(0, 40));
        name1->setBaseSize(QSize(0, 40));
        name1->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));

        verticalLayout_2->addWidget(name1);

        password1 = new QLineEdit(layoutWidget);
        password1->setObjectName(QString::fromUtf8("password1"));
        password1->setMaximumSize(QSize(16777215, 40));
        password1->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        password1->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password1);

        login_title = new QLabel(centralwidget);
        login_title->setObjectName(QString::fromUtf8("login_title"));
        login_title->setGeometry(QRect(60, 130, 221, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setPointSize(27);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(87);
        login_title->setFont(font);
        login_title->setStyleSheet(QString::fromUtf8("font: 700 27pt \"Ubuntu\";"));
        login_title->setTextFormat(Qt::AutoText);
        login_title->setAlignment(Qt::AlignCenter);
        login_title->setMargin(5);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(60, 320, 281, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        register_2 = new QPushButton(layoutWidget1);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Candara"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        register_2->setFont(font1);
        register_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));

        horizontalLayout->addWidget(register_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        login = new QPushButton(layoutWidget1);
        login->setObjectName(QString::fromUtf8("login"));
        login->setFont(font1);
        login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
" \n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));
        login->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(login);

        MainWindow->setCentralWidget(centralwidget);
#ifndef QT_NO_SHORTCUT
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FILE BACKUP   -   \347\231\273\345\275\225", nullptr));
        label_image->setText(QString());
        name1->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        password1->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        login_title->setText(QApplication::translate("MainWindow", "LOGIN IN ", nullptr));
        register_2->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        login->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206\350\264\246\345\217\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
