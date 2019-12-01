/**
 * \file Vehicule.h
 * \brief Fichier qui contient l'interface de la classe Vehicule.
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#ifndef VEHICULE_H_
#define VEHICULE_H_

#include "Date.h"
#include "validationFormat.h"
#include <iostream>
#include <sstream>

namespace saaq
{
/**
 * \class Vehicule
 * \brief Cette classe sert au maintien et à la manipulation des véhicules.
 * 		Attributs: string m_niv Le numéro de série du véhicule.
 *      <p>
 *      string p_immatriculation Le numéro d'immatriculation du véhicule.
 *      <p>
 *      Date m_dateEnregistrement La date d'enregistrement du véhicule.
 */
class Vehicule
{
protected:
	virtual void asgImmatriculation(const std::string& p_immatriculation);

public:
	Vehicule(const std::string& p_niv, const std::string& p_immatriculation);
	const std::string& reqNiv() const;
	const std::string& reqImmatriculation() const;
    std::string reqDate() const;
    bool operator ==(const Vehicule& p_vehicule) const;
    virtual std::string reqVehiculeFormate() const;
    virtual Vehicule* clone() const=0;
    virtual ~Vehicule(){};
    virtual double tarificationAnnuelle() const=0;

private:
    void verifieInvariant() const;
	std::string m_niv;
	std::string m_immatriculation;
    util::Date m_dateEnregistrement;
};

} // namespace saaq

#endif /* VEHICULE_H_ */

