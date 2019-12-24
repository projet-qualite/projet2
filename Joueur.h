#ifndef JOUEUR_H
#define JOUEUR_H
#include <string>
#include "elementdejeux.h"



class Joueur:public elementdejeux
{
    public:
        Joueur();
        Joueur(const std::string& nom);
        virtual void tracer() ;
     /**   virtual void up()       override;
        virtual void down()     override;
        virtual void right()    override;
        virtual void left()     override;*/


};

#endif // JOUEUR_H
