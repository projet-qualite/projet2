#ifndef ROBOT1G_H
#define ROBOT1G_H
#include "robot.h"

class robot1g:public robot
{
public:
    robot1g(const Point& position);
    void dgauche(double x);
    void ddroit(double x);
    void dhaut(double y);
    void dbas(double y);

};
#endif // ROBOT1G_H
