#ifndef PROPRIETAIREINTERFACE_H
#define PROPRIETAIREINTERFACE_H

#include <QtGui/QMainWindow>
#include "ui_proprietaireinterface.h"

class ProprietaireInterface : public QMainWindow
{
    Q_OBJECT

public:
    ProprietaireInterface(QWidget *parent = 0);
    ~ProprietaireInterface();

private:
    Ui::ProprietaireInterfaceClass ui;
};

#endif // PROPRIETAIREINTERFACE_H
