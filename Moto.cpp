#include "Moto.h"

using namespace std;


Moto::Moto() {
    cout << "Construction de la moto " << endl;
}


Moto::~Moto() {
    cout << "Destruction de la moto " << endl;
}


std::string Moto::getPOids() {
    return this->Poids;
}

void Moto::setPoids(int poids) {
    this->Poids = 186;
}


std::string Moto::getMoteur(){
    return this->Moteur;
}
void Moto::setMoteur(Moteur *moteur) {
    this->Moteur = *moteur;
}
