/**
 * \file validationFormat.h
 * \brief Fichier qui contient l'interface des fonctions de validations de la plaque et du NIV.
 * \author Francis Boulianne
 * \version 1.0
 * \date 6/10/2019
 */

#ifndef VALIDATIONFORMAT
#define VALIDATIONFORMAT

#include <array>
#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

namespace util
{
    bool validerImmatriculation(const std::string &p_immatriculation);
    bool validationImmatriculationPromenade(const std::string &p_immatriculation);
    bool validationImmatriculationCamion(const std::string &p_immatriculation);

    bool validerNiv(const std::string &p_niv);

    bool check_letter(const std::string &p_num, std::string p_lettre, int p_index);

    array<int, 17> convertir(const string &p_niv, array<int, 17> p_values);

    bool check_digit(const string &p_niv, array<int, 17> p_values);
}

#endif /* VALIDATIONFORMAT */
