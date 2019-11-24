#include "Joueur.h"

Joueur::Joueur(string nom, int x, int y): d_nom(nom), d_x(x), d_y(y)
{
    //ctor
}

void Joueur::up()
{
    --d_x;
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

void Joueur::rightup()
{
    --d_x;
    ++d_y;
}

void Joueur::leftup()
{
    --d_x;
    --d_y;
}

void Joueur::rightdown()
{
    ++d_x;
    ++d_y;
}

void Joueur::leftdown()
{
    ++d_x;
    --d_y;
}

int Joueur::posx() const
{
    return d_x;
}


int Joueur::posy() const
{
    return d_y;
}

Joueur::~Joueur()
{
    //dtor
}
