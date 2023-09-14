/*****************************************************************//**
 * \file   mission.h
 * \brief  Declaration de la classe entreprise
 *
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include <iostream>
#include <string>
#include "Moteur.h"


using namespace std;


/*! \class Entreprise
   * \brief classe representant une entreprise. 2 attributs prives
   *
   * Cette classe a une finalite pedagogique :
   * \li : Rappel du C++
   * \li : commentaire avec Doxygen
   * \li : git, github
   */
class Electrique : public Moteur
{

private:
    /**
     * Membre prive puissance : puissance du moteur
     */
    float tensionMax;


protected:



public:
    Electrique(const Electrique& entre);
    Electrique& operator = (const Electrique& entre);

    Electrique(float tensionMax);

    float gettensionMax();
    void settensionMax(float tensionMax);



};

#endif