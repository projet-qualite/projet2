#include "robot1g.h"

robot1g::robot1g(const Point& position):robot{position}
{

}

void robot1g::dgauche(double x)
{
    setAbs(-x);
}
void robot1g::ddroit(double x)
{
    setAbs(x);
}

void robot1g::dhaut(double y)
{
    setOrd(y);
}

void robot1g::dbas(double y)
{
    setOrd(-y);
}
