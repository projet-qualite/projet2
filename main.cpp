#include <iostream>
#include <fstream>
#include <string>
#include"grille.h"
using namespace std;

static int dim[2];

void LireFichier(){

 ifstream fichier("projet.txt");

   if(fichier)
   {
       string ligne;

      int i=0;
      while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
      {
          dim[i]=std::stoi( ligne );
         ++i;

      }
      for( i=0;i<2;i++){cout<<dim[i]<<endl;}
   }
   else
   {
      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }

}
int main()
{

    LireFichier();
    Grille(dim[0],dim[1]);
   return 0;


}
/*char grille[5][5];

	for (int i(0); i < 5; i++) {
		for (int j(0); j < 5; j++) {
			grille[i][j] = '_';
		}
	}
	//  affichage grille
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

