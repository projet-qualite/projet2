#include "RobotAybG2.h"


RobotAybG2::RobotAybG2(const string &nom, int x, int y):RobotAybG1(nom,x,y)
{
    //ctor
}

void RobotAybG2::rightup(int dim)
{
    this->up();
    this->right(dim);
}

void RobotAybG2::leftup()
{
    this->up();
    this->left();
}

void RobotAybG2::rightdown(int dim)
{
    this->down( dim);
    this->right(dim);
}

void RobotAybG2::leftdown(int dim)
{
    this->down( dim);
    this->left();
}
