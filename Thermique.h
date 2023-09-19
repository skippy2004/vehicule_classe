/*****************************************************************//**
 * \file   Thermique.h
 * \brief  Declaration de la classe Thermique
 *
 * \author youwan
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
    * Membre prive cylindre : contient le nombre de cylindre
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