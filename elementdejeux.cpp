#include "elementdejeux.h"
#include "graphics.h"

elementdejeux::elementdejeux():d_nom(),d_x(0),d_y(0)
{

}

elementdejeux::~elementdejeux()
{

}

elementdejeux::elementdejeux(const string &nom, int x, int y): d_nom(nom),d_x(x),d_y(y),a_x{x},a_y{y}
{

}

/*void elementdejeux::affiche() const
{
    setcolor(1);
    fillellipse(300+(d_y)*200,120+(d_x)*150,50,50);
}*/

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
