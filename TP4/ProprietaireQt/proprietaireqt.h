#ifndef PROPRIETAIREQT_H
#define PROPRIETAIREQT_H

#include <QtGui/QMainWindow>
#include "ui_proprietaireqt.h"
#include "Proprietaire.h"
#include "VehiculePromenade.h"
#include "Camion.h"
#include "VehiculeException.h"
#include <qmessagebox.h>

class ProprietaireQt : public QMainWindow
{
    Q_OBJECT

public:
    ProprietaireQt(QWidget *parent = 0, std::string p_nom = "Proprietaire", std::string p_prenom = "Un");
    ~ProprietaireQt();

private slots:
	void ajouterVehiculePromenade();
	void ajouterCamion();
	void afficherVehicule();
	void supprimerVehicule();

private:
    Ui::ProprietaireQtClass ui;
    saaq::Proprietaire m_proprietaire;
};

#endif // PROPRIETAIREQT_H
