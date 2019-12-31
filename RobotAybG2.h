#ifndef ROBOTAYBG2_H
#define ROBOTAYBG2_H
#include "RobotAybG1.h"


class RobotAybG2:public RobotAybG1
{
    public:
        RobotAybG2(const string &nom, int x, int y);
        void rightup();
        void leftup();
        void rightdown();
        void leftdown();


};

#endif // ROBOTAYBG2_H
