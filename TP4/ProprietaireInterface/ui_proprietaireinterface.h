/********************************************************************************
** Form generated from reading UI file 'proprietaireinterface.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPRIETAIREINTERFACE_H
#define UI_PROPRIETAIREINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProprietaireInterfaceClass
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProprietaireInterfaceClass)
    {
        if (ProprietaireInterfaceClass->objectName().isEmpty())
            ProprietaireInterfaceClass->setObjectName(QString::fromUtf8("ProprietaireInterfaceClass"));
        ProprietaireInterfaceClass->resize(800, 600);
        centralwidget = new QWidget(ProprietaireInterfaceClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        ProprietaireInterfaceClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProprietaireInterfaceClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        ProprietaireInterfaceClass->setMenuBar(menubar);
        statusbar = new QStatusBar(ProprietaireInterfaceClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ProprietaireInterfaceClass->setStatusBar(statusbar);

        retranslateUi(ProprietaireInterfaceClass);

        QMetaObject::connectSlotsByName(ProprietaireInterfaceClass);
    } // setupUi

    void retranslateUi(QMainWindow *ProprietaireInterfaceClass)
    {
        ProprietaireInterfaceClass->setWindowTitle(QApplication::translate("ProprietaireInterfaceClass", "MainWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProprietaireInterfaceClass: public Ui_ProprietaireInterfaceClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPRIETAIREINTERFACE_H
