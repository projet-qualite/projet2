#include "RobotAybG2.h"

RobotAybG2::RobotAybG2():RobotAybG1()
{
    //ctor
}

RobotAybG2::RobotAybG2(const string &nom, int x, int y):RobotAybG1(nom,x,y)
{
    //ctor
}

void RobotAybG2::rightup()
{
    this->up();
    this->right();
}

void RobotAybG2::leftup()
{
    this->up();
    this->left();
}

void RobotAybG2::rightdown()
{
    this->down();
    this->right();
}

void RobotAybG2::leftdown()
{
    this->down();
    this->left();
}



