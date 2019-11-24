#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
public:
    Point(double x,double y);
    Point();
    double x() const;
    double y() const;
    double distance(const Point& p);
    void deplacerEn(double x,double y);
    void deplacerDe(double dx,double dy);
    void afficher(std::ostream& ost) const;
    void saisir(std::istream& ist);
    static Point polaire(double r,double teta);


private:
    double d_x,d_y;
};
std::ostream& operator<<(std::ostream& ost,const Point& p);
std::istream& operator>>(std::istream& ist,Point p);
#endif // POINT_H
