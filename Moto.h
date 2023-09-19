#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include <string>
using namespace std;

class Moteur;

class Moto
{
private:

    int poids; //définition du poids de la moto
    Moteur *moteur; // definittion du moteur avec pointeur

protected:

public:
    // poids
    void setPoids(int poids);
    int getPoids();
    //moteur
    void setMoteur(Moteur *moteur);
    Moteur* getMoteur();
};
#endif
