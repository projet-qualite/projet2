#ifndef GRILLE_H_INCLUDED
#define GRILLE_H_INCLUDED

class Grille{

public:

        Grille(int dimensionX,int dimensionY);
        int GetDimensionX()const;
        int GetDimensionY()const;

        void afficheGrille()const;



private:

    int D_dimensionX, D_dimensionY;

};

#endif // GRILLE_H_INCLUDED
