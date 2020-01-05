#include"graphics.h"
#include "RobotG1.h"
#include<iostream>
#include<math.h>
#include"Joueur.h"
const int POSITION_X=150;
const int POSITION_Y=150;
const int RAYON=30;
const int PAS_DEPLACEMENT=100;


///Constructeur du Robot avec terrain
RobotG1::RobotG1(Grille* terrain,int dimX,int dimY):elementdejeux(terrain)
{       /// d_x=POSITION_X+dimX*PAS_DEPLACEMENT;;
       d_x=dimX;
       d_y=dimY;
}

///tracer un robot de premiere generation
void RobotG1::tracer()
{
    setcolor(14);
    circle(d_x,d_y,RAYON);
}
///detecter la position du joueur
void RobotG1::detecterPosition(int&x,int &y)
{
    x=d_terrain->joueur()->x();
    y=d_terrain->joueur()->y();
}
///attraper le joueur
void RobotG1::attraperJoueur()
{
    int x,y;
    detecterPosition(x,y);
  ///Si le Robot et le Joueur dans la même colonne
    if(x==this->x())
    {
        if(y>this->y())
            down();
        else if(y<this->y())
            up();
    }
  ///Si le Robot et le Joueur dans la même ligne
    else if(y==this->y())
    {
        if(x>this->x())
            right();
        else if(x<this->x())
            left();
    }
  ///Choisir le mieux chemin pour suivre le Joueur
  ///L'attrapper suivant les lignes
    else if(abs(this->x()-x)>abs(this->y()-y))
    {
        if(x>this->x())
            right();
        else if(x<this->x())
            left();
    }
    ///L'attrapper suivant les colonnes
    else if(abs(this->x()-x)<abs(this->y()-y))
    {
        if(y>this->y())
            down();
        else if(y<this->y())
            up();
    }
    ///Choisir un chemin au hasard si la distance est pareil entre les X et les Y
    else if(abs(this->x()-x)==abs(this->y()-y))
    {
      if(rand()%2==1)
           {
            if(y>this->y())
                down();
            else if(y<this->y())
                up();
           }

        else
            {
            if(x>this->x())
                right();
            else if(x<this->x())
                left();
            }
    }



}

