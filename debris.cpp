#include "debris.h"
#include<iostream>
#include"graphics.h"

const int DISTANCE_ENTRE_CENTRE=30;

debris::debris(Grille* terrain,int x,int y):elementdejeux(terrain)
{
    d_x=x; d_y=y;
    d_coteGX=d_x-DISTANCE_ENTRE_CENTRE;
    d_coteGY=d_y-DISTANCE_ENTRE_CENTRE;
    d_coteDX=d_x+DISTANCE_ENTRE_CENTRE;
    d_coteDY=d_y+DISTANCE_ENTRE_CENTRE;
}
///Tracer le débris
void debris::tracer()
{
    setcolor(10);
    bar(d_coteGX,d_coteGY,d_coteDX,d_coteDY);
}

void debris::attraperJoueur()
{

}
