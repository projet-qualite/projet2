#include "grille.h"
#include"graphics.h"
#include<iostream>
 using namespace std;

 const int TAILLE_CASE=100;
 ///Constructeur de la Grille
 Grille::Grille(int dimensionX,int dimensionY):D_dimensionX{dimensionX},D_dimensionY{dimensionY}{};

/**
@return la dimension X
*/
int Grille::GetDimensionX()const{

    return D_dimensionX;
}
/**
@return la dimension Y
*/
int Grille::GetDimensionY()const{

    return D_dimensionY;
}

// affichae de la grille
void Grille::afficheGrille()const
{

   int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0,x4=0,y4=0;
for(int i=0;i<D_dimensionY;i++)
{
    y1+=TAILLE_CASE;
    y2=y1;
    y3=y1+TAILLE_CASE;
    y4=y3;
   for(int j=0;j<D_dimensionX;j++)
    {
        x1+=TAILLE_CASE;
        x2=x1+TAILLE_CASE;
        x3=x2;
        x4=x1;
        int T[]={x1,y1,x2,y2,x3,y3,x4,y4,x1,y1};
        drawpoly(5,T);

    }
        x1=0;
        x2=0;x3=0;x4=0;
    }
}

