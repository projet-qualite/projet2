#ifndef JOUEURSIMPLE_H
#define JOUEURSIMPLE_H
#include "Joueur.h"


class JoueurSimple: public Joueur
{
    public:
        JoueurSimple();
        JoueurSimple(const string& nom, int x, int y);
        void rightup();
        void leftup();
        void rightdown();
        void leftdown();
};

#endif // JOUEURSIMPLE_H
