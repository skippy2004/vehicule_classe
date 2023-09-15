#ifndef MOTO_H
#define MOTO_H
#include <iostream>
#include <string>
class Moteur;

class Moto
{
private:

    int poids;
    std::string Moteur;

protected:



public:

    void setPoids(int poids);
    int getPoids();

    void setMoteur(Moteur *moteur);
    std::string getMoteur();
};
