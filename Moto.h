#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include <string>
#include "conducteur.h"
#include "moteur.h"

using namespace std;


class Moto
{
private:

    int poids; //définition du poids de la moto
    string nom;//définition du nom de la moto
    Moteur moteur; // definittion du moteur

protected:

public:
    Moto();
    ~Moto();
    // poids
    void setPoids(int poids);
    int getPoids();
    //moteur
    void setMoteur(Moteur moteur);
    Moteur getMoteur();



    void setnom(string nom);
    string getnom();
};
#endif
