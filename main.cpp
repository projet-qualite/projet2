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
#include<typeinfo>


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
                     fichier <<n;
                      }

                   else
                   {
                      cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
                   }

}
int finPartie(Grille* terrain,Joueur* joueur)
{
    int nbRobot=0;
    int fin=1;
    int i=0;
    ///1er cas si il y'a plus de robots

    while(i<terrain->tab.size() && nbRobot==0)
    {
        if(typeid(*(terrain->tab[i]))==typeid(RobotAybG1))
        {
            ++nbRobot;
        }
        ++i;
    }
    if(nbRobot==0) fin=1;

   ///2e cas si le joueur et le robot ou le débris dans la meme position
    i=0;
    while(i<terrain->tab.size())
    {
        if((typeid(*(terrain->tab[i]))!=typeid(Joueur))&&(joueur->x()==terrain->tab[i]->x())&&(joueur->y()==terrain->tab[i]->y()))
            {return true;}
        ++i;
    }

}

void creerPartie()
{

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
                modifierFichier(choixDim);
                break;

    default : cout<<" Choix invalide " <<endl;

    }

    }while(rep!=1&&rep!=2);

        Grille *g=new Grille{dim,dim};
        float temps;
        clock_t t1,t2;
        JoueurSimple *j=new JoueurSimple("J1",2,3);
        g->MettreEn(j);
        RobotAybG1 *r=new RobotAybG1{"R1",dim-1,dim-2};
        g->MettreEn(r);
        RobotAybG1 *r1=new RobotAybG1{"R2",1,0};
        g->MettreEn(r1);
        Debris *D =new Debris("D1",3,2);
        g->MettreEn(D);
        char choix;
        t1 = clock();

        g->afficheGrille2();

       do{
            cout<<"[ Deplacer le joueur ]"<<endl;
            cout<<" r-------------------: A  droite "<<endl;
            cout<<" l-------------------: A  gauche "<<endl;
            cout<<" u-------------------: En  haut "<<endl;
            cout<<" d-------------------: En  bas "<<endl;
            cin>>choix;
            switch(choix)
            {
                case 'r': j->right(dim); r->deplacement(*j,dim);r1->deplacement(*j,dim);g->croisement();
                break;
                case 'l': j->left();     r->deplacement(*j,dim);r1->deplacement(*j,dim);g->croisement();
                break;
                case 'u':  j->up();       r->deplacement(*j,dim);r1->deplacement(*j,dim);g->croisement();
                break;
                case 'd':  j->down(dim);  r->deplacement(*j,dim);r1->deplacement(*j,dim);g->croisement();
                break;
            }



            g->afficheGrille2();


            }while(finPartie(g,j));
                 t2 = clock();
                 temps = (float)(t2-t1)/CLOCKS_PER_SEC;
             for (int i=0;i<g->tab.size();++i){

                if(typeid(*(g->tab[i]))==typeid(RobotAybG1)){

                    cout<<"corrdonnees \n";
                    cout<<g->tab[i]->x()<<"  "<<g->tab[i]->y()<<"\n";
                }

            }
            for (int i=0;i<g->tab.size();++i){

                if(typeid(*(g->tab[i]))==typeid(Debris)){

                    cout<<"corrdonnees \n";
                    cout<<g->tab[i]->x()<<"  "<<g->tab[i]->y()<<"\n";
                }

            }
            printf(" votre score est de  = %f secondes \n", temps);


}


int main()
{
    creerPartie();

    return 0;
}
