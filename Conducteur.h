/*****************************************************************/
#ifndef conducteur_H
#define conducteur_H
#include <iostream>
#include <string>


class conducteur
{

private:
    std::string nomconducteur;
    std::string villeconducteur;



protected:



public:
    /*Classe sous forme canonique*/
    conducteur();
    ~conducteur();
    conducteur(const conducteur& entre);
    conducteur& operator = (const conducteur& entre);

    conducteur(std::string nom, std::string ville);
    std::string getNomconducteur();
    void setconducteur(std::string nouveauNom);
    std::string getVilleconducteur();
    void setVilleconducteur(std::string nouvelleVille);

};

#endif