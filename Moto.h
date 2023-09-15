#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include <string>
using namespace std;

class Moteur;

class Moto
{
private:

    int poids;
    Moteur *moteur;

protected:

public:

    void setPoids(int poids);
    int getPoids();

    void setMoteur(Moteur *moteur);
    Moteur* getMoteur();
};
#endif
