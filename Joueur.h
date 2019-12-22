#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "elementdejeux.h"

using namespace std;

class Joueur:public elementdejeux
{
    public:
        Joueur();
        Joueur(const string& nom);
        virtual void afficheJoueur() const;
        virtual void up()       override;
        virtual void down()     override;
        virtual void right()    override;
        virtual void left()     override;


};

#endif // JOUEUR_H
