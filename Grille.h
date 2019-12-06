#ifndef GRILLE_H
#define GRILLE_H
#include "elementdejeux.h"
#include <vector>
#include<iostream>

using namespace std;

class Grille
{
   public:

    Grille(int Long,int Lar);
    //void SetLargeur(int x);
    //void SetLongeur(int x);
    //elementdejeux IlestEn(int x, int y);
    void MettreEn(const elementdejeux& value);
    void afficheGrille()const;
    int GetLargeur()const;
    int GetLongeur()const;

private:
    int d_lg;
    int d_lar;
    vector<vector<elementdejeux> >d_grille;

};

#endif // GRILLE_H
