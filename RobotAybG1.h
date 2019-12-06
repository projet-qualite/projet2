#ifndef ROBOTAYBG1_H
#define ROBOTAYBG1_H
#include "RobotAyb.h"
#include<iostream>


class RobotAybG1: public RobotAyb
{
    public:
        RobotAybG1();
        RobotAybG1(const string &nom, int x, int y);
        void up();
        void down();
        void right();
        void left();

};

#endif // ROBOTAYBG1_H
