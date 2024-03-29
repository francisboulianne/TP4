/*
 * Proprietaire.h
 * \brief Fichier qui contient l'interface de la classe Proprietaire.
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#ifndef PROPRIETAIRE_H_
#define PROPRIETAIRE_H_

#include "Vehicule.h"

namespace saaq
{
/**
 * \class Proprietaire
 * \brief Cette classe sert au maintien et à la manipulation des propriétaires.
 *              Attributs: string m_nom: Le nom du propriétaire.
 *              <p>
 *              string m_prenom: Le prénom du propriétaire.
 *              <p>
 *              vector<Vehicule*> m_vVehicules: Vecteur contenant les véhicules du propriétaire.
 */
class Proprietaire
{
public:
	Proprietaire(const std::string& p_nom, const std::string& p_prenom);
	Proprietaire(const Proprietaire& p_proprietaire);
	~Proprietaire();
	bool VehiculeEstDejaPresent(const std::string& p_niv) const;
	void ajouterVehicule (const Vehicule& p_nouveauVehicule);
	void supprimerVehicule (const std::string& p_niv);
	const std::string& reqNom() const;
	const std::string& reqPrenom() const;
	std::string reqProprietaireFormate() const;
	const Proprietaire& operator= (const Proprietaire& p_proprietaire);

private:
    std::string m_nom;
    std::string m_prenom;
	std::vector<Vehicule*> m_vVehicules;
	void verifieInvariant() const;
};

} // namespace saaq




#endif /* PROPRIETAIRE_H_ */
