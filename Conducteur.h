#ifndef conducteur_H
#define conducteur_H
#include <iostream>
#include <string>
#include "Moto.h"
class Moto;

class conducteur
{

private:
    std::string Nom;
    std::string Prenom;
    int anneeNaissance;
    Moto *mesMotos;


protected:



public:
    conducteur();
    ~conducteur();
    conducteur(std::string Nom, std::string Prenom, int anneeNaissance);
  

    std::string getNom();
    void setNom(std::string Nom);
    
    std::string getPrenom();
    void setPrenom(std::string Prenom);




    int getanneeNaissance();
    void setanneeNaissance(int anneeNaissance);

    Moto* afficheMotos();


   
    void setaddMoto(Moto *newMoto);


    void setrmMoto(Moto *rmMotto);
    

};

#endif