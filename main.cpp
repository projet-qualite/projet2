#include <iostream>
#include <fstream>
#include <string>
#include<windows.h>
#include"graphics.h"
#include"grille.h"
using namespace std;
/*
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
*/
int main()
{
    /*
    int rep;
do{
    cout<<" pour continuer tapez 1 "<<endl<<" pour commencer une nouvelle partie tapez 2 "<<endl;
    cin>>rep;
    switch(rep){

    case 1 :
                LireFichier();
                Grille{dim};

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
   return 0;
*/Grille G(4,4);
int x=250,y=150;

 opengraphsize(1800,900);

 /*while(1)
 {

 if(GetAsyncKeyState(VK_RIGHT))
 {

   */
    //x+=100;
    G.afficheGrille();
    circle(x,y,20);
    while(1)
    {
    if(GetAsyncKeyState(VK_RIGHT))
    {
        for(int i=0;i<100;i++)
        {
        G.afficheGrille();
        circle(++x,y,20);
        delay(1);
        cleardevice();
        }
            circle(x,y,20);
    G.afficheGrille();
    }
    if(GetAsyncKeyState(VK_LEFT))
    {
        for(int i=0;i<100;i++)
        {
        G.afficheGrille();
        circle(--x,y,20);
        delay(1);
        cleardevice();
        }
            circle(x,y,20);
    G.afficheGrille();
    }
    if(GetAsyncKeyState(VK_UP))
    {
        for(int i=0;i<100;i++)
        {
        G.afficheGrille();
        circle(x,--y,20);
        delay(1);
        cleardevice();
        }
            circle(x,y,20);
    G.afficheGrille();
    }
    if(GetAsyncKeyState(VK_DOWN))
    {
        for(int i=0;i<100;i++)
        {
        G.afficheGrille();
        circle(x,++y,20);
        delay(1);
        cleardevice();
        }
            circle(x,y,20);
    G.afficheGrille();
    }

    }

  //  getch();
    //closegraph();

 }
 /*
 cleardevice();
 }




 cleardevice();


 }*/





