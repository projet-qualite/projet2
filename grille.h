#ifndef GRILLE_H_INCLUDED
#define GRILLE_H_INCLUDED

#include <vector>
#include "elementdejeux.h"
#include "joueur.h"

class Grille{

public:

        Grille(int dimensionX,int dimensionY);
        ~Grille();
        int GetDimensionX()const;
        int GetDimensionY() const;
        void afficheGrille()const;
        void afficheGrille2() const;
        void creerDebris();
        void MettreEn(elementdejeux* value);
        std::vector<elementdejeux*> tab() const;
        friend class Joueur;



private:

    int D_dimensionX,D_dimensionY;
    std::vector<elementdejeux*> d_grille;


};

#endif // GRILLE_H_INCLUDED

