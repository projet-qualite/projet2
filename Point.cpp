#include "Point.h"
#include <cmath>

Point::Point(double x,double y):d_x{x},d_y{y}
{

}

Point::Point():Point{0.0,0.0}
{

}

double Point::x() const
{
    return d_x;
}

double Point::y() const
{
    return d_y;
}

double Point::distance(const Point& p)
{
    double dx=p.x()-x();
    double dy=p.d_y-d_y;

    return sqrt(dx*dx+dy*dy);
}

void Point::deplacerEn(double x,double y)
{
    d_x=x;
    d_y=y;
}

void Point::deplacerDe(double dx,double dy)
{
    d_x+=dx;
    d_y+=dy;
}

void Point::afficher(std::ostream& ost) const
{
    ost<<'('<<d_x<<','<<d_y<<')';
}

void Point::saisir(std::istream& ist)
{
    char c;
    double x,y;
    ist>>c>>x>>c>>y>>c;
    if(ist.good())
    {
        d_x=x;
        d_y=y;
    }
}

std::ostream& operator<<(std::ostream& ost,const Point& p)
{
    p.afficher(ost);
    return ost;
}

std::istream& operator>>(std::istream& ist,Point p)
{
    p.saisir(ist);
    return ist;
}
