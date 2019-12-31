#ifndef JOUEURSIMPLE_H
#define JOUEURSIMPLE_H
#include "joueur.h"


class JoueurSimple: public Joueur
{
    public:
        JoueurSimple(const string& nom, int x, int y);
        void rightup();
        void leftup();
        void rightdown();
        void leftdown();
        virtual void affiche() const;
};

#endif // JOUEURSIMPLE_H
