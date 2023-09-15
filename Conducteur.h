#ifndef conducteur_H
#define conducteur_H
#include <iostream>
#include <string>


class conducteur
{

private:
    std::string Nom;
    std::string Prenom;
    int anneeNaissance;
    //Moto* mesMotos[10];


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

    //void afficheMotos();


    /*
    addMoto* getnewMoto();
    void setnewMoto(addMoto *newMoto);


    rmMotto* getrmMotto();
    void setrmMotto(Moto* rmMotto);
    */

};

#endif