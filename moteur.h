/*****************************************************************//**
 * \file   mission.h
 * \brief  Declaration de la classe entreprise
 *
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef MISSION_H
#define MISSION_H
#include <iostream>
#include <string>
#include "Electrique.h"
#include "Thermique.h"

using namespace std;


/*! \class Entreprise
   * \brief classe representant une entreprise. 2 attributs prives
   *
   * Cette classe a une finalite pedagogique :
   * \li : Rappel du C++
   * \li : commentaire avec Doxygen
   * \li : git, github
   */
class Moteur
{

private:
    /**
     * Membre prive puissance : puissance du moteur
     */
    int puissance;
    
   
protected:



public:
    /*Classe sous forme canonique*/
    Moteur();
    ~Moteur();
    Moteur(const Moteur& entre);
    Moteur& operator = (const Moteur& entre);

    Moteur(int puissance);

    int getpuissance();
    void setpuissance(int puissance);

    

};

#endif