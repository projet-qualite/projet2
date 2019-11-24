#include "Debris.h"

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
