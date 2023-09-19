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

    cout << "Destrcution du Conducteur " << this->Nom << " " << this->Prenom << "" << this->anneeNaissance << endl;

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
    return this->anneeNaissance;
}
void  conducteur::setanneeNaissance(int anneeNaissance) {
    this->anneeNaissance = anneeNaissance;
}



//------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------

Moto* conducteur::afficheMotos() {
    //for (int i = 0; i < 10; i++) { cout << *mesMotos[i] << endl; };
    return this-> mesMotos;
};




void conducteur::setaddMoto(Moto* newMoto) {
    
    this-> mesMotos = newMoto;
};


void conducteur::setrmMoto(Moto *rmMotto) {
    this-> mesMotos = NULL;
};