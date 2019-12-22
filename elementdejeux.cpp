#include "elementdejeux.h"

const int POSITION_X=150;
const int POSITION_Y=150;



elementdejeux::elementdejeux():d_nom()
{}

elementdejeux::elementdejeux(const string &nom): d_nom(nom)
{}

void elementdejeux::affiche() const
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
