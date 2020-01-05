#include "RobotAyb.h"
#include<math.h>

#include "RobotAybG1.h"



RobotAyb::RobotAyb(const string &nom, int x,int y): elementdejeux(nom, x, y)
{
    //ctor
}

int RobotAyb::x() const
{
    return d_x;
}
int RobotAyb::y() const
{
    return d_y;
}

/*void RobotAyb::deplacement(const Joueur& j) const
{
    double dx=j.x()-x();
    double dy=j.y()-y();
    if (dx==0 && dy!=0){

        if (dy<0) up();
        else down();

    }
    else
        if(dx!=0 &&dy==0){
         if (dx<0) left();
        else right();

    }
    else {

        if (abs(dx)>abs(dy)) left();
        else right();

    }

}*/
