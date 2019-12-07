#include "Debris.h"
#include <stdlib.h>


Debris::Debris(): d_x(rand()%5+3),d_y(rand()%5)
{
    //ctor
}

Debris::Debris(int x, int y): d_x(x),d_y(y)
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
