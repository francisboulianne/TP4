/*
 * VehiculePromenade.h
 * \brief Fichier qui contient l'interface de la classe VehiculePromenade.
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#ifndef VEHICULEPROMENADE_H_
#define VEHICULEPROMENADE_H_

#include "Vehicule.h"

namespace saaq
{
/**
 * \class VehiculePromenade
 * \brief Cette classe sert au maintien et à la manipulation des véhicules de promenade.
 * 		Attributs: int m_nbPlaces: Le nombre de places du véhicule.
 * 		<p>
 * 		string m_niv: Le numéro de série du véhicule.
 *      <p>
 *      string m_immatriculation: Le numéro d'immatriculation du véhicule.
 *      <p>
 *      Date m_dateEnregistrement: La date d'enregistrement du véhicule.
 */
class VehiculePromenade: public Vehicule
{
public:
	VehiculePromenade(int p_nbPlaces, const std::string& p_niv, const std::string& p_immatriculation);
    virtual void asgImmatriculation(const std::string& p_immatriculation);
    virtual double tarificationAnnuelle() const;
	int reqNbPlaces() const;
    std::string reqVehiculeFormate() const;
    virtual Vehicule* clone() const;

private:
    void verifieInvariant() const;
	int m_nbPlaces;
};

} // namespace saaq


#endif /* VEHICULEPROMENADE_H_ */
