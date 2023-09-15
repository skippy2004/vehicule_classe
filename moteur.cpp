

#include "Moteur.h"



using namespace std;



Moteur::Moteur() {
    this->puissance = 0;
}


Moteur::Moteur(int puissance) {
    this->puissance = puissance;
}


/**
 * \brief Destructeur
 *
 */
Moteur::~Moteur() {

    cout << "Destrcution ddu moteur " << endl;

}


/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type entreprise
 */
Moteur::Moteur(const Moteur& entre)
{
    cout << "Copie de moteur" << endl;
    this->puissance = entre.puissance;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type entreprise
 * \return Nouvelle objet de type moteur
 */
Moteur& Moteur::operator = (const Moteur& entre)
{
    cout << "Affectation du moteur" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->puissance = entre.puissance;
    }
    return *this;
}




int Moteur::getpuissance(){
    return this->puissance;
}


void Moteur::setpuissance(int puissance) {
    this->puissance = puissance;
}