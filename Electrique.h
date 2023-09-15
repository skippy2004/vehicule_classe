

#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include <iostream>
#include <string>
#include "Moteur.h"


using namespace std;



class Electrique : public Moteur
{

private:
  
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