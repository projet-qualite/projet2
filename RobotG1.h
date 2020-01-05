#ifndef ROBOTAYBG1_H
#define ROBOTAYBG1_H
#include "elementdejeux.h"
#include<iostream>

///class Grille;
class RobotG1: public elementdejeux
{
    public:
        ///Créer les robots à l'aide des dimensions de la grille
        RobotG1(Grille* terrain,int dimX, int dimY);
        virtual void tracer();
        ///detecter la position du joueur
        void detecterPosition(int &x,int &y);
        void attraperJoueur();
};

#endif // ROBOTAYBG1_H
