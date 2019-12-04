#include "camionqt.h"
#include "validationFormat.h"
#include <qmessagebox.h>

CamionQt::CamionQt(QWidget *parent)
    : QDialog(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.pushButtonAJouter, SIGNAL(clicked()), this, SLOT(validerSaisie()));
}

CamionQt::~CamionQt()
{

}

std::string CamionQt::reqNiv() const
{
	return ui.lineEdit_niv->text().toStdString();
}

std::string CamionQt::reqImmatriculation() const
{
	return ui.lineEdit_immatriculation->text().toStdString();
}

int CamionQt::reqNbEssieux() const
{
	return ui.spinBox_essieux->value();
}

int CamionQt::reqPoids() const
{
	return ui.lineEdit_poids->text().toInt();
}

void CamionQt::validerSaisie()
{
	if (ui.lineEdit_niv->text().isEmpty())
	{
		QString message = "Le numéro de série ne doit pas être vide";
		QMessageBox::information(this, "Message d'erreur", message);
		return;
	}

	if (!(util::validerNiv(this->reqNiv())))
	{
		QString message = "Le numéro de série doit être dans un format valide";
		QMessageBox::information(this, "Message d'erreur", message);
		return;
	}

	if (ui.lineEdit_immatriculation->text().isEmpty())
	{
		QString message = "Le numéro d'immatriculation ne doit pas être vide";
		QMessageBox::information(this, "Message d'erreur", message);
		return;
	}

	if (!(util::validationImmatriculationCamion(this->reqImmatriculation())))
	{
		QString message = "Le numéro d'immatriculation doit être dans un format valide";
		QMessageBox::information(this, "Message d'erreur", message);
		return;
	}

	if (ui.lineEdit_poids->text().isEmpty())
	{
		QString message = "Le poids ne doit pas être vide";
		QMessageBox::information(this, "Message d'erreur", message);
		return;
	}

	if (this->reqPoids() < 3001)
	{
		QString message = "Le poids doit être supérieur à 3000 kg";
		QMessageBox::information(this, "Message d'erreur", message);
		return;
	}

	if (this->reqNbEssieux() < 2)
	{
		QString message = "Le nombre d’essieux doit être supérieur ou égal à 2";
		QMessageBox::information(this, "Message d'erreur", message);
		return;
	}

	else
	{
		accept();
	}
}

