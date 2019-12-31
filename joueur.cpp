#include "Joueur.h"
#include<iostream>
#include "grille.h"

class Grille;

int Joueur::d_score=0;


Joueur::Joueur(const string& nom, int x, int y): elementdejeux(nom ,x, y),d_joueur{},d_vie(1)
{
    //d_score=0;
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
    ++d_score;

}



void Joueur::down()
{
    //if(d_x== taillegrille)
    //{
     //   cout<<"Impossible de sortir de la grille"<<endl;
   // }else
   // {
        ++d_x;
        ++d_score;
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
        ++d_score;
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
        ++d_score;
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

int Joueur::vie() const
{
    return d_vie;
}

bool Joueur::mort()
{

        return d_vie==0;
}

void Joueur::setVie()
{
    for(int i=1;i<d_joueur.size();++i)
    {

            if(d_joueur[0]->x()==d_joueur[i]->x() && d_joueur[0]->y()==d_joueur[i]->y())
            {
                d_vie=0;

            }
    }
}

void Joueur::setTab(std::vector<elementdejeux*> d_grille)
{
    d_joueur=d_grille;
}

