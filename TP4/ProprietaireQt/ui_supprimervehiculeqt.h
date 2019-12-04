/********************************************************************************
** Form generated from reading UI file 'supprimervehiculeqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPRIMERVEHICULEQT_H
#define UI_SUPPRIMERVEHICULEQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SupprimerVehiculeQtClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_niv;
    QPushButton *pushButtonSupprimer;

    void setupUi(QDialog *SupprimerVehiculeQtClass)
    {
        if (SupprimerVehiculeQtClass->objectName().isEmpty())
            SupprimerVehiculeQtClass->setObjectName(QString::fromUtf8("SupprimerVehiculeQtClass"));
        SupprimerVehiculeQtClass->resize(390, 149);
        label = new QLabel(SupprimerVehiculeQtClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 351, 20));
        label_2 = new QLabel(SupprimerVehiculeQtClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 60, 111, 17));
        lineEdit_niv = new QLineEdit(SupprimerVehiculeQtClass);
        lineEdit_niv->setObjectName(QString::fromUtf8("lineEdit_niv"));
        lineEdit_niv->setGeometry(QRect(180, 60, 151, 21));
        pushButtonSupprimer = new QPushButton(SupprimerVehiculeQtClass);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));
        pushButtonSupprimer->setGeometry(QRect(120, 100, 141, 28));

        retranslateUi(SupprimerVehiculeQtClass);

        QMetaObject::connectSlotsByName(SupprimerVehiculeQtClass);
    } // setupUi

    void retranslateUi(QDialog *SupprimerVehiculeQtClass)
    {
        SupprimerVehiculeQtClass->setWindowTitle(QApplication::translate("SupprimerVehiculeQtClass", "SupprimerVehiculeQt", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SupprimerVehiculeQtClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Saisissez le num\303\251ro de s\303\251rie du v\303\251hicule \303\240 supprimer</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("SupprimerVehiculeQtClass", "Num\303\251ro de s\303\251rie :", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimer->setText(QApplication::translate("SupprimerVehiculeQtClass", "Supprimer le v\303\251hicule", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SupprimerVehiculeQtClass: public Ui_SupprimerVehiculeQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPRIMERVEHICULEQT_H
