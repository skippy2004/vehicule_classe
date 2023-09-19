#include "Moto.h"

using namespace std;

//construction de la moto (constructeur)
Moto::Moto() {
    cout << "Construction de la moto " << endl;
}

//destruction de la moto (destructeur)
Moto::~Moto() {
    cout << "Destruction de la moto " << endl;
}

//get poids
int Moto::getPoids() {
    return this->poids;
}
//set poids, avec int et valeur correspondant au poids
void Moto::setPoids(int poids) {
    this->poids = 186;
}

// get moteur, avec pointeur
Moteur* Moto::getMoteur(){
    return this->moteur;
}
//set moteur, recuperation du moteur dans la class moteur
void Moto::setMoteur(Moteur *moteur) {
    this->moteur = moteur;
}