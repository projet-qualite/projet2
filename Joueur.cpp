#include "Joueur.h"
#include<iostream>
#include"graphics.h"
const int POSITION_X=150;
const int POSITION_Y=150;
const int RAYON=30;

Joueur::Joueur(): elementdejeux()
{}

Joueur::Joueur(const string& nom): elementdejeux(nom)
{}
/** Afficher un joueur comme un cercle */

void Joueur::tracer()
{
    circle(d_x,d_y,RAYON);
}

/**void Joueur::up()
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
        ++d_x;
}

void Joueur::right()
{
        ++d_y;
}

void Joueur::left()
{
        --d_y;
}
*/

