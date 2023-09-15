

#ifndef THERMIQUE_H
#define THERMIQUE_H

#include <iostream>
#include <string>
#include "Moteur.h"


using namespace std;



class Thermique : public Moteur
{

private:

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