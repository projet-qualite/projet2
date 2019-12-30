#include "elementdejeux.h"
#include<windows.h>
#include"graphics.h"
const int POSITION_X=150;
const int POSITION_Y=150;
const int RAYON=30;
const int PAS_DEPLACEMENT=100;



elementdejeux::elementdejeux():d_nom("Player")
{      d_x=POSITION_X;    d_y=POSITION_Y; }

elementdejeux::elementdejeux(const string &nom): d_nom(nom)
{      d_x=POSITION_X;    d_y=POSITION_Y; }

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

string elementdejeux::nom() const
{
    return d_nom;
}

/** ajouter un terrain*/
void elementdejeux::ajouterTerrain(Grille* terrain)
{
    d_terrain=terrain;
}
/** deplacer horizontalement l'element du jeu */
void elementdejeux::deplacerHorizontal(char direction)
{
   if(direction=='r' && d_x<(d_terrain->GetDimensionX())*PAS_DEPLACEMENT)
   {
     for(int i=0;i<PAS_DEPLACEMENT;i++)
      {
        d_terrain->afficheGrille();
        ++d_x;
        tracer();
        delay(3);
        cleardevice();
      }
   }
   else if(direction=='l' && d_x>POSITION_X){
     for(int i=0;i<PAS_DEPLACEMENT;i++)
      {
        d_terrain->afficheGrille();
        --d_x;
        tracer();
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
        tracer();
        delay(3);
        cleardevice();
      }
   }
   else if(direction=='u' && d_y>POSITION_Y){
     for(int i=0;i<PAS_DEPLACEMENT;i++)
      {
        d_terrain->afficheGrille();
        --d_y;
        tracer();
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






