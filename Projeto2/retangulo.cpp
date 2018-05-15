#include "retangulo.h"
#include "figurageometrica.h"
#include "screen.h"
Retangulo::Retangulo(int xc, int yc, int larg, int alt, int fill)
{
    xs = xc;
    ys = yc;
    l = larg;
    h = alt;
    p = fill;
}

void Retangulo::draw(Screen &t)
{
    if (p == 0){
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
    } else{
        for (int i =xs;i<xs+l;i++){
            for(int j=ys;j<ys+h;j++){
                t.setPixel(i,j);
            }
        }
    }

}
