#include "Moto.h"
#include "Conducteur.h"
#include "moteur.h"

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


Moteur* Moto::getMoteur(){
    return this->moteur;
}
void Moto::setMoteur(Moteur *moteur) {
    this->moteur = moteur;
}