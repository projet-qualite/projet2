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
    int x,y;
    int xj,yj;
    int i=0;
    string nom;
    cout<<"Dimension de la grille : ";
    cin>>x;
    cin>>y;
    Grille g{x,y};

    cout<<"Entrer la position du joueur "<<endl;
        cin>>xj;
        cin>>yj;
        cout<<"Entrer le nom du joueur "<<endl;
        cin>>nom;
        JoueurSimple j{nom,xj,yj};
        g.MettreEn(&j);


        cout<<"Entrer le nom du Robot 1 "<<endl;
        cin>>nom;

        RobotAybG1 r{"kanga",x-1,y-2};
        g.MettreEn(&r);

        cout<<"Entrer le nom du Robot 2 "<<endl;
        cin>>nom;
        RobotAybG1 r2{nom,x-3,y-2};
        g.MettreEn(&r2);



        int q=1;
        char choix;

    do{
            j.setTab(g.tab());
            g.creerDebris();
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
            j.setVie();


            ++i;

    }while(!(j.mort()));

    cout<<"[---Partie Terminée---]"<<endl;
    cout<<"Votre score est : "<<j.d_score;
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
