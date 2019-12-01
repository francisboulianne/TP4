/*
 * Proprietaire_Testeur.cpp
 *
 *  Created on: 2019-11-24
 *      Author: etudiant
 */


#include "gtest/gtest.h"
#include "Proprietaire.h"
#include "Camion.h"
#include "VehiculePromenade.h"
#include "ContratException.h"
using namespace std;
using namespace saaq;

/**
 * \brief	Test du constructeur Proprietaire(const std::string& p_nom, const std::string& p_prenom)
			Cas valide:
				ConstructeurAvecParametres: Création d'un objet Proprietaire avec tous les paramètres nécessaires.
											Chaque attribut doit correspondre à son paramètre respectif.
			Cas invalides:
				ConstructeurNomVide: Le paramètre p_nom ne doit pas être vide
				ConstructeurPrenomVide: Le paramètre p_prenom ne doit pas être vide
 */
TEST(Proprietaire, ConstructeurAvecParametres)
{
	Proprietaire ProprietaireTest("Tremblay", "Louis");

	ASSERT_EQ("Tremblay", ProprietaireTest.reqNom());
	ASSERT_EQ("Louis", ProprietaireTest.reqPrenom());
}
TEST(Proprietaire, ConstructeurNomVide)
{
	ASSERT_THROW(Proprietaire ProprietaireTest("", "Louis"),
			PreconditionException);
}
TEST(Proprietaire, ConstructeurPrenomVide)
{
	ASSERT_THROW(Proprietaire ProprietaireTest("Tremblay", ""),
			PreconditionException);
}

/**
 * \brief	Test du constructeur Proprietaire(const Proprietaire& p_proprietaire)
			Cas valide:
				ConstructeurCopie: Création d'un objet Proprietaire à partir d'un autre objet Proprietaire.
											Chaque attribut doit correspondre au paramètre respectif de p_proprietaire.
			Cas invalides:
				Aucun identifié
 */
TEST(Proprietaire, ConstructeurCopie)
{
	Proprietaire ProprietaireTest("Tremblay", "Louis");
	Camion CamionTest(3001, 2, "3VWFE21C04M000001", "L123456");
	ProprietaireTest.ajouterVehicule(CamionTest);

	Proprietaire Copie(ProprietaireTest);

	ASSERT_EQ(ProprietaireTest.reqProprietaireFormate(), Copie.reqProprietaireFormate());
}

/**
 * \class UnCamion
 * \brief Fixture UnCamion pour la création d'un objet Camion utilisé dans plusieurs tests
 */
class UnProprietaire: public ::testing::Test
{
public:
	UnProprietaire():
		f_UnProprietaire("Tremblay", "Louis")
		{};
	Proprietaire f_UnProprietaire;
};

/**
 * \brief	Test de la méthode const Proprietaire& operator= (const Proprietaire& p_proprietaire)
 * 			cas valide:
 * 				reqNom: Vérification du retour
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnProprietaire, operateurEgal)
{
	Camion CamionTest(3001, 2, "3VWFE21C04M000001", "L123456");
	f_UnProprietaire.ajouterVehicule(CamionTest);
	Proprietaire Test = f_UnProprietaire;
	ASSERT_EQ(Test.reqProprietaireFormate(), f_UnProprietaire.reqProprietaireFormate());
}

/**
 * \brief	Test de la méthode const std::string& reqNom() const
 * 			cas valide:
 * 				reqNom: Vérification du retour
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnProprietaire, reqNom)
{
	ASSERT_EQ("Tremblay", f_UnProprietaire.reqNom());
}

/**
 * \brief	Test de la méthode const std::string& reqPrenom() const
 * 			cas valide:
 * 				reqNom: Vérification du retour
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnProprietaire, reqPrenom)
{
	ASSERT_EQ("Louis", f_UnProprietaire.reqPrenom());
}

/**
 * \brief	Test de la méthode void ajouterVehicule (const Vehicule& p_nouveauVehicule)
 * 			cas valide:
 * 				AjoutVehicule: Ajouter un véhicule et vérifier s'il correspond au véhicule contenu dans m_vVehicules en appelant la fonction reqVehiculeFormate()
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnProprietaire, AjoutVehicule)
{
	VehiculePromenade UnVehiculePromenade(4, "3VWFE21C04M000001", "123 ABC");
	f_UnProprietaire.ajouterVehicule(UnVehiculePromenade);

	std::ostringstream p_os;

	p_os << "Proprietaire\n-------------------\nNom : Tremblay\nPrenom : Louis" << endl;
	p_os << "-------------------" << endl;
	p_os << UnVehiculePromenade.reqVehiculeFormate();

	ASSERT_EQ(p_os.str(), f_UnProprietaire.reqProprietaireFormate());
}

/**
 * \brief 	Test de la méthode std::string reqProprietaireFormate() const
 * 			cas valide:
 * 				AfficherProprietaireFormate: Retourne une string dans le format voulu
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnProprietaire, AfficherProprietaireFormate)
{
	VehiculePromenade UnVehiculePromenade(4, "3VWFE21C04M000001", "123 ABC");
	Camion UnCamion(3001, 2, "3VWFE21C04M000001", "L123456");
	f_UnProprietaire.ajouterVehicule(UnVehiculePromenade);
	f_UnProprietaire.ajouterVehicule(UnCamion);

	std::ostringstream p_os;

	p_os << "Proprietaire\n-------------------\nNom : Tremblay\nPrenom : Louis" << endl;
	p_os << "-------------------" << endl;
	p_os << "Numero de serie : 3VWFE21C04M000001" << endl;
	p_os << "Numero d’immatriculation : 123 ABC" << endl;
	p_os << "Date d’enregistrement : " << UnVehiculePromenade.reqDate() << endl;
	p_os << "nombre de places : 4" << endl;
	p_os << "tarif : 224.04$" << endl;
	p_os << "-------------------" << endl;
	p_os << "Numero de serie : 3VWFE21C04M000001" << endl;
	p_os << "Numero d’immatriculation : L123456" << endl;
	p_os << "Date d’enregistrement : " << UnCamion.reqDate() << endl;
	p_os << "nombre d'essieux : 2" << endl;
	p_os << "poids : 3001 kg" << endl;
	p_os << "tarif : 570.28$" << endl;

	ASSERT_EQ(p_os.str(), f_UnProprietaire.reqProprietaireFormate());
}

