/*****************************************************************//**
 * \file   Moteur.h
 * \brief  Declaration de la classe Moteur
 *
 * \author youwan
 *********************************************************************/
#ifndef MOTEUR_H
#define MOTEUR_H
#include <iostream>
#include <string>


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
    * Membre prive puissance : contient la puissance du moteur
    */
    int puissance;
    
   
protected:



public:

    Moteur();
    ~Moteur();
    Moteur(const Moteur& entre);
    Moteur& operator = (const Moteur& entre);

    Moteur(int puissance);

    int getpuissance();
    void setpuissance(int puissance);

    

};

#endif