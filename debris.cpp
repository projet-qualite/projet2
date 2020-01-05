#include "Debris.h"
#include <stdlib.h>



Debris::Debris(const string &nom,int x, int y):elementdejeux(nom,x,y)
{
}

int Debris::posx() const
{
    return d_x;
}


int Debris::posy() const
{
    return d_y;
}

