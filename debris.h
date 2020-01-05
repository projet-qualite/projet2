#ifndef DEBRIS_H
#define DEBRIS_H
#include "elementdejeux.h"
#include<iostream>


class debris:public elementdejeux
{
    public:
        debris(Grille* terrain,int x,int y );
        virtual void tracer();
        void attraperJoueur();

    private:
        int d_coteGX;
        int d_coteGY;
        int d_coteDX;
        int d_coteDY;
};

#endif // DEBRIS_H
