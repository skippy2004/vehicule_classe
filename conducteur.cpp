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

    cout << "Destrcution de l'conducteur " << this->Nom << " " << this->Prenom << endl;

}


//------------------------------------------------------------------------------------------------

/*
std::string conducteur::getNom()
{
    return this->Nom;
}
void conducteur::setconducteur(std::string nouveauNom) {
    this->Nom = nouveauNom;
}



std::string conducteur::getPrenomconducteur() {
    return this->Prenomconducteur;
}



void  conducteur::setPrenomconducteur(std::string nouvellePrenom) {
    this->Prenomconducteur = nouvellePrenom;
}
*/