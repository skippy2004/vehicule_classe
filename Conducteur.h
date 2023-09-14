#ifndef conducteur_H
#define conducteur_H
#include <iostream>
#include <string>


class conducteur
{

private:
    std::string nomconducteur;
    std::string villeconducteur;
    int anneeNaissance;
    //Moto mesMotos[10];


protected:



public:
    conducteur();
    ~conducteur();


    conducteur(std::string nom, std::string ville);
  
    std::string getNom();
    void setNom(std::string nouveauNom);
    
    std::string getPrenom();
    void setPrenom(std::string nouveauPrenom);

    std::string getAnneeNaissance();
    void setAnneeNaissance(std::string nouvelleAnneeNaissance);

    void afficheMotos();

    //void addMoto(Moto* newMoto);

    //void rmMotto(Moto* rmMoto);

};

#endif