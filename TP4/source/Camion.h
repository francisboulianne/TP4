/*
 * Camion.h
 * \brief Fichier qui contient l'interface de la classe Camion.
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#ifndef CAMION_H_
#define CAMION_H_

#include "Vehicule.h"

namespace saaq
{
/**
 * \class Camion
 * \brief Cette classe sert au maintien et à la manipulation des camions.
 * 				<p>
 * 				Elle permet d'accéder aux informations du véhicule en lecture.
 * 				<p>
 * 				Elle permet d'afficher les informations du véhicule avec la méthode std::string reqVehiculeFormate() const.
 * 				<p>
 * 				ELle permet également de modifier le numéro d'immatriculation du véhicule avec la méthode void asgImmatriculation(string p_immatriculation).
 * 				<p>
 *              Attributs: string m_niv Le numéro d'immatriculation de série du véhicule.
 *              <p>
 *              string p_immatriculation Le numéro d'immatriculation du véhicule.
 *              <p>
 *              Date m_dateEnregistrement La date d'enregistrement du véhicule.
 */
class Camion: public Vehicule
{
public:
	Camion(int p_poids, int p_nbEssieux, const std::string& p_niv, const std::string& p_immatriculation);
    virtual void asgImmatriculation(const std::string& p_immatriculation);
    virtual double tarificationAnnuelle() const;
    int reqPoids() const;
	int reqNbEssieux() const;
    std::string reqVehiculeFormate() const;
    virtual Vehicule* clone() const;

private:
    void verifieInvariant() const;
	int m_poids;
	int m_nbEssieux;
};

} // namespace saaq



#endif /* CAMION_H_ */
