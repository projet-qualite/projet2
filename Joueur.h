#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include <iostream>
#include "elementdejeux.h"
///#include "grille.h"

using namespace std;
///class Grille;
class Joueur: public elementdejeux
{
    public:
        ///Joueur(Grille* terrain);
        Joueur(Grille* terrain,const string &nom,int x,int y);
        void attraperJoueur();
        virtual void tracer() ;
    private:
        std::string d_nom;
};

#endif // JOUEUR_H
