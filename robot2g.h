#ifndef ROBOT2G_H
#define ROBOT2G_H
#include "robot1g.h"

class robot2g:public robot1g
{
public:
    robot2g(const Point& position);
    void diagHautGauche(double x,double y);
    void diagBasGauche(double x,double y);
    void diagHautDroit(double x,double y);
    void diagBasDroit(double x,double y);

};
#endif // ROBOT1G_H

