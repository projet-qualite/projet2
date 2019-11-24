#include "grille.h"

 Grille::Grille(int Long,int Lar):D_Longeur{Long},D_largeur{Lar}{};

/*void Grille::SetLargeur(int x){
  D_Largeur=x;
}*/

void Grille::SetLongeur(int x){
D_Longeur=x;
}

int Grille::GetLargeur()const{

return D_largeur;
}

int Grille::GetLongeur()const{

return D_Longeur;
}

/*Grille::afficheGrille()const{


for (int i(0); i < 5; i++) {
		for (int j(0); j < 5; j++) {
			if (grille[i][j] == '_' && i == 4)
				cout << " ";
			else
				cout << grille[i][j];
			if (j != 4)
				cout << "|";
			else
				cout << endl;
		}
	}
	cout << endl;


}*/
