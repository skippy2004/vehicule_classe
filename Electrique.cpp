

#include "Electrique.h"



using namespace std;
class Moteur;


Electrique::Electrique() :Moteur(50) {
    cout << "voiture Thermique prete" << endl;
    this->tensionMax = 5;
}


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
 * \param entre Objet de type entreprise
 */
Electrique::Electrique(const Electrique& entre)
{
    cout << "Copie de la voiture electrique" << endl;
    this->tensionMax = entre.tensionMax;
}


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
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */
float Electrique::gettensionMax() {
    return this->tensionMax;
}

/**
 * \brief Mutateur de l'attribut nomEntreprise
 *
 * \param nouveauNom nouveau nom de l'entreprise
 */
void Electrique::settensionMax(float puissance) {
    this->tensionMax = puissance;
}