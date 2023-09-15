/*****************************************************************//**
 * \file   Electrique.cpp
 * \brief  Definition de la classe Electrique
 *
 * \author youwan
 *********************************************************************/

#include "Electrique.h"



using namespace std;
class Moteur;

/**
 * \constructeur de base
 *
 */
Electrique::Electrique() :Moteur(50) {
    cout << "voiture Thermique prete" << endl;
    this->tensionMax = 5;
}

/**
 * \constructeur personnalisable
 *
 */
Electrique::Electrique(float tensionMax) :Moteur(50) {
    cout << "voiture electrique prete" << endl;
    this->tensionMax = tensionMax;
}


/**
 * \brief Destructeur
 *
 */
Electrique::~Electrique() {

    cout << "Destrcution de la voiture electrique " << endl;

}


/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type Electrique
 */
Electrique::Electrique(const Electrique& entre)
{
    cout << "Copie de la voiture electrique" << endl;
    this->tensionMax = entre.tensionMax;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type Electrique
 * \return Nouvelle objet de type Electrique
 */
Electrique& Electrique::operator = (const Electrique& entre)
{
    cout << "Affectation de la voiture electrique" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->tensionMax = entre.tensionMax;
    }
    return *this;
}



/**
 * \recuperer la tensionMax
 *
 */
float Electrique::gettensionMax() {
    return this->tensionMax;
}

/**
 * \changer la tensionMax
 *
 */
void Electrique::settensionMax(float puissance) {
    this->tensionMax = puissance;
}