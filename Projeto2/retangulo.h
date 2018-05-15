#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica
{
<<<<<<< HEAD
    int xs, ys, l, h, fill;
public:
    Retangulo(int xc, int yc, int larg, int alt, int p);
=======
    int xs, ys, l, h;
public:
    Retangulo(int xc, int yc, int larg, int alt);
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
    void draw(Screen &t);
};

#endif // RETANGULO_H
