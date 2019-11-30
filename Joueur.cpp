#include "Joueur.h"
#include<iostream>

Joueur::Joueur(): d_nom(), d_x(0), d_y(0)
{

}


Joueur::Joueur(const string& nom): d_nom(nom), d_x(0), d_y(0)
{

}

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

void Joueur::rightup()
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
}

int Joueur::posx() const
{
    return d_x;
}


int Joueur::posy() const
{
    return d_y;
}


