

#include "Thermique.h"



using namespace std;
class Moteur;


Thermique::Thermique() :Moteur(50) {
    cout << "voiture Thermique prete" << endl;
    this->cylindre = 10;
}



Thermique::Thermique(float cylindre) :Moteur(50) {
    cout << "voiture Thermique prete" << endl;
    this->cylindre = cylindre;

}


/**
 * \brief Destructeur
 *
 */
Thermique::~Thermique() {

    cout << "Destrcution de la voiture thermique " << endl;

}


/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type entreprise
 */
Thermique::Thermique(const Thermique& entre)
{
    cout << "Copie de la voiture thermique" << endl;
    this->cylindre = entre.cylindre;
}


Thermique& Thermique::operator = (const Thermique& entre)
{
    cout << "Affectation de la voiture thermique" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->cylindre = entre.cylindre;
    }
    return *this;
}




float Thermique::getcylindre() {
    return this->cylindre;
}


void Thermique::setcylindre(float cylindre) {
    this->cylindre = cylindre;
}