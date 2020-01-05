#include "Joueur.h"
#include<iostream>


Joueur::Joueur(const string& nom, int x, int y): elementdejeux(nom ,x, y)
{}

void Joueur::up()
{
 if(d_x>0)
    {
        --d_x;
    }
}



void Joueur::down(int dim)
{
 if(d_x<dim)
    {
        ++d_x;
    }

}

void Joueur::right(int dim)
{
if(d_y<dim)
    {
        ++d_y;
    }

}

void Joueur::left()
{
if(d_y!=0)
    {
        --d_y;
    }

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
