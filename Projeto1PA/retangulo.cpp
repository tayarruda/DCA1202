#include "retangulo.h"

Retangulo::Retangulo(float _x, float _y, float _h, float _l)
{
    l = _l;
    h = _h;
    //Poligono();
    Point p0,p1,p2,p3;
    p0.setXY(_x,_y);
    p1.setXY(_x,_y-h);
    p2.setXY(_x+l,_y-h);
    p3.setXY(_x,_y+h);

    insertVertice(p0);
    insertVertice(p1);
    insertVertice(p2);
    insertVertice(p3);
}

float Retangulo::getLarg()
{
    return l;
}

float Retangulo::getAlt(){

    return h;
}
