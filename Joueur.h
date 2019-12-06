#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "elementdejeux.h"

using namespace std;

class Joueur:public elementdejeux
{
    public:
        Joueur();
        Joueur(const string& nom,int x, int y);
        void up();
        void down();
        void right();
        void left();

        virtual void affiche() const;

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
