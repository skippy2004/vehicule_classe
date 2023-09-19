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

//Pour récuperer le nom du conducteur
std::string conducteur::getNom() {
    return this->Nom;
}
//Pour paramétrer le nom du conducteur
void conducteur::setNom(std::string Nom) {
    this->Nom = Nom;
}

//Pour récuperer le Prenom du conducteur
std::string conducteur::getPrenom() {
    return this->Prenom;
}

//Pour paramétrer le Prenom du conducteur
void conducteur::setPrenom(std::string Prenom) {
    this->Prenom = Prenom;
}

//Pour récuperer la date de naissance du conducteur
int conducteur::getanneeNaissance() {
    return this->anneeNaissance;
}

//Pour paramétrer la date de naissance du conducteur
void  conducteur::setanneeNaissance(int anneeNaissance) {
    this->anneeNaissance = anneeNaissance;
}



//------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------


//Permet d'afficher les motos que le conducteur a
Moto* conducteur::afficheMotos() {
    for (int i = 0; i < 10; i++) { 
        cout << mesMotos[i] << endl; 
    };
    return *mesMotos->getnom() ;
};


//Ajouter une moto au garage du conducteur
void conducteur::setaddMoto(Moto* newMoto) {
    for (int i = 0; i < 10; i++) {
        if (mesMotos[i] == NULL) {
            i = 11;
            mesMotos[i] = newMoto;
            return;
        }
    };
    cout << "plus de place dans le garrage pour une 11° moto" << endl;
    return;
};

//Pour retirer une moto du garage car rodeo sauvage
void conducteur::setrmMoto(Moto *rmMotto) {
    for (int i = 0; i < 10; i++) {
        if (mesMotos[i] == rmMotto) {
            i = 11;
            mesMotos[i] = NULL;
            return;
        }
    }
    cout << "pas de moto de ce type dans le garrage" << endl;
    return;
};