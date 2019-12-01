/**
 * \file Vehicule.cpp
 * \brief Implantation de la classe Vehicule
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#include "Vehicule.h"

namespace saaq
{
    //déclare le dictionnaire contenant les valeurs des lettres dans le NIV
    std::map<std::string, int> dictioValues = {
            {"A", 1},
            {"B", 2},
            {"C", 3},
            {"D", 4},
            {"E", 5},
            {"F", 6},
            {"G", 7},
            {"H", 8},
            {"J", 1},
            {"K", 2},
            {"L", 3},
            {"M", 4},
            {"N", 5},
            {"P", 7},
            {"R", 9},
            {"S", 2},
            {"T", 3},
            {"U", 4},
            {"V", 5},
            {"W", 6},
            {"X", 7},
            {"Y", 8},
            {"Z", 9},
    };

    //déclare l'array contenant le poids de chaque position dans le NIV
    std::array<int, 17> poids{8, 7, 6, 5, 4, 3, 2, 10, 0, 9, 8, 7, 6, 5, 4, 3, 2};

    //déclare les différents modèles de plaques valides
    //"5" indique que le caractere est un chiffre
    //"1" indique que le caractere est une lettre
    //"2" indique que le caractere est un espace
    //"3" indique que le caractere est un "L"
    array<int, 7> modele1{5, 5, 5, 2, 1, 1, 1};
    array<int, 7> modele2{5, 5, 5, 1, 5, 5, 5};
    array<int, 7> modele3{1, 5, 5, 2, 1, 1, 1};
    array<int, 7> modele33{3, 5, 5, 2, 1, 1, 1};
    array<int, 7> modele4{1, 1, 1, 2, 5, 5, 5};
    array<int, 7> modele44{3, 1, 1, 2, 5, 5, 5};
    array<int, 7> modele5{3, 5, 5, 5, 5, 5, 5};
    array<int, 7> modele6{1, 1, 1, 1, 0, 0, 0};
    array<int, 7> modele66{3, 1, 1, 1, 0, 0, 0};
    
/**
 * \brief Constructeur avec paramètres.
 * On construit un objet Vehicule à partir des données passées en paramètres.
 * \param[in] p_niv est le numéro de série du véhicule
 * \param[in] p_immatriculation est le numéro d'immatriculation du véhicule
 * \pre p_niv, numéro de série doit être valide
 * \pre p_immatriculation, numéro d'immatriculation du véhicule doit être valide
 * \post L'attribut m_niv équivaut à p_niv passé en paramètre
 * \post L'attribut m_immatriculation équivaut à p_immatriculation passé en paramètre
 */
Vehicule::Vehicule(const std::string& p_niv, const std::string& p_immatriculation):
		m_niv(p_niv), m_immatriculation(p_immatriculation)
{
	PRECONDITION (util::validerNiv(p_niv));
	PRECONDITION (util::validerImmatriculation(p_immatriculation));

	POSTCONDITION (m_niv == p_niv);
	POSTCONDITION (m_immatriculation == p_immatriculation);
	INVARIANTS();
}
/**
 * \brief Assigne un nouveau numéro d’immatriculation au véhicule courant.
 * \param[in] p_immatriculation est un string qui représente le nouveau numéro d’immatriculation
 */
void Vehicule::asgImmatriculation(const std::string& p_immatriculation)
{
	PRECONDITION (util::validerImmatriculation(p_immatriculation));

	m_immatriculation = p_immatriculation;

	POSTCONDITION (reqImmatriculation() == p_immatriculation);
	INVARIANTS();
}
/**
 * \brief Méthode d'accès en lecture à l'attribut m_niv
 * \return un string qui représente le NIV du véhicule
 */
const std::string& Vehicule::reqNiv() const
{
    return m_niv;
}
/**
 * \brief Méthode d'accès en lecture à l'attribut m_immatriculation
 * \return un string qui représente la plaque d'immatriculation du véhicule
 */
const std::string& Vehicule::reqImmatriculation() const
{
    return m_immatriculation;
}
/**
 * \brief Méthode d'accès en lecture à l'attribut m_dateEnregistrement
 * \return un string qui représente la date d'enregistrement du véhicule
 */
std::string Vehicule::reqDate() const
{
    return m_dateEnregistrement.reqDateFormatee();
}
/**
 * \brief retourne les informations d'un véhicule formaté dans une chaîne de caracères (string)
 * \return un véhicule formaté dans une chaîne de caractères
 */
std::string Vehicule::reqVehiculeFormate() const
{
	std::ostringstream p_os;

    p_os << "Numero de serie : " << reqNiv() << endl;
    p_os << "Numero d’immatriculation : " << reqImmatriculation() << endl;
    p_os << "Date d’enregistrement : " << reqDate() << endl;

    return p_os.str();
}
/**
 * \brief surcharge de l'opérateur ==
 * \param[in] p_vehicule qui est un véhicule valide
 * \return un booléen indiquant si les deux véhicules ont le même NIV, le même numéro de plaque et la même date d'enregistrement
 */
bool Vehicule::operator==(const Vehicule& p_vehicule) const
{
    return m_niv == p_vehicule.m_niv && m_immatriculation == p_vehicule.m_immatriculation && m_dateEnregistrement == p_vehicule.m_dateEnregistrement;
}

/**
 * \brief Teste l'invariant de la classe Vehicule. L'invariant de cette classe s'assure que les informations du vehicule sont valides
 */
void Vehicule::verifieInvariant() const
{
	INVARIANT(util::validerNiv(reqNiv()));
}


}// namespace saaq

