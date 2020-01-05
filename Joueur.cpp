#include "Joueur.h"
#include<iostream>
#include"graphics.h"
#include"grille.h"
const int POSITION_X=150;
const int POSITION_Y=150;
const int RAYON_JOUEUR=20;


///constructeur du Joueur avec son terrain et son nom

Joueur::Joueur(Grille* terrain,const string &nom,int x,int y):elementdejeux{terrain}
{
    ///d_terrain=terrain;
    d_nom=nom;
     d_x=x;    d_y=y;
    d_terrain->ajouterJoueur(this);
}

/** Afficher un joueur comme un cercle */

void Joueur::tracer()
{
    setcolor(15);
    circle(d_x,d_y,RAYON_JOUEUR);
}

void Joueur::attraperJoueur()
{

}


