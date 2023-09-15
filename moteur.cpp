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

#include "Moteur.h"



using namespace std;


/**
 * \brief Constructeur par default
 * \li Nom = anonyme
 * \li Nom = anonyme    #apres changement pour teste
 * \li Ville = inconnu
 *
 */
Moteur::Moteur() {
    this->puissance = 0;
}

/**
 * \brief Constructeur avec parametres rentres en argument
 *
 * \param nom nom de l'entreprise
 * \param ville ville de l'entreprise
 */
Moteur::Moteur(int puissance) {
    this->puissance = puissance;
}


/**
 * \brief Destructeur
 *
 */
Moteur::~Moteur() {

    cout << "Destrcution de l'entreprise " << endl;

}


/**
 * \brief Constructeur de copie
 *
 * \param entre Objet de type entreprise
 */
Moteur::Moteur(const Moteur& entre)
{
    cout << "Copie de Capitaine" << endl;
    this->puissance = entre.puissance;
}

/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type entreprise
 * \return Nouvelle objet de type entreprise
 */
Moteur& Moteur::operator = (const Moteur& entre)
{
    cout << "Affectation de l'entreprise" << std::endl;
    if (this != &entre)  // Pour éviter que l'on ne se recopie pas...
    {
        this->puissance = entre.puissance;
    }
    return *this;
}



/**
 * \brief Accesseur de l'attribut nomEntreprise
 *
 * \return Nom de l'entreprise
 */
int Moteur::getpuissance(){
    return this->puissance;
}

/**
 * \brief Mutateur de l'attribut nomEntreprise
 *
 * \param nouveauNom nouveau nom de l'entreprise
 */
void Moteur::setpuissance(int puissance) {
    this->puissance = puissance;
}