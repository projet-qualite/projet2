#include "Debris.h"
#include <stdlib.h>




Debris::Debris(const string &nom, int x, int y): elementdejeux{nom,x,y}
{
    //ctor
}

int Debris::posx() const
{
    return d_x;
}


int Debris::posy() const
{
    return d_y;
}

Debris::~Debris()
{
    //dtor
}

void Debris::affiche() const
{

}
