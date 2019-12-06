#ifndef ROBOTAYB_H
#define ROBOTAYB_H
#include "elementdejeux.h"
#include<string>

using namespace std;

class RobotAyb:public elementdejeux
{
public:
    RobotAyb();
    RobotAyb(const string &nom, int x, int y);
    //int x() const;
    //int y() const;
    double distance(const RobotAyb& r) const;
    //virtual void setposx()=0;
    //virtual void setposy()=0;

};

#endif // ROBOTAYB_H
