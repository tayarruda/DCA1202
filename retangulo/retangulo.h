#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"
#include "point.h"
class Retangulo : public Poligono
{
    float l;
    float h;
public:
    Retangulo(float _x, float _y, float _h, float _l);
    float getLarg();
    float getAlt();
};

#endif // RETANGULO_H
