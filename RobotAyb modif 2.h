#ifndef ROBOTAYB_H
#define ROBOTAYB_H

using namespace std;

class RobotAyb
{
public:
    RobotAyb();
    RobotAyb(int x, int y);
    int x() const;
    int y() const;
    double distance(const RobotAyb& r) const;
    //virtual void setposx()=0;
    //virtual void setposy()=0;
protected:
    int d_x;
    int d_y;

};

#endif // ROBOTAYB_H
