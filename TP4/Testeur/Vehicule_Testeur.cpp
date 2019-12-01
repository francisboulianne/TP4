/*
 * Vehicule_Testeur.cpp
 *
 *  Created on: 2019-11-23
 *      Author: etudiant
 */

#include "gtest/gtest.h"
#include "Vehicule.h"
#include "ContratException.h"
#include <string>
using namespace std;
using namespace saaq;


/**
 * \class VehiculeDeTest: public Vehicule
 * \brief Classe qui permet de tester les méthodes de la classe abstraite Vehicule
 */
class VehiculeDeTest: public Vehicule
{
public:
	VehiculeDeTest(const std::string& p_niv, const std::string& p_immatriculation):
		Vehicule(p_niv, p_immatriculation){};
	virtual Vehicule* clone() const
	{
		return new VehiculeDeTest(*this);
	};
	virtual std::string reqVehiculeFormate() const
	{
		return Vehicule::reqVehiculeFormate();
	};
	virtual double tarificationAnnuelle() const
	{
		return 2000.4;
	}
	virtual void asgImmatriculation(const std::string& p_immatriculation)
	{
		Vehicule::asgImmatriculation(p_immatriculation);
	}
};

/**
 * \class UnVehicule
 * \brief Fixture UnVehicule pour la création d'un objet Vehicule pour les tests
 */
class UnVehicule: public ::testing::Test
{
public:
	UnVehicule():
		f_vehicule("3VWFE21C04M000001", "123 ABC"),
		f_vehicule2("3VWFE21C04M000001", "123 ABC"),
		f_vehicule3("1HTMKADN43H561298", "123 ABC"),
		f_vehicule4("3VWFE21C04M000001", "ABGH")
		{};
	VehiculeDeTest f_vehicule;
	VehiculeDeTest f_vehicule2;
	VehiculeDeTest f_vehicule3;
	VehiculeDeTest f_vehicule4;
};


/**
 * \brief 	Test du Constructeur Vehicule(const std::string& p_niv, const std::string& p_immatriculation)
 * 			cas valide:
 * 			ConstructeurAvecParamètres: Vehicule avec 2 paramètres.
 * 										Chaque attribut doit correspondre à son paramètre respectif
 * 			cas invalides:
 * 			ConstructeurNivInvalide: 	Le paramètre p_niv doit être dans le format valide.
 * 			ConstructeurImmaInvalide:	Le paramètre p_immatriculation doit être dans le format valide
 */
TEST(Vehicule, ConstructeurAvecParametres)
{
	VehiculeDeTest vehiculeTest("3VWFE21C04M000001", "123 ABC");

	ASSERT_EQ("3VWFE21C04M000001", vehiculeTest.reqNiv());
	ASSERT_EQ("123 ABC", vehiculeTest.reqImmatriculation());
}

TEST(Vehicule, ConstructeurNivInvalide)
{
	ASSERT_THROW(VehiculeDeTest vehiculeTest("3VWFE21C04M000002", "123 ABC"),
			PreconditionException);
}

TEST(Vehicule, ConstructeurImmaInvalide)
{
	ASSERT_THROW(VehiculeDeTest vehiculeTest("3VWFE21C04M000001", "numeroInvalide"),
			PreconditionException);
}

/**
 * \brief 	Test de la méthode void asgImmatriculation(const std::string& p_immatriculation)
 *			cas valide:
 *				MutateurImmatriculation: Assigne le nouveau numéro et vérifie si le changement a bien été effectué
 *			cas invalide:
 *				Aucun identifié
 */
TEST_F(UnVehicule, MutateurImmatriculation)
{
	ASSERT_EQ("123 ABC", f_vehicule.reqImmatriculation());
	f_vehicule.asgImmatriculation("ABC 123");
	ASSERT_EQ("ABC 123", f_vehicule.reqImmatriculation());
	f_vehicule.asgImmatriculation("123 ABC");
	ASSERT_EQ("123 ABC", f_vehicule.reqImmatriculation());
}

/**
 * \brief 	Test de la méthode std::string reqVehiculeFormate() const
 * 			cas valide:
 * 				AfficherVehiculeFormate: Retourne une string dans le format voulu
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnVehicule, AfficherVehiculeFormate)
{
	std::ostringstream p_os;

	p_os << "Numero de serie : 3VWFE21C04M000001" << endl;
	p_os << "Numero d’immatriculation : 123 ABC" << endl;
	p_os << "Date d’enregistrement : " << f_vehicule.reqDate() << endl;

	ASSERT_EQ(p_os.str(), f_vehicule.reqVehiculeFormate());
}

/**
 * \brief 	Test de la méthode const std::string& reqNiv() const
 * 			cas valide:
 * 				RequeteAuteurs: Vérification du retour
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnVehicule, ReqNiv)
{
	ASSERT_EQ("3VWFE21C04M000001", f_vehicule.reqNiv());
}

/**
 * \brief 	Test de la méthode const std::string& reqImmatriculation() const
 * 			cas valide:
 * 				RequeteAuteurs: Vérification du retour
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnVehicule, ReqImmatriculation)
{
	ASSERT_EQ("123 ABC", f_vehicule.reqImmatriculation())
	;
}

/**
 * \brief 	Test de la méthode bool operator ==(const Vehicule& p_vehicule) const
 * 			cas valide:
 * 				OperateurEgalite: 	Vérifie l'égalité entre un véhicule avec une autre véhicule identique et
 * 									3 autres véhicules non identiques
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnVehicule, OperateurEgalite)
{
	ASSERT_TRUE(f_vehicule == f_vehicule2);
	ASSERT_FALSE(f_vehicule == f_vehicule3);
	ASSERT_FALSE(f_vehicule == f_vehicule4);
}

/**
 * \brief 	Test de la méthode virtual Vehicule* clone() const
 * 			cas valide:
 * 				VehiculeClone: 	Création d'un véhicule et d'un clone de celui-ci et vérifier si ceux-ci sont égaux
 */
TEST_F(UnVehicule, MethodeClone)
{
	Vehicule *clone = f_vehicule.clone();
	ASSERT_EQ(f_vehicule.reqVehiculeFormate(), clone->reqVehiculeFormate());
}







