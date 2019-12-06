#include <iostream>
#include "elementdejeux.h"
#include "Grille.h"
#include "Joueur.h"
#include "JoueurSimple.h"
#include "RobotAyb.h"
#include "RobotAybG1.h"
#include "RobotAybG2.h"
#include "Debris.h"

using namespace std;

int main()
{
    Grille gr(4,4);
    gr.afficheGrille();

    Joueur x("Zelda",2,3);
    gr.MettreEn(x);
    elementdejeux j ("Ayoub",3,3);
    gr.MettreEn(j);



    gr.afficheGrille();
    return 0;
}
