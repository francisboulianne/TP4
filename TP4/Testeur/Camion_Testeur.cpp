/*
 * Camion_Testeur.cpp
 *
 *  Created on: 2019-11-24
 *      Author: etudiant
 */

#include "gtest/gtest.h"
#include "Camion.h"
#include "ContratException.h"
using namespace std;
using namespace saaq;

/**
 * \brief	Test du constructeur Camion(int p_poids, int p_nbEssieux, const std::string& p_niv, const std::string& p_immatriculation)
			Cas valide:
				ConstructeurAvecParametres: Création d'un objet Camion avec tous les paramètres nécessaires.
											Chaque attribut doit correspondre à son paramètre respectif.
			Cas invalides:
				ConstructeurPoidsInvalide: Le paramètre p_poids doit être plus grand que 3000
				ConstructeurEssieuxInvalide: Le paramètre p_nbEssieux doit être plus grand ou égal à 2
				ConstructeurImmatriculationInvalide: Le paramètre p_immatriculation doit être dans un format valide
 */
TEST(Camion, ConstructeurAvecParametres)
{
	Camion CamionTest(3001, 2, "3VWFE21C04M000001", "L123456");

	ASSERT_EQ(3001, CamionTest.reqPoids());
	ASSERT_EQ(2, CamionTest.reqNbEssieux());
	ASSERT_EQ("3VWFE21C04M000001", CamionTest.reqNiv());
	ASSERT_EQ("L123456", CamionTest.reqImmatriculation());
}
TEST(Camion, ConstructeurPoidsInvalide)
{
	ASSERT_THROW(Camion CamionTest(3000, 2, "3VWFE21C04M000001", "L123456"),
			PreconditionException);
}
TEST(Camion, ConstructeurEssieuxInvalide)
{
	ASSERT_THROW(Camion CamionTest(3001, 1, "3VWFE21C04M000001", "L123456"),
			PreconditionException);
}
TEST(Camion, ConstructeurImmatriculationInvalide)
{
	ASSERT_THROW(Camion CamionTest(3001, 2, "3VWFE21C04M000001", "123 ABC"),
			PreconditionException);
}

/**
 * \class UnCamion
 * \brief Fixture UnCamion pour la création d'un objet Camion utilisé dans plusieurs tests
 */
class UnCamion: public ::testing::Test
{
public:
	UnCamion():
		f_UnCamion(3001, 2, "3VWFE21C04M000001", "L123456"),
		f_UnCamion2(4001, 2, "3VWFE21C04M000001", "L123456"),
		f_UnCamion3(4001, 3, "3VWFE21C04M000001", "L123456"),
		f_UnCamion4(3001, 4, "3VWFE21C04M000001", "L123456"),
		f_UnCamion5(3001, 5, "3VWFE21C04M000001", "L123456"),
		f_UnCamion6(3001, 6, "3VWFE21C04M000001", "L123456"),
		f_UnCamion7(3001, 15, "3VWFE21C04M000001", "L123456")
		{};
	Camion f_UnCamion;
	Camion f_UnCamion2;
	Camion f_UnCamion3;
	Camion f_UnCamion4;
	Camion f_UnCamion5;
	Camion f_UnCamion6;
	Camion f_UnCamion7;
};

/**
 * \brief	Test de la méthode int reqPoids() const
 * 			cas valide:
 * 				reqPoids: Vérification du retour
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnCamion, reqPoids)
{
	ASSERT_EQ(3001, f_UnCamion.reqPoids());
}

/**
 * \brief	Test de la méthode int reqNbEssieux() const
 * 			cas valide:
 * 				reqPoids: Vérification du retour
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnCamion, reqNbEssieux)
{
	ASSERT_EQ(2, f_UnCamion.reqNbEssieux());
}

/**
 * \brief	Test de la méthode virtual double tarificationAnnuelle() const;
 * 			cas valide:
 * 				getTarif: retourne le tarif du camion selon le nombre d'essieux de celui-ci
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnCamion, getTarif)
{
	ASSERT_EQ(570.28, f_UnCamion.tarificationAnnuelle());
	ASSERT_EQ(905.28, f_UnCamion2.tarificationAnnuelle());
	ASSERT_EQ(1566.19, f_UnCamion3.tarificationAnnuelle());
	ASSERT_EQ(2206.19, f_UnCamion4.tarificationAnnuelle());
	ASSERT_EQ(2821.76, f_UnCamion5.tarificationAnnuelle());
	ASSERT_EQ(3729.76, f_UnCamion6.tarificationAnnuelle());
	ASSERT_EQ(3729.76, f_UnCamion7.tarificationAnnuelle());
}

/**
 * \brief 	Test de la méthode void asgImmatriculation(const std::string& p_immatriculation)
 *			cas valide:
 *				MutateurImmatriculation: Assigne le nouveau numéro et vérifie si le changement a bien été effectué
 *			cas invalide:
 *				Aucun identifié
 */
TEST_F(UnCamion, MutateurImmatriculation)
{
	ASSERT_EQ("L123456", f_UnCamion.reqImmatriculation());
	f_UnCamion.asgImmatriculation("L654321");
	ASSERT_EQ("L654321", f_UnCamion.reqImmatriculation());
	f_UnCamion.asgImmatriculation("L123456");
	ASSERT_EQ("L123456", f_UnCamion.reqImmatriculation());
}

/**
 * \brief 	Test de la méthode std::string reqVehiculeFormate() const
 * 			cas valide:
 * 				AfficherCamionFormate: Retourne une string dans le format voulu
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnCamion, AfficherCamionFormate)
{
	std::ostringstream p_os;

	p_os << "Numero de serie : 3VWFE21C04M000001" << endl;
	p_os << "Numero d’immatriculation : L123456" << endl;
	p_os << "Date d’enregistrement : " << f_UnCamion.reqDate() << endl;
	p_os << "nombre d'essieux : 2" << endl;
	p_os << "poids : 3001 kg" << endl;
	p_os << "tarif : 570.28$" << endl;

	ASSERT_EQ(p_os.str(), f_UnCamion.reqVehiculeFormate());
}

/**
 * \brief 	Test de la méthode virtual Vehicule* clone() const
 * 			cas valide:
 * 				CamionClone: 	Création d'un camion et d'un clone de celui-ci et vérifier si ceux-ci sont égaux
 */
TEST_F(UnCamion, CamionClone)
{
	Vehicule* clone = f_UnCamion.clone();
	ASSERT_EQ(f_UnCamion.reqVehiculeFormate(), clone->reqVehiculeFormate())
	;
}

