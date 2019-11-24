#ifndef ROBOT_H
#define ROBOT_H

#include "Point.h"

class robot
{
public:
    robot(const Point& position);
    ~robot();
    Point position() const;
    double distance(const robot& r) const;
    void setAbs(double x);
    void setOrd(double y);

protected:
    Point d_position;

};
#endif // ROBOT_H
