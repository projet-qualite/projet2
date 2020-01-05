#include <iostream>
#include <fstream>
#include <string>
#include<math.h>
#include<windows.h>
#include<vector>
#include<typeinfo>
#include"graphics.h"
#include"grille.h"
#include"elementdejeux.h"
#include"Joueur.h"
#include"RobotG1.h"
#include"debris.h"
using namespace std;
const int DIMENSION_X=6;
const int DIMENSION_Y=6;

bool gagner=false;

/** teste si la partie est finie ou pas encore
@param
@return */

bool finPartie(Grille* terrain,Joueur* joueur)
{
    int nbRobot=0;
    int i=0;
    ///1er cas si il y'a plus de robots

    while(i<terrain->d_element.size() && nbRobot==0)
    {
        if(typeid(*(terrain->d_element[i]))==typeid(RobotG1))
        {
            ++nbRobot;

        }
        ++i;
    }
    if(!nbRobot)
    { gagner=true;  return true;}

   ///2e cas si le joueur et le robot ou le débris dans la meme position
    i=0;
    while(i<terrain->d_element.size())
    {
    if((typeid(*(terrain->d_element[i]))!=typeid(Joueur))&&(joueur->x()==terrain->d_element[i]->x())&&(joueur->y()==terrain->d_element[i]->y()))
        {

              return true;    }
        ++i;
    }
        return false;
}


///Fonction principal pour lancer le Jeu
int main()
{

/// Création du terrain
 Grille G(DIMENSION_X,DIMENSION_Y);


/// Création du joueur et l'ajouter sur la grille
 Joueur joueur(&G,"Player",150,350);

/// Création des Robot et l'ajouter sur la grille

 RobotG1 robot1(&G,650,150);

 RobotG1 robot2(&G,650,650);

 RobotG1 robot3(&G,150,150);

 RobotG1 robot4(&G,150,650);

 ///Création des debris
 debris debris1(&G,350,250);
 debris debris2(&G,550,550);

 ///Affichage du terrain et du jeu
 ///Affichage en pleine écran
DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);
DWORD screenHeight=GetSystemMetrics(SM_CXSCREEN);
 opengraphsize(screenWidth,screenHeight);

    G.afficheGrille();
///Tracer tout les elements que contient le terrain
    G.tracerTout();

/// while((robot1->x()!=joueur->x() || robot1->y()!=joueur->y())&&(robot2->x()!=joueur->x() || robot2->y()!=joueur->y()))
bool test;
    G.croisement();
    G.afficheGrille();
    G.tracerTout();
while(1)
  {
      if(finPartie(&G,&joueur))
        break;

    ///Déplacer le joueur à droite
    if(GetAsyncKeyState(VK_RIGHT))
     {
        if(finPartie(&G,&joueur)) break;
        joueur.right();
        G.tracerTout();
        G.attaqueDesRobots();
        G.tracerTout();
        G.afficheGrille();

      }
    if(GetAsyncKeyState(VK_LEFT))
      {
        if(finPartie(&G,&joueur)) break;
        joueur.left();
        G.tracerTout();
        G.attaqueDesRobots();
        G.tracerTout();
        G.afficheGrille();

      }
    if(GetAsyncKeyState(VK_UP))
      {
        if(finPartie(&G,&joueur)) break;
        joueur.up();
        G.tracerTout();
        G.attaqueDesRobots();
        G.tracerTout();
        G.afficheGrille();
     }
    if(GetAsyncKeyState(VK_DOWN))
      {
       if(finPartie(&G,&joueur)) break;
        joueur.down();
        G.tracerTout();
        G.attaqueDesRobots();
        G.tracerTout();
        G.afficheGrille();
      }

     if(finPartie(&G,&joueur)) break;
 }

    G.afficheGrille();
    G.tracerTout();
    getch();
    closegraph();
     if(gagner)
     {
         cout<<"Felicitations vous avez gagne"<<endl;
     }
     else
     {   cout<< "\nFin de partie, joueur meurt"<<endl; }

}












