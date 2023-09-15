/*****************************************************************//**
 * \file   mission.h
 * \brief  Declaration de la classe entreprise
 *
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef THERMIQUE_H
#define THERMIQUE_H

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
class Thermique : public Moteur
{

private:
    /**
     * Membre prive puissance : puissance du moteur
     */
    float cylindre;


protected:



public:
    Thermique();
    ~Thermique();

    Thermique(const Thermique& entre);
    Thermique& operator = (const Thermique& entre);

    Thermique(float cylindre);

    float getcylindre();
    void setcylindre(float cylindre);



};

#endif