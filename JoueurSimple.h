#ifndef JOUEURSIMPLE_H
#define JOUEURSIMPLE_H
#include "joueur.h"


class JoueurSimple: public Joueur
{
    public:
        JoueurSimple(const string& nom, int x, int y);
        void rightup(int dim);
        void leftup();
        void rightdown(int dim);
        void leftdown(int dim);
        virtual void affiche() const;
};

#endif // JOUEURSIMPLE_H
