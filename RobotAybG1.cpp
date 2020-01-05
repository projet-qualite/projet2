#include "RobotAybG1.h"
#include<iostream>
#include "graphics.h"
#include "math.h"


RobotAybG1::RobotAybG1(const string &nom, int x, int y):RobotAyb(nom,x,y)
{
    //ctor
}

void RobotAybG1::up()
{
     if(d_x>0)
    {
        --d_x;
    }

}

void RobotAybG1::affiche() const
{
    setcolor(1);
    fillellipse(300+(d_y)*200,120+(d_x)*150,50,50);
}

void RobotAybG1::down(int dim)
{
    if(d_x<=dim)
    {
        ++d_x;
    }
}

void RobotAybG1::right(int dim)
{
    if(d_y<=dim)
    {
        ++d_y;
    }

}

void RobotAybG1::left()
{
    if(d_y!=0)
    {
        --d_y;
    }
}
void RobotAybG1::deplacement(const Joueur& j,int dim)
{

    if (j.y()==d_y)
        {

        if (j.x()>d_x ) down(dim);

        else if (j.x()<d_x )  up();

        }

    else if (j.x()==d_x)
            {
                if (j.y()>d_y)     right(dim);

                else if (j.y()<d_y)    left();

            }


    else if(abs(d_y-j.y())<abs(d_x-j.x()))
        {

            if(j.x()>d_x)  down(dim);
            else if (j.y()<d_y) up();

        }

     else if(abs(d_x-j.x())<abs(d_y-j.y()))
        {

            if(j.y()>d_y)  right(dim);
            else if (j.y()<d_y)  left();

        }
    else if (abs(d_x-j.x())==abs(d_y-j.y()))
        {

        if(rand()%2==1)
            {

              if(j.x()>d_x) down(dim);

            else if(j.x()<d_x) up();



            }
        else{

          if(j.y()>d_y) right(dim);

            else if(j.y()<d_y)  left();
        }



        }

        }


