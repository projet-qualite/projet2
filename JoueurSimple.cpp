#include "JoueurSimple.h"
#include "joueur.h"




JoueurSimple::JoueurSimple(const string& nom, int x, int y): Joueur(nom, x, y)
{

}

void JoueurSimple::rightup(int dim)
{
    this->up();
    this->right(dim);
}

void JoueurSimple::leftup()
{
    this->up();
    this->left();
}

void JoueurSimple::rightdown(int dim)
{
    this->down(dim);
    this->right(dim);
}

void JoueurSimple::leftdown(int dim)
{
    this->down(dim);
    this->left();
}

void JoueurSimple::affiche() const
{
    setcolor(1);
    int x1=300+(d_x)*200;
    int y1=70+(d_y)*150;
    int x2=250+(d_x)*200;
    int y2=190+(d_y)*150;
    int x3=350+(d_x)*200;
    int y3=190+(d_y)*150;
    int tab[]={x1,y1,x2,y2,x3,y3,x1,y1};
    fillpoly(4,tab);
}
