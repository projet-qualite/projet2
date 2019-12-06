#include "RobotAyb.h"
#include<math.h>

RobotAyb::RobotAyb():elementdejeux()
{
    //ctor
}

RobotAyb::RobotAyb(const string &nom, int x,int y): elementdejeux(nom, x, y)
{
    //ctor
}

/*int RobotAyb::x() const
{
    return d_x;
}

int RobotAyb::y() const
{
    return d_y;
}
*/
double RobotAyb::distance(const RobotAyb& r) const
{
    double dx=r.x()-x();
    double dy=r.y()-y();
    return sqrt(dx*dx+dy*dy);
}
