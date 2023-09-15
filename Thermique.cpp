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

#include "Thermique.h"



using namespace std;
class Moteur;

/**
 * \brief Constructeur par default
 * \li Nom = anonyme
 * \li Nom = anonyme    #apres changement pour teste
 * \li Ville = inconnu
 *
 */
Thermique::Thermique() :Moteur(50) {
    cout << "voiture Thermique prete" << endl;
    this->cylindre = 10;
}


/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nom nom de l'entreprise
 * \param ville ville de l'entreprise
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

    cout << "Destrcution de l'entreprise " << endl;

}


/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type entreprise
 */
Thermique::Thermique(const Thermique& entre)
{
    cout << "Copie de Capitaine" << endl;
    this->cylindre = entre.cylindre;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type entreprise
 * \return Nouvelle objet de type entreprise
 */
Thermique& Thermique::operator = (const Thermique& entre)
{
    cout << "Affectation de l'entreprise" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->cylindre = entre.cylindre;
    }
    return *this;
}



/**
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */
float Thermique::getcylindre() {
    return this->cylindre;
}

/**
 * \brief Mutateur de l'attribut nomEntreprise
 *
 * \param nouveauNom nouveau nom de l'entreprise
 */
void Thermique::setcylindre(float cylindre) {
    this->cylindre = cylindre;
}