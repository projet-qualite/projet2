#include "grille.h"

 Grille::Grille(int Long,int Lar):D_Longeur{Long},D_largeur{Lar}{};

/*void Grille::SetLargeur(int x){
  D_Largeur=x;
}*/

void Grille::SetLongeur(int x){
D_Longeur=x
}

int Grille::GetLargeur()const{

return D_largeur;
}

int Grille::GetLongeur()const{

return D_Longeur;
}

/*Grille::afficheGrille()const{




}*/
