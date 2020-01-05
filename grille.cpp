#include "grille.h"
#include"graphics.h"
#include"RobotG1.h"
#include"Joueur.h"
#include"debris.h"
#include<iostream>
#include<typeinfo>
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
        setcolor(15);
        drawpoly(5,T);

    }
        x1=0;
        x2=0;x3=0;x4=0;
    }
}
///ajout d'un joueur

void Grille::ajouterJoueur(Joueur* joueur)
{
    d_joueur=joueur;
}
/// getter du joueur
Joueur* Grille::joueur()
{
    return d_joueur;
}
void Grille::ajouterElement(elementdejeux* elem)
{
    d_element.push_back(elem);
}
///fonction de croisement
void Grille::croisement()
{
  for(int i=0;i<d_element.size();++i)
    {
        elementdejeux* rb=d_element[i];
        int x1=rb->x(); int y1=rb->y();
    if(typeid(*rb)==typeid(RobotG1))
     {
        for(int j=i+1;j<d_element.size();++j)
         {
            if(x1==d_element[j]->x() && y1==d_element[j]->y())
             {
                ///si le robot se croisent avec un débris il disparait
                if(typeid(*(d_element[j]))==typeid(debris))
                    {
                     d_element.erase(d_element.begin()+i);
                     --j;
                    }
                else if(typeid(*(d_element[j]))==typeid(RobotG1))
                    {
                        ///int posRb1=i;   int posRb2=j;
                        ///terrain->d_element.erase(terrain->d_element.begin()+posRb1);
                        d_element.erase(d_element.begin()+j);
                        debris* debris3=new debris(this,x1,y1);
                        --j;
                    }
             }
           }
        }

    }
}
void Grille::attaqueDesRobots()
{
    for(auto robot:d_element)
     {
        if(typeid(*robot)==typeid(RobotG1))
        {
            robot->attraperJoueur();
            croisement();
        }

     }
}
void Grille::tracerTout()
{
///    d_joueur->tracer();
    for(int i=0;i<d_element.size();++i)    ///for(int i=0;i<d_terrain->d_element.size();i++)
        {
            d_element[i]->tracer();
        }
}


