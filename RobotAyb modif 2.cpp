#include "RobotAyb.h"
#include<math.h>

RobotAyb::RobotAyb():d_x(0),d_y(0)
{
    //ctor
}

RobotAyb::RobotAyb(int x,int y):d_x(x),d_y(y)
{
    //ctor
}

int RobotAyb::x() const
{
    return d_x;
}

int RobotAyb::y() const
{
    return d_y;
}

double RobotAyb::distance(const RobotAyb& r) const
{
    double dx=r.x()-x();
    double dy=r.y()-y();
    return sqrt(dx*dx+dy*dy);
}
