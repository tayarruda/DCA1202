#include "retangulo.h"
#include "figurageometrica.h"
#include "screen.h"
<<<<<<< HEAD
Retangulo::Retangulo(int xc, int yc, int larg, int alt, int p)
=======
Retangulo::Retangulo(int xc, int yc, int larg, int alt)
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
{
    xs = xc;
    ys = yc;
    l = larg;
    h = alt;
<<<<<<< HEAD
    fill = p;
=======
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
}

void Retangulo::draw(Screen &t)
{
<<<<<<< HEAD
    if (fill == 0){
        t.setPixel(xs,ys);
        for(int i=xs;i<=xs+l;i++){
            t.setPixel(i,ys);
        }
        for(int i=xs;i<=ys+h;i++){
            t.setPixel(xs,i);
        }

        for(int i=xs;i<=ys+h;i++){
            t.setPixel(xs+l,i);
        }
        for(int i=xs;i<=xs+l;i++){
            t.setPixel(i,ys+h);
        }
    } else {
        for(int i=xs;i<=xs+h;i++){
            for(int j=ys;j<=ys+l;j++){
                t.setPixel(i,j);
            }
        }
=======
    t.setPixel(xs,ys);
    for(int i=xs;i<=xs+l;i++){
        t.setPixel(i,ys);
    }
    for(int i=xs;i<=ys+h;i++){
        t.setPixel(xs,i);
    }

    for(int i=xs;i<=ys+h;i++){
        t.setPixel(xs+l,i);
    }
    for(int i=xs;i<=xs+l;i++){
        t.setPixel(i,ys+h);
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
    }

}
