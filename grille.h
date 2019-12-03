#ifndef GRILLE_H_INCLUDED
#define GRILLE_H_INCLUDED

class Grille{

public:

        Grille(int dimension);
        int GetDimension()const;
        void afficheGrille()const;



private:

    int D_dimension;

};

#endif // GRILLE_H_INCLUDED
