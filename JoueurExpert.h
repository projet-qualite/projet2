#ifndef JOUEUREXPERT_H
#define JOUEUREXPERT_H
#include "Joueur.h"


class JoueurExpert : public Joueur
{
    public:
        Joueur(string nom, int x, int y);
        virtual ~Joueur();

};

#endif // JOUEUREXPERT_H
