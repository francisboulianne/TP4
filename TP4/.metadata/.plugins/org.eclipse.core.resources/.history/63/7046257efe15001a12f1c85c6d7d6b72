#include "proprietaireqt.h"
#include "promenadeqt.h"

ProprietaireQt::ProprietaireQt(QWidget *parent)
    : QMainWindow(parent)
{
	ui.setupUi(this);
	QObject::connect(ui.actionV_hicule_promenade, SIGNAL(triggered()), this, SLOT(ajouterVehiculePromenade()));
}

ProprietaireQt::~ProprietaireQt()
{

}

void ProprietaireQt::ajouterVehiculePromenade(){
	promenadeqt promenadeQt;
	promenadeQt.exec();
}
