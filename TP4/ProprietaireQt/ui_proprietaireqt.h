/********************************************************************************
** Form generated from reading UI file 'proprietaireqt.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPRIETAIREQT_H
#define UI_PROPRIETAIREQT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProprietaireQtClass
{
public:
    QAction *actionV_hicule_de_promenade;
    QAction *actionCamion;
    QAction *actionV_hicule_promenade;
    QAction *actionCamion_2;
    QAction *actionSupprimer;
    QWidget *centralwidget;
    QPushButton *pushButton_afficherVehicule;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuAjouter_Vehicule;
    QMenu *menuSupprimer_un_v_hicule;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProprietaireQtClass)
    {
        if (ProprietaireQtClass->objectName().isEmpty())
            ProprietaireQtClass->setObjectName(QString::fromUtf8("ProprietaireQtClass"));
        ProprietaireQtClass->resize(687, 394);
        actionV_hicule_de_promenade = new QAction(ProprietaireQtClass);
        actionV_hicule_de_promenade->setObjectName(QString::fromUtf8("actionV_hicule_de_promenade"));
        actionCamion = new QAction(ProprietaireQtClass);
        actionCamion->setObjectName(QString::fromUtf8("actionCamion"));
        actionV_hicule_promenade = new QAction(ProprietaireQtClass);
        actionV_hicule_promenade->setObjectName(QString::fromUtf8("actionV_hicule_promenade"));
        actionCamion_2 = new QAction(ProprietaireQtClass);
        actionCamion_2->setObjectName(QString::fromUtf8("actionCamion_2"));
        actionSupprimer = new QAction(ProprietaireQtClass);
        actionSupprimer->setObjectName(QString::fromUtf8("actionSupprimer"));
        centralwidget = new QWidget(ProprietaireQtClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton_afficherVehicule = new QPushButton(centralwidget);
        pushButton_afficherVehicule->setObjectName(QString::fromUtf8("pushButton_afficherVehicule"));
        pushButton_afficherVehicule->setGeometry(QRect(270, 10, 141, 28));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(140, 50, 411, 291));
        ProprietaireQtClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProprietaireQtClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 687, 25));
        menuAjouter_Vehicule = new QMenu(menubar);
        menuAjouter_Vehicule->setObjectName(QString::fromUtf8("menuAjouter_Vehicule"));
        menuSupprimer_un_v_hicule = new QMenu(menubar);
        menuSupprimer_un_v_hicule->setObjectName(QString::fromUtf8("menuSupprimer_un_v_hicule"));
        ProprietaireQtClass->setMenuBar(menubar);
        statusbar = new QStatusBar(ProprietaireQtClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ProprietaireQtClass->setStatusBar(statusbar);

        menubar->addAction(menuAjouter_Vehicule->menuAction());
        menubar->addAction(menuSupprimer_un_v_hicule->menuAction());
        menuAjouter_Vehicule->addAction(actionV_hicule_promenade);
        menuAjouter_Vehicule->addAction(actionCamion_2);
        menuSupprimer_un_v_hicule->addAction(actionSupprimer);

        retranslateUi(ProprietaireQtClass);

        QMetaObject::connectSlotsByName(ProprietaireQtClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProprietaireQtClass)
    {
        ProprietaireQtClass->setWindowTitle(QApplication::translate("ProprietaireQtClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionV_hicule_de_promenade->setText(QApplication::translate("ProprietaireQtClass", "V\303\251hicule de promenade", 0, QApplication::UnicodeUTF8));
        actionCamion->setText(QApplication::translate("ProprietaireQtClass", "Camion", 0, QApplication::UnicodeUTF8));
        actionV_hicule_promenade->setText(QApplication::translate("ProprietaireQtClass", "V\303\251hicule promenade", 0, QApplication::UnicodeUTF8));
        actionCamion_2->setText(QApplication::translate("ProprietaireQtClass", "Camion", 0, QApplication::UnicodeUTF8));
        actionSupprimer->setText(QApplication::translate("ProprietaireQtClass", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButton_afficherVehicule->setText(QApplication::translate("ProprietaireQtClass", "Afficher les v\303\251hicules", 0, QApplication::UnicodeUTF8));
        menuAjouter_Vehicule->setTitle(QApplication::translate("ProprietaireQtClass", "Ajouter un v\303\251hicule", 0, QApplication::UnicodeUTF8));
        menuSupprimer_un_v_hicule->setTitle(QApplication::translate("ProprietaireQtClass", "Supprimer un v\303\251hicule", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProprietaireQtClass: public Ui_ProprietaireQtClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPRIETAIREQT_H
