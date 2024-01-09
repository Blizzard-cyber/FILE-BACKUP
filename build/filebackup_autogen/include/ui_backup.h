/********************************************************************************
** Form generated from reading UI file 'backup.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKUP_H
#define UI_BACKUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_backup
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *backup1;
    QPushButton *restore;
    QLabel *label_image;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *backup)
    {
        if (backup->objectName().isEmpty())
            backup->setObjectName(QString::fromUtf8("backup"));
        backup->resize(844, 456);
        backup->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(backup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 50, 281, 51));
        label->setStyleSheet(QString::fromUtf8("font: 700 30pt \"Ubuntu\";"));
        label->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(backup);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 230, 281, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        backup1 = new QPushButton(layoutWidget);
        backup1->setObjectName(QString::fromUtf8("backup1"));
        QFont font;
        font.setPointSize(12);
        backup1->setFont(font);
        backup1->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(246, 97, 81);"));

        verticalLayout->addWidget(backup1);

        restore = new QPushButton(layoutWidget);
        restore->setObjectName(QString::fromUtf8("restore"));
        restore->setFont(font);
        restore->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 209, 122);"));

        verticalLayout->addWidget(restore);

        label_image = new QLabel(backup);
        label_image->setObjectName(QString::fromUtf8("label_image"));
        label_image->setGeometry(QRect(430, -20, 421, 481));
        label_2 = new QLabel(backup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 180, 161, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_3 = new QLabel(backup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(110, 110, 161, 31));

        retranslateUi(backup);

        QMetaObject::connectSlotsByName(backup);
    } // setupUi

    void retranslateUi(QWidget *backup)
    {
        backup->setWindowTitle(QApplication::translate("backup", "FILE BACKUP  -   \345\244\207\344\273\275\344\270\216\346\201\242\345\244\215", nullptr));
        label->setText(QApplication::translate("backup", "FILE BACKUP", nullptr));
        backup1->setText(QApplication::translate("backup", "\346\226\207\344\273\266\345\244\207\344\273\275", nullptr));
        restore->setText(QApplication::translate("backup", "\346\226\207\344\273\266\346\201\242\345\244\215", nullptr));
        label_image->setText(QString());
        label_2->setText(QApplication::translate("backup", "\350\257\267\351\200\211\346\213\251\350\246\201\350\277\233\350\241\214\347\232\204\346\223\215\344\275\234\357\274\232", nullptr));
        label_3->setText(QApplication::translate("backup", "\346\254\242\350\277\216\344\275\277\347\224\250FILE BACKUP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class backup: public Ui_backup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKUP_H
