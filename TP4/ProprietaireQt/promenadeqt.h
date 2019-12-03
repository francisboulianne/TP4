#ifndef PROMENADEQT_H
#define PROMENADEQT_H

#include <QtGui/QDialog>
#include "ui_promenadeqt.h"
#include <string>

class promenadeqt : public QDialog
{
    Q_OBJECT

public:
    promenadeqt(QWidget *parent = 0);
    ~promenadeqt();
    std::string reqNiv() const;
	std::string reqImmatriculation() const;
	int reqNbPlaces() const;

private slots:
	void validerSaisie();

private:
    Ui::promenadeqtClass ui;
};

#endif // PROMENADEQT_H
