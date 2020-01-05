#ifndef ELEMENTDEJEUX_H
#define ELEMENTDEJEUX_H
#include<iostream>
#include<string>
#include "grille.h"


using namespace std;
class Grille;
class elementdejeux
{
    public:
        elementdejeux(Grille* terrain);
        virtual void tracer()=0;
        int x()const ;
        int y()const ;
        void deplacerHorizontal(char direction);
        void deplacerVertical  (char direction);
        virtual void attraperJoueur()=0;
        virtual void up();
        virtual void down();
        virtual void right();
        virtual void left();
        void ajouterTerrain(Grille* terrain);

    protected:
        int d_x;
        int d_y;
        Grille* d_terrain;
};

#endif // ELEMENTDEJEUX_H
