#ifndef conducteur_H
#define conducteur_H
#include <iostream>
#include <string>
#include "Moto.h"
class Moto;

class conducteur
{

private:
    //variable du nom
    std::string Nom;
    //varible du prenom
    std::string Prenom;
    //variable de l'anne de naissance
    int anneeNaissance;
    //permetra plus tard d'avoir plusieurs moto//fonction pour ajouter des moto
    Moto *mesMotos;


protected:



public:
    //constructeur de conducteur par défaut
    conducteur();
    //destructeur de conducteur
    ~conducteur();
    //constructeur de conducteur sur mesure
    conducteur(std::string Nom, std::string Prenom, int anneeNaissance);
  
    //fonction pour le nom du conducteur 
    std::string getNom();
    void setNom(std::string Nom);
    
    //fonction pour le prenom du conducteur 
    std::string getPrenom();
    void setPrenom(std::string Prenom);



    //variable de get annee de naissance
    int getanneeNaissance();
    void setanneeNaissance(int anneeNaissance);

    //fonction pour permetrre de voir le garage du conducteur
    Moto* afficheMotos();


   //fonction pour ajouter des moto
    void setaddMoto(Moto *newMoto);

    //fonction pour remove des moto
    void setrmMoto(Moto *rmMotto);
    

};

#endif