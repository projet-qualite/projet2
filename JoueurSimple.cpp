#include "JoueurSimple.h"
#include "Joueur.h"

JoueurSimple::JoueurSimple(): Joueur()
{
    //ctor
}


JoueurSimple::JoueurSimple(const string& nom, int x, int y): Joueur(nom, x, y)
{

}

void JoueurSimple::rightup()
{
    this->up();
    this->right();
}

void JoueurSimple::leftup()
{
    this->up();
    this->left();
}

void JoueurSimple::rightdown()
{
    this->down();
    this->right();
}

void JoueurSimple::leftdown()
{
    this->down();
    this->left();
}

