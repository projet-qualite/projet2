#ifndef DEBRIS_H
#define DEBRIS_H
#include "elementdejeux.h"


class Debris:public elementdejeux
{
    public:
        Debris();
        Debris(const string &nom,int x, int y);
        int posx() const;
        int posy() const;
        //virtual ~Debris();
};

#endif // DEBRIS_H
