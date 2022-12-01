/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButtonConnect;
    QLineEdit *lineEditCode;
    QPushButton *pushButtonAvoirnomDepartement;
    QPushButton *pushButtonQuitter;
    QLabel *label;
    QLabel *labelDepartement;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(693, 453);
        pushButtonConnect = new QPushButton(Widget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(110, 280, 161, 61));
        QFont font;
        font.setPointSize(15);
        pushButtonConnect->setFont(font);
        lineEditCode = new QLineEdit(Widget);
        lineEditCode->setObjectName(QString::fromUtf8("lineEditCode"));
        lineEditCode->setGeometry(QRect(230, 160, 181, 21));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setItalic(true);
        lineEditCode->setFont(font1);
        lineEditCode->setAlignment(Qt::AlignCenter);
        pushButtonAvoirnomDepartement = new QPushButton(Widget);
        pushButtonAvoirnomDepartement->setObjectName(QString::fromUtf8("pushButtonAvoirnomDepartement"));
        pushButtonAvoirnomDepartement->setGeometry(QRect(430, 160, 191, 31));
        QFont font2;
        font2.setPointSize(10);
        pushButtonAvoirnomDepartement->setFont(font2);
        pushButtonQuitter = new QPushButton(Widget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(350, 280, 161, 61));
        pushButtonQuitter->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 160, 221, 20));
        labelDepartement = new QLabel(Widget);
        labelDepartement->setObjectName(QString::fromUtf8("labelDepartement"));
        labelDepartement->setGeometry(QRect(10, 200, 131, 16));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(50, 50, 131, 23));
        comboBox_2 = new QComboBox(Widget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(230, 50, 131, 23));
        comboBox_3 = new QComboBox(Widget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(420, 50, 131, 23));

        retranslateUi(Widget);
        QObject::connect(pushButtonQuitter, &QPushButton::clicked, Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("Widget", "Connection", nullptr));
        pushButtonAvoirnomDepartement->setText(QCoreApplication::translate("Widget", "Avoir le nom du d\303\251partement", nullptr));
        pushButtonQuitter->setText(QCoreApplication::translate("Widget", "Quitter", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Donnez un num\303\251ro de d\303\251partement", nullptr));
        labelDepartement->setText(QCoreApplication::translate("Widget", "Nom du d\303\251partement", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
