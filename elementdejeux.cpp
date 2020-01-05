#include "elementdejeux.h"
#include "graphics.h"

elementdejeux::elementdejeux():d_nom(),d_x(0),d_y(0)
{

}



elementdejeux::elementdejeux(const string &nom, int x, int y): d_nom(nom),d_x(x),d_y(y),a_x{x},a_y{y}
{

}



void elementdejeux::affiche2() const
{
    cout<<d_nom<<"("<<d_x<<","<<d_y<<")";
}


int elementdejeux::x() const
{
    return d_x;
}

int elementdejeux::y() const
{
    return d_y;
}

string elementdejeux::nom() const
{
    return d_nom;
}
