/*
 * VehiculePromenade_Testeur.cpp
 *
 *  Created on: 2019-11-22
 *      Author: etudiant
 */


#include "gtest/gtest.h"
#include "VehiculePromenade.h"
#include "ContratException.h"
using namespace std;
using namespace saaq;

/**
 * \brief	Test du constructeur VehiculePromenade(int p_nbPlaces,
										const string& p_niv,
										const string& p_immatriculation)
			Cas valide:
				ConstructeurAvecParametres: Création d'un objet VehiculePromenade avec tous les paramètres nécessaires.
											Chaque attribut doit correspondre à son paramètre respectif.
			Cas invalides:
				ConstructeurNbPlacesInvalide: Le paramètre p_nbPlaces doit être plus grand que 0
				ConstructeurNivInvalide: Le paramètre p_niv doit être dans un format valide
				ConstructeurImmatriculationInvalide: Le paramètre p_immatriculation doit être dans un format valide
 */
TEST(VehiculePromenade, ConstructeurAvecParametres)
{
	VehiculePromenade VehiculePromenadeTest(4, "3VWFE21C04M000001", "123 ABC");

	ASSERT_EQ(4, VehiculePromenadeTest.reqNbPlaces());
	ASSERT_EQ("3VWFE21C04M000001", VehiculePromenadeTest.reqNiv());
	ASSERT_EQ("123 ABC", VehiculePromenadeTest.reqImmatriculation());
}
TEST(VehiculePromenade, ConstructeurNbPlacesInvalide)
{
	ASSERT_THROW(VehiculePromenade VehiculePromenadeTest(-1, "3VWFE21C04M000001", "123 ABC"),
			PreconditionException);
}
TEST(VehiculePromenade, ConstructeurNivInvalide)
{
	ASSERT_THROW(VehiculePromenade VehiculePromenadeTest(4, "3VWFE21C04M000002", "123 ABC"),
			PreconditionException);
}
TEST(VehiculePromenade, ConstructeurImmatriculationInvalide)
{
	ASSERT_THROW(VehiculePromenade VehiculePromenadeTest(4, "3VWFE21C04M000001", "JHG1234"),
			PreconditionException);
}
/**
 * \class UnVehiculePromenade
 * \brief Fixture UnVehiculePromenade pour la création d'un objet VehiculePromenade utilisé dans plusieurs tests
 */
class UnVehiculePromenade: public ::testing::Test
{
public:
	UnVehiculePromenade():
		f_UnVehiculePromenade(4, "3VWFE21C04M000001", "123 ABC")
		{};
	VehiculePromenade f_UnVehiculePromenade;
};

/**
 * \brief	Test de la méthode int reqNbPlaces() const
 * 			cas valide:
 * 				reqNbPlaces4: véhicule de promenade à 4 places
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnVehiculePromenade, reqNbPlaces4)
{
	ASSERT_EQ(4, f_UnVehiculePromenade.reqNbPlaces());
}

/**
 * \brief	Test de la méthode virtual double tarificationAnnuelle() const;
 * 			cas valide:
 * 				getTarif: retourne le tarif fixe pour un véhicule de promenade
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnVehiculePromenade, getTarif)
{
	ASSERT_EQ(224.04, f_UnVehiculePromenade.tarificationAnnuelle());
}

/**
 * \brief 	Test de la méthode void asgImmatriculation(const std::string& p_immatriculation)
 *			cas valide:
 *				MutateurImmatriculation: Assigne le nouveau numéro et vérifie si le changement a bien été effectué
 *			cas invalide:
 *				Aucun identifié
 */
TEST_F(UnVehiculePromenade, MutateurImmatriculation)
{
	ASSERT_EQ("123 ABC", f_UnVehiculePromenade.reqImmatriculation());
	f_UnVehiculePromenade.asgImmatriculation("ABC 123");
	ASSERT_EQ("ABC 123", f_UnVehiculePromenade.reqImmatriculation());
	f_UnVehiculePromenade.asgImmatriculation("123 ABC");
	ASSERT_EQ("123 ABC", f_UnVehiculePromenade.reqImmatriculation());
}

/**
 * \brief 	Test de la méthode std::string reqVehiculeFormate() const
 * 			cas valide:
 * 				AfficherVehiculePromenadeFormate: Retourne une string dans le format voulu
 * 			cas invalide:
 * 				Aucun identifié
 */
TEST_F(UnVehiculePromenade, AfficherVehiculePromenadeFormate)
{
	std::ostringstream p_os;

	p_os << "Numero de serie : 3VWFE21C04M000001" << endl;
	p_os << "Numero d’immatriculation : 123 ABC" << endl;
	p_os << "Date d’enregistrement : " << f_UnVehiculePromenade.reqDate() << endl;
	p_os << "nombre de places : 4" << endl;
	p_os << "tarif : 224.04$" << endl;

	ASSERT_EQ(p_os.str(), f_UnVehiculePromenade.reqVehiculeFormate());
}

/**
 * \brief 	Test de la méthode virtual Vehicule* clone() const
 * 			cas valide:
 * 				VehiculePromenadeClone: 	Création d'un véhicule et d'un clone de celui-ci et vérifier si ceux-ci sont égaux
 */
TEST_F(UnVehiculePromenade, VehiculePromenadeClone)
{
	Vehicule* clone = f_UnVehiculePromenade.clone();
	ASSERT_EQ(f_UnVehiculePromenade.reqVehiculeFormate(), clone->reqVehiculeFormate())
	;
}



