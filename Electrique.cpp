/*****************************************************************//**
 * \file   Entreprise.cpp
 * \brief  Definition de la classe Entreprise
 *
 * \author PierreV
 * \version 0.1
 * \date   June 2023
 *
 * Programme Cpp permettant de creer des objets pour décrire les stages
 *********************************************************************/

#include "Electrique.h"



using namespace std;
class Moteur;

/**
 * \brief Constructeur par default
 * \li Nom = anonyme
 * \li Nom = anonyme    #apres changement pour teste
 * \li Ville = inconnu
 *
 */
Electrique::Electrique() :Moteur(50) {
    cout << "voiture Thermique prete" << endl;
    this->tensionMax = 5;
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nom nom de l'entreprise
 * \param ville ville de l'entreprise
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

    cout << "Destrcution de l'entreprise " << endl;

}


/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type entreprise
 */
Electrique::Electrique(const Electrique& entre)
{
    cout << "Copie de Capitaine" << endl;
    this->tensionMax = entre.tensionMax;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type entreprise
 * \return Nouvelle objet de type entreprise
 */
Electrique& Electrique::operator = (const Electrique& entre)
{
    cout << "Affectation de l'entreprise" << std::endl;
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