#include "proprietaireqt.h"
#include "promenadeqt.h"
#include "camionqt.h"
#include "supprimervehiculeqt.h"

ProprietaireQt::ProprietaireQt(QWidget *parent, std::string p_nom, std::string p_prenom)
    : QMainWindow(parent), m_proprietaire(p_nom, p_prenom)
{
	ui.setupUi(this);
	QObject::connect(ui.actionV_hicule_promenade, SIGNAL(triggered()), this, SLOT(ajouterVehiculePromenade()));
	QObject::connect(ui.actionCamion_2, SIGNAL(triggered()), this, SLOT(ajouterCamion()));
	QObject::connect(ui.actionSupprimer, SIGNAL(triggered()), this, SLOT(supprimerVehicule()));
	QObject::connect(ui.pushButton_afficherVehicule, SIGNAL(clicked()), this, SLOT(afficherVehicule()));
}

ProprietaireQt::~ProprietaireQt()
{

}

void ProprietaireQt::ajouterVehiculePromenade()
{
	promenadeqt promenadeQt;
	if (promenadeQt.exec())
	{
		try {
			saaq::VehiculePromenade nouveauVehicule(promenadeQt.reqNbPlaces(), promenadeQt.reqNiv(), promenadeQt.reqImmatriculation());
			if (m_proprietaire.VehiculeEstDejaPresent(promenadeQt.reqNiv()))
			{
				throw VehiculeDejaPresentException("Le véhicule est déjà présent");
			}
			else
			{
				m_proprietaire.ajouterVehicule(nouveauVehicule);
			}
		}
		catch(const VehiculeDejaPresentException& p_r)
		{
		QString message(p_r.what());
		QMessageBox::information(this, "Message d'erreur", message);
		}
	}
}

void ProprietaireQt::ajouterCamion()
{
	CamionQt camionQt;
	if (camionQt.exec())
	{
		try {
			saaq::Camion nouveauVehicule(camionQt.reqPoids(), camionQt.reqNbEssieux(), camionQt.reqNiv(), camionQt.reqImmatriculation());
			if (m_proprietaire.VehiculeEstDejaPresent(camionQt.reqNiv()))
			{
				throw VehiculeDejaPresentException("Le véhicule est déjà présent");
			}
			else
			{
				m_proprietaire.ajouterVehicule(nouveauVehicule);
			}
		}
		catch(const VehiculeDejaPresentException& p_r)
		{
		QString message(p_r.what());
		QMessageBox::information(this, "Message d'erreur", message);
		}
	}
}

void ProprietaireQt::supprimerVehicule()
{
	SupprimerVehiculeQt supprimerVehicule;
	if (supprimerVehicule.exec())
	{
		try
		{
			m_proprietaire.supprimerVehicule(supprimerVehicule.reqNiv());
		}
		catch(const VehiculeAbsentException& p_r)
		{
		QMessageBox::information(this, "Message d'erreur", "Le véhicule est absent");
		}
	}
}

void ProprietaireQt::afficherVehicule()
{
	QString q(QString::fromStdString(m_proprietaire.reqProprietaireFormate()));
	ui.textEdit->setText(q);
}
