#include "reta.h"
#include "figurageometrica.h"
#include "screen.h"
#include <cmath>
#include <iostream>

/**
 * @brief Reta::Reta - construtor
 * @details Recebe os pontos inicial e final da reta
 * para alocar nas variáveis privadas da classe
 * @param _xi coordenada x inicial
 * @param _yi coordenada y inicial
 * @param _xf coordenada x final
 * @param _yf coordenada y final
 **/
Reta::Reta(int _xi, int _yi, int _xf, int _yf)
{
    xpi = _xi;
    ypi = _yi;
    xpf = _xf;
    ypf = _yf;
}

/**
 * @brief Reta::draw
 * @details A reta real é aproximada da digital por
 * meio do algoritmo de Bresenham. Utiliza-se
 * também a função setPixel da tela.
 * @param t Tela que recebe o desenho da reta.
 **/

void Reta::draw(Screen &t)
{

    float tam;
    float delta_x;
    float delta_y;
    float x=xpi;
    float y=ypi;
    t.setPixel(0,0);
    (abs (xpf - xpi) > abs (ypf-ypi))
            ? tam = abs(xpf-xpi)
            : tam = abs(ypf-ypi);

    delta_x = (xpf - xpi)/tam;
    delta_y = (ypf - ypi)/tam;

    int i=1;
    while (i< tam){

        t.setPixel(round(x), round(y));

        x= x+delta_x;
        y = y+delta_y;

        i++;
    }

}
