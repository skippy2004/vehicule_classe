#include <iostream>
#include "Electrique.h"
#include "Thermique.h"
#include "Moteur.h"



int main()
{
	Thermique* peugeot = new Thermique(20);
	cout << peugeot->getcylindre() << endl;
	//ADP->setVilleEntreprise("paris");
	cout << endl;

	Electrique* tesla = new Electrique(13);
	cout << tesla->gettensionMax() << endl;


	peugeot->setpuissance(32);
	peugeot->setcylindre(15);
	cout << endl;

	tesla->setpuissance(44);
	tesla->settensionMax(64);
	cout << endl;
	cout << endl;

	cout << tesla->getpuissance() << endl;
	cout << tesla->gettensionMax() << endl;

	cout << endl;

	cout << peugeot->getpuissance() << endl;
	cout << peugeot->getcylindre() << endl;

	cout << endl;

}