#include "Moto.h"

using namespace std;


Moto::Moto() {
    cout << "Construction de la moto " << endl;
}


Moto::~Moto() {
    cout << "Destruction de la moto " << endl;
}


std::string Moto::getPoids() {
    return this->Poids;
}

void Moto::setPoids(std::string poids) {
    this->Poids = 186;
}


std::string Moto::getMoteur(){
    return this->Moteur;
}
void Moto::setMoteur(std::string Moteur) {
    this->Moteur = *moteur;
}
