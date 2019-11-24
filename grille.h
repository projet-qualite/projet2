#ifndef GRILLE_H_INCLUDED
#define GRILLE_H_INCLUDED

class Grille{

public:

     Grille(int Long,int Lar);
    void SetLargeur(int x);
    void SetLongeur(int x);
    void afficheGrille()const;
    int GetLargeur()const;
    int GetLongeur()const;

private:

    int D_Longeur,D_largeur;

};

#endif // GRILLE_H_INCLUDED
