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
        void down();
        void right();
        void left();



        //int x() const;
        //int y() const;
        //string nom() const;
        //int dureevie() const;
        //void survivre();


    //private:
        //string d_nom;
        //int d_x;
        //int d_y;
        //int d_duree;
};

#endif // JOUEUR_H
