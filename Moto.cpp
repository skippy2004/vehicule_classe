/*****************************************************************//**
 * \file   Mission.cpp
 * \brief  Definition de la classe Mission
 *
 * \author Pierre
 * \version 0.1
 * \date   June 2023
 *
 * Programme Cpp permettant de creer des objets pour décrire les stages
 *********************************************************************/

#include "Mission.h"



using namespace std;


/**
 * \brief Constructeur par default
 * \li Nom = anonyme
 * \li Ville = inconnu
 *
 */
Mission::Mission() {
    cout << "Construction de la mission " << endl;
}


Mission::~Mission() {

    cout << "Destruction de la mission " << endl;

}

Mission::Mission(const Mission& mission) {
    cout << "Copie de Capitaine" << endl;
    this->nomMission = mission.nomMission;
    this->villeMission = mission.villeMission;

}



/**
 * \brief Operateur d'affectation
 *
 * \param entre Objet de type entreprise
 * \return Nouvelle objet de type entreprise
 */
Mission& Mission::operator=(const Mission& mission) {
    cout << "Affectation de la mission" << std::endl;
    if (this != &mission)  // Pour éviter que l'on ne se recopie pas...
    {
        this->nomMission = mission.nomMissione;
        this->villeMission = mission.villeMission;
    }
    return *this;
}
Mission(int nbPersonne, std::string descriptifMission, int nbHeure, Entreprise* entrepriseMission) {
    int nbPersonne = 0;
    string descriptifMission = "je ne sait pas";
    int nbHeure = 0;
}