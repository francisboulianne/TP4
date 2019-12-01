/**
 * \file validationFormat.cpp
 * \brief Implantation des fonctions de validations de la plaque et du NIV
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#include "validationFormat.h"
using namespace std;

namespace util
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
 * \brief verifie si le numero de la plaque est valide
 * \param[in] p_immatriculation
 * \return bool indiquant si la plaque est valide ou non
 */
    bool validerImmatriculation(const std::string &p_immatriculation) {
        //construit le modele de la plaque a verifier pour ensuite le valider
        if (p_immatriculation.size() == 7 or p_immatriculation.size() == 4) {
            array<int, 7> final{};

            for (int i = 0; (unsigned) i < p_immatriculation.size(); i++) {
                if (isdigit(p_immatriculation[i])) {
                    final[i] = 5;
                } else if (isalpha(p_immatriculation[i]) and (isupper(p_immatriculation[i])) and
                           not(check_letter(p_immatriculation, "O", i))) {
                    final[i] = 1;
                } else if (isspace(p_immatriculation[i])) {
                    final[i] = 2;
                } else {
                    final[i] = 4;
                }
            }

            //determine si "L" est present dans la plaque a l'indice 0
            if (check_letter(p_immatriculation, "L", 0)) {
                final[0] = 3;
            }

            return final == modele1 or final == modele2 or final == modele3 or final == modele33 or final == modele4
                   or final == modele44 or final == modele5 or final == modele6 or final == modele66;
        } else {
            return false;
        }
    }

/**
 * \brief verifie si le numero de la plaque est valide
 * \param[in] p_immatriculation
 * \return bool indiquant si la plaque est valide ou non
 */
	bool validationImmatriculationCamion(const std::string &p_immatriculation) {
		//construit le modele de la plaque a verifier pour ensuite le valider
		if (p_immatriculation.size() == 7) {
			array<int, 7> final{};

			for (int i = 0; (unsigned) i < p_immatriculation.size(); i++) {
				if (isdigit(p_immatriculation[i])) {
					final[i] = 5;
				} else if (isalpha(p_immatriculation[i]) and (isupper(p_immatriculation[i])) and
						   not(check_letter(p_immatriculation, "O", i))) {
					final[i] = 1;
				} else if (isspace(p_immatriculation[i])) {
					final[i] = 2;
				} else {
					final[i] = 4;
				}
			}

			//determine si "L" est present dans la plaque a l'indice 0
			if (check_letter(p_immatriculation, "L", 0)) {
				final[0] = 3;
			}

			return final == modele5;
		} else {
			return false;
		}
	}

/**
 * \brief verifie si le numero de la plaque est valide
 * \param[in] p_immatriculation
 * \return bool indiquant si la plaque est valide ou non
 */
	bool validationImmatriculationPromenade(const std::string &p_immatriculation) {
		//construit le modele de la plaque a verifier pour ensuite le valider
		if (p_immatriculation.size() == 7 or p_immatriculation.size() == 4) {
			array<int, 7> final{};

			for (int i = 0; (unsigned) i < p_immatriculation.size(); i++) {
				if (isdigit(p_immatriculation[i])) {
					final[i] = 5;
				} else if (isalpha(p_immatriculation[i]) and (isupper(p_immatriculation[i])) and
						   not(check_letter(p_immatriculation, "O", i))) {
					final[i] = 1;
				} else if (isspace(p_immatriculation[i])) {
					final[i] = 2;
				} else {
					final[i] = 4;
				}
			}

			//determine si "L" est present dans la plaque a l'indice 0
			if (check_letter(p_immatriculation, "L", 0)) {
				final[0] = 3;
			}

			return final == modele1 or final == modele2 or final == modele3 or final == modele33 or final == modele4
				   or final == modele44 or final == modele6 or final == modele66;
		} else {
			return false;
		}
	}

/**
 * \brief vérifie si le NIV est valide
 * \param[in] p_niv
 * \return bool indiquant si le NIV est valide ou non
 */
    bool validerNiv(const std::string &p_niv) {
        bool valide;

        if (p_niv.size() == 17) {
            array<int, 17> values{};
            values = convertir(p_niv, values);

            if (values[0] != -5) {
                valide = check_digit(p_niv, values);
            } else {
                valide = false;
            }
        } else {
            valide = false;
        }

        return valide;
    }

/**
 * \brief vérifie si une lettre est présente dans une chaîne de caractère a l'indice specifié
 * \param[in] p_num le string à vérifier
 * \param[in] p_lettre le string que l'on veut vérifier
 * \param[in] p_index l'indice que l'on veut vérifier
 * \return bool indiquant si la plaque est valide ou non
 */
    bool check_letter(const string &p_num, string p_lettre, int p_index) {

        vector<size_t> vec_index;
        size_t occu = p_num.find(p_lettre);

        while (occu != string::npos) {
            vec_index.push_back(occu);
            occu = p_num.find(p_lettre, occu + 1);
        }

        return find(vec_index.begin(), vec_index.end(), p_index) != vec_index.end();
    }

/**
 * \brief convertie les lettres contenues dans un NIV en entier selon leur valeur
 * \param[in] p_niv le NIV à convertir
 * \param[in] p_values les valeurs entières de chaque lettre
 * \return values le NIV converti selon les valeurs entières de chaque lettre
 */
    array<int, 17> convertir(const string &p_niv, array<int, 17> p_values) {
        for (int i = 0; i < 17; i++) {
            if (isdigit(p_niv[i])) {
                p_values[i] = p_niv[i];
            } else if (isalpha(p_niv[i]) and isupper(p_niv[i])) {
                array<string, 1> temp;
                temp[0] = p_niv[i];

                if (dictioValues.find(temp[0]) != dictioValues.end()) {
                    p_values[i] = dictioValues.find(temp[0])->second;
                } else {
                    p_values[0] = -5;
                }
            } else {
                p_values[0] = -5;
            }
        }
        return p_values;
    }

/**
 * \brief trouve le check digit d'un NIV et vérifie si le NIV est valide en fonction de celui-ci
 * \param[in] niv le NIV à vérifier
 * \param[in] values les valeurs de chaque terme du NIV
 * \return bool indiquant si le NIV est valide en fonction du check digit
 */
    bool check_digit(const string &p_niv, array<int, 17> p_values) {
        int somme = 0;

        for (int i = 0; i < 17; i++) {
            if (p_values[i] > 9) {
                p_values[i] -= 48;
            }
            somme += p_values[i] * poids[i];
        }

        int check_digit = somme % 11;

        return (p_niv[8] - 48) == check_digit or (check_letter(p_niv, "X", 8) and check_digit == 10);
    }

} //namespace util
