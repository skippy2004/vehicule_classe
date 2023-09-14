/*****************************************************************/
#pragma once

#include "Moto.h"
#include <iostream>
#include <string>

class Moto
{
private:

    int poids;
    Moteur *moteur;




protected:



public:
    /*Classe sous forme canonique*/

    void setPoids(int poids);
    int getPoids();

    void setMoteur(Moteur* moteur);
    Moteur *getMoteure();
};
