#include <iostream>
#include <fstream>
#include <string>
#include"grille.h"
#include "graphics.h"
#include <iostream>
#include "elementdejeux.h"
#include "joueur.h"
#include "JoueurSimple.h"
#include "RobotAyb.h"
#include "RobotAybG1.h"
#include "RobotAybG2.h"
#include "debris.h"
#include <stdio.h>
#include <time.h>


using namespace std;

static int dim;

void LireFichier(){

 ifstream fichier("projet.txt");

   if(fichier)
   {
       string ligne;


      while(getline(fichier, ligne))
      {
          dim=std::stoi( ligne );
      }

   }
   else
   {
      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
   }

}
void modifierFichier(int n){
            ofstream fichier("projet.txt");

                   if(fichier)
                   {
                     fichier <<n ;
                      }

                   else
                   {
                      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
                   }

}

void creerPartie()
{
    /*int x,y;
    int nb;
    string nom;
    cout<<"Dimension de la grille : ";
    cin>>x;
    cin>>y;*/
    int rep;
do{
    cout<<" pour continuer tapez 1 "<<endl<<" pour commencer une nouvelle partie tapez 2 "<<endl;
    cin>>rep;
    switch(rep){

    case 1 :
                LireFichier();

                break;

    case 2 :
                int choixDim;
                do{
                cout<<" veuillez choisir la dimension du terrain "<<endl;

                cin>>choixDim;
                }while(choixDim<3);
                modifierFichier(choixDim);

                break;

    default : cout<<" Choix invalide " <<endl;

    }

    }while(rep!=1&&rep!=2);

    Grille g{dim,dim};
   float temps;
    clock_t t1, t2;

string nom;
        cout<<"Entrer le nom du Robot 1 "<<endl;
        cin>>nom;

        RobotAybG1 r{nom,dim-1,dim-2};
        g.MettreEn(&r);

        cout<<"Entrer le nom du Robot 2 "<<endl;
        cin>>nom;
        RobotAybG1 r2{nom,dim-3,dim-2};
        g.MettreEn(&r2);
int x,y;
    do{
        cout<<"Entrer la position du joueur "<<endl;
        cin>>x;
        cin>>y;
      }while(x>dim||y>dim);//pour ne pas depaser la dim de la grille

        cout<<"Entrer le nom du joueur "<<endl;
        cin>>nom;
        JoueurSimple j{nom,x,y};
        g.MettreEn(&j);
        int q=1;
        char choix;
        t1 = clock();
    do{
            g.afficheGrille2();

            cout<<"[Deplacer le joueur]"<<endl;
            cout<<"r-------------------: A droite"<<endl;
            cout<<"l-------------------: A gauche"<<endl;
            cout<<"u-------------------: En haut"<<endl;
            cout<<"d-------------------: En bas"<<endl;
            cin>>choix;
            switch(choix)
            {
                case 'r': j.right();
                break;
                case 'l': j.left();
                break;
                case 'u': j.up();
                break;
                case 'd': j.down();
                break;
            }
            //cleardevice();
            g.afficheGrille2();
            do{
                cout<<"Voulez vous une autre partie ? (Oui : 1 | Non : 0)"<<endl;
                cin>>q;
            }while(q!=0 && q!=1);
            t2 = clock();
            temps = (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("votre score est de  = %f secondes", temps);
    }while(q!=0);
}


int main()
{

    /*Grille gr(5,5);
    RobotAybG1 r1{"fry",1,0};
    gr.MettreEn(&r1);
    RobotAybG1 r2{"morrel",0,0};
    gr.MettreEn(&r2);
    RobotAybG1 r4{"lito",4,0};
    gr.MettreEn(&r4);
    JoueurSimple j1{"Ayoub",3,2};
    gr.MettreEn(&j1);
    int q=0;*/
    /*while(q<4)
    {
        gr.afficheGrille();
        r4.right();
        q++;
        cleardevice();
        gr.afficheGrille();
    }*/
    creerPartie();

    return 0;
}
