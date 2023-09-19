/*****************************************************************//**
 * \file   Thermique.cpp
 * \brief  Definition de la classe Thermique
 *
 * \author youwan
 *********************************************************************/

#include "Thermique.h"



using namespace std;
class Moteur;

/**
 * \constructeur de base
 *
 */
Thermique::Thermique() :Moteur(50) {
    cout << "voiture Thermique prete" << endl;
    this->cylindre = 10;
}


/**
 * \constructeur personnalisable
 *
 */
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
 * \param entre Objet de type Thermique
 */
Thermique::Thermique(const Thermique& entre)
{
    cout << "Copie de la voiture thermique" << endl;
    this->cylindre = entre.cylindre;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Thermique
 * \return Nouvelle objet de type Thermique
 */
Thermique& Thermique::operator = (const Thermique& entre)
{
    cout << "Affectation de la voiture thermique" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->cylindre = entre.cylindre;
    }
    return *this;
}



/**
 * \recuperer le nombre de cylindre
 *
 */
float Thermique::getcylindre() {
    return this->cylindre;
}

/**
 * \changer le nombre de cylindre
 *
 */
void Thermique::setcylindre(float cylindre) {
    this->cylindre = cylindre;
}