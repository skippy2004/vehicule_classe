/*****************************************************************//**
 * \file   Electrique.h
 * \brief  Declaration de la classe Electrique
 *
 * \author youwan
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
   * Membre prive tensionMax : contient la tensionMax
   */
    float tensionMax;


protected:



public:
    Electrique();
    ~Electrique();

    Electrique(const Electrique& entre);
    Electrique& operator = (const Electrique& entre);

    Electrique(float tensionMax);

    float gettensionMax();
    void settensionMax(float tensionMax);



};

#endif