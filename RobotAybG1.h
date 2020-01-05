#ifndef ROBOTAYBG1_H
#define ROBOTAYBG1_H
#include "RobotAyb.h"
#include<iostream>


class RobotAybG1: public RobotAyb
{
    public:
        RobotAybG1();
        RobotAybG1(const string &nom, int x, int y);
        virtual void affiche() const;
           void deplacement(const Joueur& j,int dim) ;

        void up();
        void down(int dim);
        void right(int dim);
        void left();

};

#endif // ROBOTAYBG1_H
