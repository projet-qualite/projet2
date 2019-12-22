#ifndef ELEMENTDEJEUX_H
#define ELEMENTDEJEUX_H
#include<iostream>
#include<string>

using namespace std;

class elementdejeux
{
    public:
        elementdejeux();
        elementdejeux(const string &nom);
        virtual void affiche() const;
        int x()const ;
        int y()const ;
        string nom()const;
        virtual void up()=0;
        virtual void down()=0;
        virtual void right()=0;
        virtual void left()=0;

    protected:
        int d_x;
        int d_y;
        string d_nom;


};

#endif // ELEMENTDEJEUX_H
