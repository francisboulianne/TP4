#ifndef CAMIONQT_H
#define CAMIONQT_H

#include <QtGui/QDialog>
#include "ui_camionqt.h"

class CamionQt : public QDialog
{
    Q_OBJECT

public:
    CamionQt(QWidget *parent = 0);
    ~CamionQt();
    std::string reqNiv() const;
	std::string reqImmatriculation() const;
	int reqNbEssieux() const;
	int reqPoids() const;

private slots:
	void validerSaisie();

private:
    Ui::CamionQtClass ui;
};

#endif // CAMIONQT_H
