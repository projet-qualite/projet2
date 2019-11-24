#include <iostream>
#include "Joueur.h"
#include "Debris.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Joueur j;
    j("Zelda");
    j.down();
    cout << j.posx() << j.posy() << endl ;
    return 0;
}
