#ifndef DEBRIS_H
#define DEBRIS_H

#include "elementdejeux.h"

class Debris:public elementdejeux
{
     public:
        Debris(const string &nom, int x, int y);
        int posx() const;
        int posy() const;
        virtual void affiche() const;
        ~Debris();

    protected:

};

#endif // DEBRIS_H
