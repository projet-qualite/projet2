#ifndef DEBRIS_H
#define DEBRIS_H


class Debris
{
     public:
        Debris(int x, int y);
        int posx() const;
        int posy() const;
        virtual ~Debris();

    protected:

    private:
        int d_x;
        int d_y;
};

#endif // DEBRIS_H
