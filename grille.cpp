#include "grille.h"
#include "graphics.h"
#include <iostream>
#include "math.h"

using namespace std;

Grille::Grille(int dimensionX,int dimensionY):D_dimensionX{dimensionX},D_dimensionY{dimensionY},d_grille{}
{

}

Grille::~Grille()
{
    for(int i=0;i<d_grille.size();++i)
    {
        delete d_grille[i];
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
	d_grille.push_back(value);
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

for(int i=0; i<d_grille.size();++i)
    {

            d_grille[i]->affiche();



    }


}

vector<elementdejeux*> Grille::tab() const
{
    return d_grille;
}


void Grille::afficheGrille2() const
{
    int trouve=0;
    elementdejeux* element;
for(int i=0; i<D_dimensionX;++i)
    {
        for(int j=0;j<D_dimensionY;++j)
        {
            for(int k=0;k<d_grille.size();++k)
            {
                if(i==d_grille[k]->x() && j== d_grille[k]->y())
                {
                    element=d_grille[k];
                    trouve=1;
                }
            }

            if(trouve==1)
            {
                element->affiche2();
            }
            else{
                cout<<"("<<i<<","<<j<<")";
            }
            trouve=0;





            cout<<" ";
        }
        cout<<std::endl;
    }
    cout<<endl;

}
