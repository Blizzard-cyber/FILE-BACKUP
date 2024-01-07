/********************************************************************************
** Form generated from reading UI file 'register1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER1_H
#define UI_REGISTER1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register1
{
public:
    QLabel *confirm_label;
    QLineEdit *confirm_reg;
    QLabel *label_image;
    QLabel *register_2;
    QLabel *psw_label;
    QLineEdit *password_reg;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *button_reg;
    QPushButton *return_button;
    QLabel *name_label;
    QLineEdit *name_reg;

    void setupUi(QWidget *register1)
    {
        if (register1->objectName().isEmpty())
            register1->setObjectName(QString::fromUtf8("register1"));
        register1->resize(822, 520);
        register1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        confirm_label = new QLabel(register1);
        confirm_label->setObjectName(QString::fromUtf8("confirm_label"));
        confirm_label->setGeometry(QRect(470, 280, 60, 22));
        confirm_label->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        confirm_label->setAlignment(Qt::AlignCenter);
        confirm_reg = new QLineEdit(register1);
        confirm_reg->setObjectName(QString::fromUtf8("confirm_reg"));
        confirm_reg->setGeometry(QRect(470, 310, 271, 41));
        confirm_reg->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        confirm_reg->setEchoMode(QLineEdit::Password);
        label_image = new QLabel(register1);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(-10, 20, 461, 451));
        register_2 = new QLabel(register1);
        register_2->setObjectName(QString::fromUtf8("register_2"));
        register_2->setGeometry(QRect(480, 60, 181, 41));
        register_2->setStyleSheet(QString::fromUtf8("font: 700 27pt \"Ubuntu\";"));
        register_2->setAlignment(Qt::AlignCenter);
        psw_label = new QLabel(register1);
        psw_label->setObjectName(QString::fromUtf8("psw_label"));
        psw_label->setGeometry(QRect(470, 200, 30, 22));
        psw_label->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        psw_label->setAlignment(Qt::AlignCenter);
        password_reg = new QLineEdit(register1);
        password_reg->setObjectName(QString::fromUtf8("password_reg"));
        password_reg->setGeometry(QRect(470, 230, 271, 41));
        password_reg->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        password_reg->setEchoMode(QLineEdit::Password);
        layoutWidget = new QWidget(register1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(470, 380, 271, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        button_reg = new QPushButton(layoutWidget);
        button_reg->setObjectName(QString::fromUtf8("button_reg"));
        button_reg->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 123, 255);\n"
"color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(button_reg);

        return_button = new QPushButton(layoutWidget);
        return_button->setObjectName(QString::fromUtf8("return_button"));
        return_button->setStyleSheet(QString::fromUtf8("font: 75 11pt \"Tlwg Typewriter\";\n"
"color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 0, 0, 255), stop:0.166 rgba(255, 255, 0, 255), stop:0.333 rgba(0, 255, 0, 255), stop:0.5 rgba(0, 255, 255, 255), stop:0.666 rgba(0, 0, 255, 255), stop:0.833 rgba(255, 0, 255, 255), stop:1 rgba(255, 0, 0, 255));"));

        verticalLayout->addWidget(return_button);

        name_label = new QLabel(register1);
        name_label->setObjectName(QString::fromUtf8("name_label"));
        name_label->setGeometry(QRect(470, 120, 45, 23));
        name_label->setAcceptDrops(false);
        name_label->setStyleSheet(QString::fromUtf8("font: 10pt \"Arial\";"));
        name_label->setAlignment(Qt::AlignCenter);
        name_reg = new QLineEdit(register1);
        name_reg->setObjectName(QString::fromUtf8("name_reg"));
        name_reg->setGeometry(QRect(470, 150, 271, 41));
        name_reg->setStyleSheet(QString::fromUtf8("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));

        retranslateUi(register1);

        QMetaObject::connectSlotsByName(register1);
    } // setupUi

    void retranslateUi(QWidget *register1)
    {
        register1->setWindowTitle(QApplication::translate("register1", "FILE BACKUP   -   \345\210\233\345\273\272\350\264\246\346\210\267", nullptr));
        confirm_label->setText(QApplication::translate("register1", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        confirm_reg->setPlaceholderText(QApplication::translate("register1", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        label_image->setText(QString());
        register_2->setText(QApplication::translate("register1", "Sign UP", nullptr));
        psw_label->setText(QApplication::translate("register1", "\345\257\206\347\240\201", nullptr));
        password_reg->setPlaceholderText(QApplication::translate("register1", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        button_reg->setText(QApplication::translate("register1", "\346\263\250\345\206\214", nullptr));
        return_button->setText(QApplication::translate("register1", "\350\277\224\345\233\236\347\231\273\345\275\225", nullptr));
        name_label->setText(QApplication::translate("register1", "<html><head/><body><p>\347\224\250\346\210\267\345\220\215</p></body></html>", nullptr));
        name_reg->setPlaceholderText(QApplication::translate("register1", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register1: public Ui_register1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER1_H
