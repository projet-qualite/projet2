#include "Grille.h"
#include<iostream>
#include "elementdejeux.h"



/*Grille::Grille():d_lg(),d_lar(),d_grille(new std::vector<std::vector<T> >)
{

}*/

Grille::Grille(int Long,int Lar):d_lg(Long),d_lar(Lar),d_grille()
{
    d_grille.resize(d_lg);
	for (int i = 0; i < d_lg; ++i)
    d_grille[i].resize(d_lar);
}



int Grille::GetLargeur()const
{
    return d_lar;
}


int Grille::GetLongeur()const
{
    return d_lg;
}


/*elementdejeux Grille<elementdejeux>::IlestEn(int x, int y)
{
	return (*d_grille)[x][y];
}*/


void Grille::MettreEn(const elementdejeux& value)
{
	d_grille[value.x()][value.y()] = value;
}


void Grille::afficheGrille()const
{
    for(int i=0; i<d_lg;++i)
    {
        for(int j=0;j<d_lar;++j)
        {
            d_grille[i][j].affiche();
            cout<<" ";
        }
        cout<<std::endl;
    }
    cout<<endl;

}



