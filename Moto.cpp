#include "Moto.h"

using namespace std;


Moto::Moto() {
    cout << "Construction de la moto " << endl;
}


Moto::~Moto() {
    cout << "Destruction de la moto " << endl;
}


std::string Moto::getPOids() {
}

void Moto::setPoids(int poids) {
    this->Poids = 186;
}


std::string Moto::getMoteur(){
    
}
void Moto::setMoteur(Moteur *moteur) {
    this->Moteur = *moteur;
}
