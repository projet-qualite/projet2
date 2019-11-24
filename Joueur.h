#ifndef JOUEUR_H
#define JOUEUR_H
#include<string>

class Joueur
{
    public:
        Joueur(const string& nom, int x, int y);
        virtual  void up();
        virtual void down();
        virtual void right();
        virtual void left();
        int posx() const;
        int posy() const;
        virtual ~Joueur();

    protected:

    private:
        string d_nom;
        int d_x;
        int d_y;
        void rightup();
        void leftup();
        void rightdown();
        void leftdown;
};

#endif // JOUEUR_H
