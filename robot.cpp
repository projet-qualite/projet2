#include "robot.h"

robot::robot(const Point& position):d_position{position}
{

}

robot::~robot()
{

}

Point robot::position() const
{
    return d_position;
}

double robot::distance(const robot& r) const
{
    return position().distance(r.position());
}

void robot::setAbs(double x)
{
    d_position.deplacerDe(x,0);
}
void robot::setOrd(double y)
{
    d_position.deplacerDe(0,y);
}
