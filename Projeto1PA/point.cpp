#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;
Point::Point()
{

}

void Point::setX(float _x)
{
    x=_x;
}

void Point::setY(float _y)
{
    y=_y;
}

void Point::setXY(float _x, float _y){
    x=_x;
    y=_y;
}

float Point::getX(){
    return x;
}

float Point::getY()
{
    return y;
}

Point Point::add(Point p1)
{
    Point retornaP;
    retornaP.x = x + p1.x;
    retornaP.y = y + p1.y;
    return retornaP;
}

Point Point::sub(Point p1)
{
    Point retornaP;
    retornaP.x = x - p1.x;
    retornaP.y = y - p1.y;
    return retornaP;
}

float Point::norma()
{
    float n;
    n = sqrt((x*x)+(y*y));
    return n;
}

void Point::translada(float a, float b)
{
    x=a+x;
    y=b+y;
}

void Point::imprime()
{
    cout<<"("<<x<<","<<y<<")";
}
