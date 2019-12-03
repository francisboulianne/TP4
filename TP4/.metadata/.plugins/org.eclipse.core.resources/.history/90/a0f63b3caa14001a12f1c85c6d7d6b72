/*
 * Camion.cpp
 *
 *  Created on: 2019-11-18
 *      Author: etudiant
 */

/*
 * Camion.cpp
 * \brief Implantation de la classe Camion.
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#include "Camion.h"


namespace saaq
{
/**
 * \brief Constructeur avec paramètres.
 * On construit un objet Camion à partir des données passées en paramètres.
 * \param[in] p_poids est le poids du camion
 * \param[in] p_nbEssieux est le nombre d'essieux du camion
 * \param[in] p_niv est le numéro de série du véhicule
 * \param[in] p_immatriculation est le numéro d'immatriculation du véhicule
 * \pre p_poids, est plus grand que 3000
 * \pre p_nbEssieux, est plus grand ou égal à 2
 * \pre p_immatriculation, numéro d'immatriculation du camion est valide
 * \post L'attribut m_poids équivaut à p_poids passé en paramètre
 * \post L'attribut m_nbEssieux équivaut à p_nbEssieux passé en paramètre
 * \post L'attribut m_niv équivaut à p_niv passé en paramètre
 * \post L'attribut m_immatriculation équivaut à p_immatriculation passé en paramètre
 */
Camion::Camion(int p_poids, int p_nbEssieux, const std::string& p_niv, const std::string& p_immatriculation) : saaq::Vehicule(p_niv, p_immatriculation), m_poids(p_poids), m_nbEssieux(p_nbEssieux)
{
	PRECONDITION (p_poids > 3000);
	PRECONDITION (p_nbEssieux >= 2);
	PRECONDITION (util::validationImmatriculationCamion(p_immatriculation));

	POSTCONDITION (reqPoids() == p_poids);
	POSTCONDITION (reqNbEssieux() == p_nbEssieux);
	POSTCONDITION (reqNiv() == p_niv);
	POSTCONDITION (reqImmatriculation() == p_immatriculation);
	INVARIANTS();
}
/**
 * \brief Assigne un nouveau numéro d’immatriculation au camion courant.
 * \param[in] p_immatriculation est un string qui représente le nouveau numéro d’immatriculation
 * \pre p_immatriculation doit avoir un format valide
 * \post L'attribut m_immatriculation équivaut à p_immatriculation passé en paramètre
 */
void Camion::asgImmatriculation(const std::string& p_immatriculation)
{
	PRECONDITION(util::validationImmatriculationCamion(p_immatriculation));

	Vehicule::asgImmatriculation(p_immatriculation);

	POSTCONDITION (reqImmatriculation() == p_immatriculation);
	INVARIANTS();
}
/**
 * \brief Méthode d'accès en lecture à l'attribut m_poids
 * \return un int qui représente le poids du camion
 */
int Camion::reqPoids() const
{
    return m_poids;
}
/**
 * \brief Méthode d'accès en lecture à l'attribut m_nbEssieux
 * \return un int qui représente le nombre d’essieux du camion
 */
int Camion::reqNbEssieux() const
{
    return m_nbEssieux;
}
/**
 * \brief retourne les informations d'un camion formaté dans une chaîne de caracères (string)
 * \return un camion formaté dans une chaîne de caractères
 */
std::string Camion::reqVehiculeFormate() const
{
	std::ostringstream p_os;

	p_os << Vehicule::reqVehiculeFormate();
	p_os << "nombre d'essieux : " << reqNbEssieux() << endl;
    p_os << "poids : " << reqPoids() << " kg\n";
    p_os << "tarif : " << tarificationAnnuelle() << "$\n";

    return p_os.str();
}
/**
 * \brief retourne la tarification annuelle du véhicule (double)
 * \return le tarif variant selon le poids et le nombre d’essieux du camion (double)
 */
double Camion::tarificationAnnuelle() const
{
	double tarif = 570.28;

	if (m_poids > 4000)
	{
		tarif = 905.28;
	}
	if (m_nbEssieux == 3)
	{
		tarif = 1566.19;
	}
	if (m_nbEssieux == 4)
	{
		tarif = 2206.19;
	}
	if (m_nbEssieux == 5)
	{
		tarif = 2821.76;
	}
	if (m_nbEssieux >= 6)
	{
		tarif = 3729.76;
	}

	return tarif;
}
/**
 * \brief  retourne une copie allouée sur le monceau de l'objet courant
 * \return un objet Camion
 */
Vehicule* Camion::clone() const
{
	return new Camion(*this);
}

/**
 * \brief Teste l'invariant de la classe Camion. L'invariant de cette classe s'assure que les informations du camion sont valides
 */
void Camion::verifieInvariant() const
{
	INVARIANT(reqPoids() > 3000);
	INVARIANT(reqNbEssieux() >= 2);
	INVARIANT(util::validerNiv(reqNiv()));
	INVARIANT(util::validationImmatriculationCamion(reqImmatriculation()));
}


}// namespace saaq


