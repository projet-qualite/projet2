#include "grille.h"

 Grille::Grille(int dimension):D_dimension{dimension}{};


int Grille::GetDimension()const{

return D_dimension;
}


void Grille::afficheGrille()const
{

    int y1=200;
    int y2=200;
    int y3=50;
    int y4=50;

for(int i=0;i<D_dimension;++i)
{
    int x1=200;
    int x2=400;
    int x3=400;
    int x4=200;
    cout<<y3<<"  "<<y4<<endl;
    for(int j=0;j<D_dimension;++j)
    {
        int tab2[]={x1,y1,x2,y2,x3,y3,x4,y4,x1,y1};
        drawpoly(5,tab2);
        int ix2=x2;
        int ix3=x3;
        x2+=200;
        x1=ix2;
        x4=ix3;
        x3+=200;
        cout<<y3<<"  "<<y4<<endl;

    }

    int iy4=y4;
    int iy3=y3;
    y1=iy4;
    y2=iy3;
    y3+=300;
    y4+=300;
    cout<<y3<<"  "<<y4<<endl;

}
//test Git Changement
