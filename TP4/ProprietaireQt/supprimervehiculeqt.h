#ifndef SUPPRIMERVEHICULEQT_H
#define SUPPRIMERVEHICULEQT_H

#include <QtGui/QDialog>
#include "ui_supprimervehiculeqt.h"

class SupprimerVehiculeQt : public QDialog
{
    Q_OBJECT

public:
    SupprimerVehiculeQt(QWidget *parent = 0);
    ~SupprimerVehiculeQt();
    std::string reqNiv() const;

private slots:
	void validerSaisie();

private:
    Ui::SupprimerVehiculeQtClass ui;
};

#endif // SUPPRIMERVEHICULEQT_H
