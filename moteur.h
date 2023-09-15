

#ifndef MOTEUR_H
#define MOTEUR_H
#include <iostream>
#include <string>


using namespace std;



class Moteur
{

private:
 
    int puissance;
    
   
protected:



public:

    Moteur();
    ~Moteur();
    Moteur(const Moteur& entre);
    Moteur& operator = (const Moteur& entre);

    Moteur(int puissance);

    int getpuissance();
    void setpuissance(int puissance);

    

};

#endif