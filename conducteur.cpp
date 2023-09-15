/*****************************************************************//**
 * \file   conducteur.cpp
 * \brief  Definition de la classe conducteur
 *
 * \author Axel
 * \date   septembre 2023
 *
 *********************************************************************/

#include "conducteur.h"

using namespace std;


//Constructeur par Défaut
conducteur::conducteur() {

    this->Nom = "Nom inconnu";
    this->Prenom = "inconnu";

}

//Constructeur sur mesure
conducteur::conducteur(std::string Nom, std::string Prenom, int anneeNaissance) {
    this->Nom = Nom;
    this->Prenom = Prenom;
    this->anneeNaissance = anneeNaissance;
}


//Destructeur de Conducteur
conducteur::~conducteur() {

    cout << "Destrcution de l'conducteur " << this->Nom << " " << this->Prenom << "" << this->anneeNaissance << endl;

}
//------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------

std::string conducteur::getNom() {
    return this->Nom;
}
void conducteur::setNom(std::string Nom) {
    this->Nom = Nom;
}

std::string conducteur::getPrenom() {
    return this->Prenom;
}
void conducteur::setPrenom(std::string Prenom) {
    this->Prenom = Prenom;
}


int conducteur::getanneeNaissance() {
    return this->anneeNaissance = anneeNaissance;
}
void  conducteur::setanneeNaissance(int anneeNaissance) {
    this->anneeNaissance = anneeNaissance;
}
