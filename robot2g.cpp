#include "robot2g.h"

robot2g::robot2g(const Point& position):robot1g{position}
{

}

void robot2g::diagHautGauche(double x,double y)
{
    d_position.deplacerDe(-x,y);
}

void robot2g::diagBasGauche(double x,double y)
{
    d_position.deplacerDe(-x,-y);
}
void robot2g::diagHautDroit(double x,double y)
{
    d_position.deplacerDe(x,y);
}
void robot2g::diagBasDroit(double x,double y)
{
    d_position.deplacerDe(x,-y);
}
