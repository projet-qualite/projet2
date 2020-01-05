#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "elementdejeux.h"
#include "graphics.h"

using namespace std;

class Joueur:public elementdejeux
{
    public:
        Joueur(const string& nom,int x, int y);
        void up();
        void down(int dim);
        void right(int dim);
        void left();
        //int dureevie() const;
        //void survivre();
        //int d_duree;
};

#endif // JOUEUR_H
