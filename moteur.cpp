/*****************************************************************//**
 * \file  Moteur.cpp
 * \brief  Definition de la classe Moteur
 *
 * \author youwan
 *********************************************************************/

#include "Moteur.h"



using namespace std;


/**
 * \constructeur de base
 *
 */
Moteur::Moteur() {
    this->puissance = 0;
}


/**
 * \constructeur personnalisable
 *
 */
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
 * \param entre Objet de type Moteur
 */
Moteur::Moteur(const Moteur& entre)
{
    cout << "Copie de moteur" << endl;
    this->puissance = entre.puissance;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Moteur
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



/**
 * \recuperer la puissance
 *
 */
int Moteur::getpuissance(){
    return this->puissance;
}

/**
 * \changer la puissance
 *
 */
void Moteur::setpuissance(int puissance) {
    this->puissance = puissance;
}