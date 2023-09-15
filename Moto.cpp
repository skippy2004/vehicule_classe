#include "Moto.h"

using namespace std;


Moto::Moto() {
    cout << "Construction de la moto " << endl;
}


Moto::~Moto() {
    cout << "Destruction de la moto " << endl;
}


int Moto::getPoids() {
    return this->poids;
}

void Moto::setPoids(int poids) {
    this->poids = 186;
}


std::string Moto::getMoteur(){
    return this->Moteur;
}
void Moto::setMoteur(Moteur *moteur) {
    this->Moteur = Moteur *moteur;
}
