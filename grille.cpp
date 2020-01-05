#include "grille.h"
#include "graphics.h"
#include <iostream>
#include "math.h"
#include "RobotAybG1.h"
#include<typeinfo>
#include "debris.h"

using namespace std;

Grille::Grille(int dimensionX,int dimensionY):D_dimensionX{dimensionX},D_dimensionY{dimensionY}
{

}

Grille::~Grille()
{
    for(int i=0;i<tab.size();++i)
    {
        delete tab[i];
    }
}


int Grille::GetDimensionX()const{

return D_dimensionX;
}

int Grille::GetDimensionY() const
{
    return D_dimensionY;
}


void Grille::MettreEn(elementdejeux* value)
{
	tab.push_back(value);
}


void Grille::afficheGrille()const
{


    int y1=50;
    int y2=50;
    int y3=200;
    int y4=200;

for(int i=0;i<D_dimensionX;++i)
{
    int x1=200;
    int x2=400;
    int x3=400;
    int x4=200;
    for(int j=0;j<D_dimensionY;++j)
    {
        int tab2[]={x1,y1,x2,y2,x3,y3,x4,y4,x1,y1};
        drawpoly(5,tab2);
        int ix2=x2;
        int ix3=x3;
        x1=ix2;
        x4=ix3;
        x2+=200;

        x3+=200;

    }
    int iy4=y4;
    int iy3=y3;
    y1=iy4;
    y2=iy3;
    y3+=150;
    y4+=150;


}

for(int i=0; i<tab.size();++i)
    {

            tab[i]->affiche2();
    }


}



void Grille::afficheGrille2() const
{
        int trouve=0;
        elementdejeux* element;

    for(int i=0; i<D_dimensionX;++i)
    {

        for(int j=0;j<D_dimensionY;++j)
        {


            for(int k=0;k<tab.size();++k)
            {
                if(i==tab[k]->x() && j==tab[k]->y())
                {
                    tab[k]->affiche2();
                    trouve=1;
                }

            }

            if(trouve==0)
                cout<<"("<<i<<","<<j<<")";
            trouve=0;

            cout<<" ";
        }
        cout<<endl;
   }


}

void Grille::croisement()
{
  for(int i=0;i<tab.size();++i)
    {
        elementdejeux* rb=tab[i];
        int x1=rb->x(); int y1=rb->y();

    if(typeid(*rb)==typeid(RobotAybG1))
     {
        for(int j=i+1;j<tab.size();++j)
         {
            if(x1==tab[j]->x() && y1==tab[j]->y())
             {
                if(typeid(*(tab[j]))==typeid(Debris))
                    {
                     tab.erase(tab.begin()+i);
                     --j;
                    }
                else if(typeid(*(tab[j]))==typeid(RobotAybG1))
                    {

                       tab.erase(tab.begin()+j);
                        Debris* debris3=new Debris("Debris",x1,y1);
                        this->MettreEn(debris3);
                        --j;
                    }
             }
           }
        }

    }
}

