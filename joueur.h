#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "elementdejeux.h"
#include "graphics.h"
#include "grille.h"

using namespace std;
class Grille;

class Joueur:public elementdejeux
{
    public:
        static int d_score;

        Joueur(const string& nom,int x, int y);
        void up();
        void down();
        void right();
        void left();
        bool mort();
        void setVie();
        int vie() const;
        void setTab(std::vector<elementdejeux*> d_grille);



        //int x() const;
        //int y() const;
        //string nom() const;
        //int dureevie() const;
        //void survivre();


    private:
        std::vector<elementdejeux*> d_joueur;
        int d_vie;
        //int d_y;
        //int d_duree;
};

#endif // JOUEUR_H
