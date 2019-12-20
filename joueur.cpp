#include "Joueur.h"
#include<iostream>


Joueur::Joueur(const string& nom, int x, int y): elementdejeux(nom ,x, y)
{}

void Joueur::up()
{
    if(d_x==0)
    {
        cout<<"Impossible de sortir de la grille"<<endl;
    }else
    {
        --d_x;
    }
}



void Joueur::down()
{
    //if(d_x== taillegrille)
    //{
     //   cout<<"Impossible de sortir de la grille"<<endl;
   // }else
   // {
        ++d_x;
   //}
}

void Joueur::right()
{
    //if(d_y==taillegrille)
   // {
     //   cout<<"Impossible de sortir de la grille"<<endl;
    //}else
    //{
        ++d_y;
    //}
}

void Joueur::left()
{
    //if(d_y==0)
    //{
      //  cout<<"Impossible de sortir de la grille"<<endl;
    //}else
    //{
        --d_y;
    //}
}

/*void Joueur::rightup()
{
    this->up();
    this->right();
}
void Joueur::leftup()
{
    this->up();
    this->left();
}
void Joueur::rightdown()
{
    this->down();
    this->right();
}
void Joueur::leftdown()
{
    this->down();
    this->left();
}*/

/*int Joueur::x() const
{
    return d_x;
}
int Joueur::y() const
{
    return d_y;
}*/

/*int Joueur::dureevie() const
{
    return d_duree;
}
void Joueur::survivre()
{
    d_duree+=d_duree;
}*/


/*void Joueur::affiche() const
{
    elementdejeux::affiche();
    //cout<<"et a survécu"<<d_duree<<"fois"<<endl;
}*/
