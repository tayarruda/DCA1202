#include "retangulo.h"
#include "figurageometrica.h"
#include "screen.h"

/**
 * @brief Retangulo::Retangulo - construtor
 * @param xc do ponto superior esquerdo
 * @param yc do ponto superior esquerdo
 * @param larg largura do retangulo
 * @param alt altura do retangulo
 * @param fill
 */
Retangulo::Retangulo(int xc, int yc, int larg, int alt, int fill)
{
    xs = xc;
    ys = yc;
    l = larg;
    h = alt;
    p = fill;
}

/**
 * @brief Retangulo::draw
 * @details Usa a função setPixel para
 * varrer a extensão do retangulo desenhando-o.
 */
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
