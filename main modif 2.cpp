#include <iostream>
#include "Joueur.h"
#include "JoueurSimple.h"
#include "Debris.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    JoueurSimple j("Zelda");
    j.rightup();
    cout <<"("<< j.posx()<<";" << j.posy() <<")"<< endl ;
    Debris b;
    cout <<"("<< b.posx()<<";"<<b.posy()<<")"<<endl;
    return 0;
}
