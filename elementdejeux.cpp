#include "elementdejeux.h"
#include<windows.h>
#include"graphics.h"
const int POSITION_X=150;
const int POSITION_Y=150;
const int RAYON=30;
const int PAS_DEPLACEMENT=100;


///Construire un élement de jeu avec sn terrain
elementdejeux::elementdejeux(Grille* terrain):d_terrain{terrain}
{   terrain->ajouterElement(this); }


/**void elementdejeux::affiche() const
{
    cout<<d_nom<<"("<<d_x<<","<<d_y<<")";
}
*/
int elementdejeux::x() const
{
    return d_x;
}

int elementdejeux::y() const
{
    return d_y;
}



/** ajouter un terrain*/
void elementdejeux::ajouterTerrain(Grille* terrain)
{
    d_terrain=terrain;
}
/** tracer tout les elements de la grille
void elementdejeux::tracerTout()
{
    for(auto element:d_terrain->d_element)    ///for(int i=0;i<d_terrain->d_element.size();i++)
        {
            element->tracer();
        }
}*/
/** deplacer horizontalement l'element du jeu */
void elementdejeux::deplacerHorizontal(char direction)
{
   if(direction=='r' && d_x<(d_terrain->GetDimensionX())*PAS_DEPLACEMENT)
   {
     for(int i=0;i<PAS_DEPLACEMENT;i++)
      {
        d_terrain->afficheGrille();
        ++d_x;
        //++d_y;
        d_terrain->tracerTout();
        delay(3);
        cleardevice();
      }
   }
   else if(direction=='l' && d_x>POSITION_X){
     for(int i=0;i<PAS_DEPLACEMENT;i++)
      {
        d_terrain->afficheGrille();
        --d_x;
        d_terrain->tracerTout();
        delay(3);
        cleardevice();
      }
   }
}
/** deplacer verticalement l'element du jeu */
void elementdejeux::deplacerVertical(char direction)
{
   if(direction=='d' && d_y<(d_terrain->GetDimensionY())*PAS_DEPLACEMENT)
   {
     for(int i=0;i<PAS_DEPLACEMENT;i++)
      {
        d_terrain->afficheGrille();
        ++d_y;
        d_terrain->afficheGrille();
        d_terrain->tracerTout();
        delay(3);
        cleardevice();
      }
   }
   else if(direction=='u' && d_y>POSITION_Y){
     for(int i=0;i<PAS_DEPLACEMENT;i++)
      {
        d_terrain->afficheGrille();
        --d_y;
        d_terrain->afficheGrille();
        d_terrain->tracerTout();
        delay(3);
        cleardevice();
      }
   }
}
void elementdejeux::right()
{
    deplacerHorizontal('r');
}
void elementdejeux::left()
{
    deplacerHorizontal('l');
}
void elementdejeux::up()
{
    deplacerVertical('u');
}
void elementdejeux::down()
{
    deplacerVertical('d');
}






