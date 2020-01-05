#ifndef GRILLE_H_INCLUDED
#define GRILLE_H_INCLUDED
#include<vector>
#include"elementdejeux.h"
///#include"Joueur.h"
class elementdejeux;
class Joueur;
class Grille{

public:
        Grille(int dimensionX,int dimensionY);
        int GetDimensionX()const;
        int GetDimensionY()const;
        void afficheGrille()const;
        void ajouterElement(elementdejeux* elem);
        void croisement();
        void attaqueDesRobots();
        void tracerTout();
        ///Tableau contenat les robots et les debris
        std::vector<elementdejeux*> d_element;
        void ajouterJoueur(Joueur* joueur);
        Joueur* joueur();


private:
    int D_dimensionX, D_dimensionY;
    Joueur* d_joueur;
};

#endif // GRILLE_H_INCLUDED
