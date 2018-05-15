#ifndef POLIGONO_H
#define POLIGONO_H
#include "point.h"

class Poligono
{
    int size = 0;
    Point* vertices;
public:
    Poligono();
    void insertVertice(Point p);
    int numberVertices(void);
    float calcArea(void);
    void translate(float a, float b);
    void rotate(float ang, Point p);
    void impress(void);
};

#endif // POLIGONO_H
