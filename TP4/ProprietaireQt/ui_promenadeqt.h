/********************************************************************************
** Form generated from reading UI file 'promenadeqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMENADEQT_H
#define UI_PROMENADEQT_H

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

class Ui_promenadeqtClass
{
public:
    QPushButton *pushButtonAJouter;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_niv;
    QLineEdit *lineEdit_immatriculation;
    QSpinBox *spinBox_places;

    void setupUi(QDialog *promenadeqtClass)
    {
        if (promenadeqtClass->objectName().isEmpty())
            promenadeqtClass->setObjectName(QString::fromUtf8("promenadeqtClass"));
        promenadeqtClass->resize(400, 300);
        pushButtonAJouter = new QPushButton(promenadeqtClass);
        pushButtonAJouter->setObjectName(QString::fromUtf8("pushButtonAJouter"));
        pushButtonAJouter->setGeometry(QRect(140, 250, 121, 28));
        label = new QLabel(promenadeqtClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 20, 281, 20));
        label_2 = new QLabel(promenadeqtClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 111, 17));
        label_3 = new QLabel(promenadeqtClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 130, 171, 17));
        label_4 = new QLabel(promenadeqtClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 180, 121, 17));
        lineEdit_niv = new QLineEdit(promenadeqtClass);
        lineEdit_niv->setObjectName(QString::fromUtf8("lineEdit_niv"));
        lineEdit_niv->setGeometry(QRect(210, 80, 151, 21));
        lineEdit_immatriculation = new QLineEdit(promenadeqtClass);
        lineEdit_immatriculation->setObjectName(QString::fromUtf8("lineEdit_immatriculation"));
        lineEdit_immatriculation->setGeometry(QRect(210, 130, 151, 21));
        spinBox_places = new QSpinBox(promenadeqtClass);
        spinBox_places->setObjectName(QString::fromUtf8("spinBox_places"));
        spinBox_places->setGeometry(QRect(210, 180, 151, 21));

        retranslateUi(promenadeqtClass);

        QMetaObject::connectSlotsByName(promenadeqtClass);
    } // setupUi

    void retranslateUi(QDialog *promenadeqtClass)
    {
        promenadeqtClass->setWindowTitle(QApplication::translate("promenadeqtClass", "promenadeqt", 0, QApplication::UnicodeUTF8));
        pushButtonAJouter->setText(QApplication::translate("promenadeqtClass", "Ajouter le v\303\251hicule", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("promenadeqtClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt; font-weight:600;\">Saisissez les informations sur le v\303\251hicule</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("promenadeqtClass", "Num\303\251ro de s\303\251rie :", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("promenadeqtClass", "Num\303\251ro d'immatriculation :", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("promenadeqtClass", "Nombre de places :", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spinBox_places->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        spinBox_places->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
    } // retranslateUi

};

namespace Ui {
    class promenadeqtClass: public Ui_promenadeqtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMENADEQT_H
