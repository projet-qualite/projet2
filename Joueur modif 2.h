#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>

using namespace std;

class Joueur
{
    public:
        Joueur();
        Joueur(const string& nom);
        void up();
        void down();
        void right();
        void left();

        int posx() const;
        int posy() const;
        string nom() const;
        int dureevie() const;
        void survivre();


    private:
        string d_nom;
        int d_x;
        int d_y;
        int d_duree;
};

#endif // JOUEUR_H
