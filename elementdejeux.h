#ifndef ELEMENTDEJEUX_H
#define ELEMENTDEJEUX_H
#include<iostream>
#include<string>

using namespace std;

class elementdejeux
{
    public:
        elementdejeux();
        ///~elementdejeux();
        elementdejeux(const string &nom, int x, int y);
        //virtual void affiche() const;
        virtual void affiche2() const;
        int x()const ;
        int y()const ;
        string nom()const;

    protected:
        int d_x;
        int d_y;
        string d_nom;
        int a_x,a_y;


};

#endif // ELEMENTDEJEUX_H
