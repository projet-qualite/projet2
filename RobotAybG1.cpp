#include "RobotAybG1.h"
#include<iostream>
#include "graphics.h"


RobotAybG1::RobotAybG1(const string &nom, int x, int y):RobotAyb(nom,x,y)
{
    //ctor
}

void RobotAybG1::up()
{
    if(d_x==0)
    {
        cout<<"Impossible de sortir de la grille"<<endl;
    }else
    {
        --d_x;
    }

}

void RobotAybG1::affiche() const
{
    setcolor(1);
    fillellipse(300+(d_y)*200,120+(d_x)*150,50,50);
}

void RobotAybG1::down()
{
    //if(d_x== taillegrille)
    //{
     //   cout<<"Impossible de sortir de la grille"<<endl;
   // }else
   // {
        ++d_x;
   //}
}

void RobotAybG1::right()
{
    //if(d_y==taillegrille)
   // {
     //   cout<<"Impossible de sortir de la grille"<<endl;
    //}else
    //{
        ++d_y;
    //}
}

void RobotAybG1::left()
{
    //if(d_y==0)
    //{
      //  cout<<"Impossible de sortir de la grille"<<endl;
    //}else
    //{
        --d_y;
    //}
}

