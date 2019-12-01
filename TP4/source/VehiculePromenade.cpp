/*
 * VehiculePromenade.cpp
 * \brief Implantation de la classe VehiculePromenade.
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#include "VehiculePromenade.h"
static const double TARIF = 224.04;


namespace saaq
{
/**
 * \brief Constructeur avec paramètres.
 * On construit un objet VehiculePromenade à partir des données passées en paramètres.
 * \param[in] p_nbPlaces est le nombre de places du véhicule
 * \param[in] p_niv est le numéro de série du véhicule
 * \param[in] p_immatriculation est le numéro d'immatriculation du véhicule
 * \pre p_nbPlaces, est plus grand ou égal à zéro
 * \pre p_immatriculation, numéro d'immatriculation du véhicule valide
 * \post L'attribut m_nbPlaces équivaut à p_nbPlaces passé en paramètre
 * \post L'attribut m_niv équivaut à p_niv passé en paramètre
 * \post L'attribut m_immatriculation équivaut à p_immatriculation passé en paramètre
 */
VehiculePromenade::VehiculePromenade(int p_nbPlaces, const std::string& p_niv, const std::string& p_immatriculation) : saaq::Vehicule(p_niv, p_immatriculation), m_nbPlaces(p_nbPlaces)
{
	PRECONDITION (p_nbPlaces > 0);
	PRECONDITION (util::validationImmatriculationPromenade(p_immatriculation));

	POSTCONDITION (reqNbPlaces() == p_nbPlaces);
	POSTCONDITION (reqNiv() == p_niv);
	POSTCONDITION (reqImmatriculation() == p_immatriculation);
	INVARIANTS();
}
/**
 * \brief Assigne un nouveau numéro d’immatriculation au véhicule courant.
 * \param[in] p_immatriculation est un string qui représente le nouveau numéro d’immatriculation
 * \pre p_immatriculation doit avoir un format valide
 * \post L'attribut m_immatriculation équivaut à p_immatriculation passé en paramètre
 */
void VehiculePromenade::asgImmatriculation(const std::string& p_immatriculation)
{
	PRECONDITION(util::validationImmatriculationPromenade(p_immatriculation));

	Vehicule::asgImmatriculation(p_immatriculation);

	POSTCONDITION (reqImmatriculation() == p_immatriculation);
	INVARIANTS();
}
/**
 * \brief Méthode d'accès en lecture à l'attribut m_nbPlaces
 * \return un int qui représente le nombre de places du véhicule
 */
int VehiculePromenade::reqNbPlaces() const
{
    return m_nbPlaces;
}
/**
 * \brief retourne les informations d'un véhicule formaté dans une chaîne de caracères (string)
 * \return un véhicule formaté dans une chaîne de caractères
 */
std::string VehiculePromenade::reqVehiculeFormate() const
{
	std::ostringstream p_os;

	p_os << Vehicule::reqVehiculeFormate();
    p_os << "nombre de places : " << reqNbPlaces() << endl;
    p_os << "tarif : " << TARIF << "$" << endl;

    return p_os.str();
}
/**
 * \brief retourne la tarification annuelle du véhicule (double)
 * \return un tarif fixe de 224,04$
 */
double VehiculePromenade::tarificationAnnuelle() const
{
	return TARIF;
}
/**
 * \brief  retourne une copie allouée sur le monceau de l'objet courant
 * \return un objet VehiculePromenade
 */
Vehicule* VehiculePromenade::clone() const
{
	return new VehiculePromenade(*this);
}

/**
 * \brief Teste l'invariant de la classe Vehicule. L'invariant de cette classe s'assure que les informations du vehicule sont valides
 */
void VehiculePromenade::verifieInvariant() const
{
	INVARIANT(reqNbPlaces() > 0);
	INVARIANT(util::validerNiv(reqNiv()));
	INVARIANT(util::validationImmatriculationPromenade(reqImmatriculation()));
}


}// namespace saaq





