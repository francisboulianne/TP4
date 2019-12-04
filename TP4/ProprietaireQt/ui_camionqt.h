/********************************************************************************
** Form generated from reading UI file 'camionqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMIONQT_H
#define UI_CAMIONQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CamionQtClass
{
public:
    QLineEdit *lineEdit_immatriculation;
    QPushButton *pushButtonAJouter;
    QLineEdit *lineEdit_niv;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QSpinBox *spinBox_essieux;
    QLineEdit *lineEdit_poids;

    void setupUi(QDialog *CamionQtClass)
    {
        if (CamionQtClass->objectName().isEmpty())
            CamionQtClass->setObjectName(QString::fromUtf8("CamionQtClass"));
        CamionQtClass->resize(400, 300);
        lineEdit_immatriculation = new QLineEdit(CamionQtClass);
        lineEdit_immatriculation->setObjectName(QString::fromUtf8("lineEdit_immatriculation"));
        lineEdit_immatriculation->setGeometry(QRect(220, 100, 151, 21));
        pushButtonAJouter = new QPushButton(CamionQtClass);
        pushButtonAJouter->setObjectName(QString::fromUtf8("pushButtonAJouter"));
        pushButtonAJouter->setGeometry(QRect(150, 240, 121, 28));
        lineEdit_niv = new QLineEdit(CamionQtClass);
        lineEdit_niv->setObjectName(QString::fromUtf8("lineEdit_niv"));
        lineEdit_niv->setGeometry(QRect(220, 50, 151, 21));
        label = new QLabel(CamionQtClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 10, 281, 20));
        label_2 = new QLabel(CamionQtClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 50, 111, 17));
        label_5 = new QLabel(CamionQtClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 100, 171, 17));
        label_6 = new QLabel(CamionQtClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 150, 121, 17));
        label_7 = new QLabel(CamionQtClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 200, 121, 17));
        spinBox_essieux = new QSpinBox(CamionQtClass);
        spinBox_essieux->setObjectName(QString::fromUtf8("spinBox_essieux"));
        spinBox_essieux->setGeometry(QRect(220, 200, 151, 21));
        lineEdit_poids = new QLineEdit(CamionQtClass);
        lineEdit_poids->setObjectName(QString::fromUtf8("lineEdit_poids"));
        lineEdit_poids->setGeometry(QRect(220, 150, 151, 21));

        retranslateUi(CamionQtClass);

        QMetaObject::connectSlotsByName(CamionQtClass);
    } // setupUi

    void retranslateUi(QDialog *CamionQtClass)
    {
        CamionQtClass->setWindowTitle(QApplication::translate("CamionQtClass", "CamionQt", 0, QApplication::UnicodeUTF8));
        pushButtonAJouter->setText(QApplication::translate("CamionQtClass", "Ajouter le camion", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CamionQtClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Saisissez les informations sur le camion</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CamionQtClass", "Num\303\251ro de s\303\251rie :", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CamionQtClass", "Num\303\251ro d'immatriculation :", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("CamionQtClass", "Poids :", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("CamionQtClass", "Nombre d\342\200\231essieux :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox_essieux->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBox_essieux->setWhatsThis(QApplication::translate("CamionQtClass", "333", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class CamionQtClass: public Ui_CamionQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMIONQT_H
