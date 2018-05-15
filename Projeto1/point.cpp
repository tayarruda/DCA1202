#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;
Point::Point()
{

}

/**@brief Definindo as coordenadas x e y do ponto
separadamente **/
void Point::setX(float _x)
{
    x=_x;
}

void Point::setY(float _y)
{
    y=_y;
}

/**@brief Definindo em uma mesma função os valores
 * das coordenadas x e y**/

void Point::setXY(float _x, float _y){
    x=_x;
    y=_y;
}

/**@brief Recupera os valores das coordenadas x e y**/

float Point::getX(){
    return x;
}

float Point::getY()
{
    return y;
}

/**@brief Somando as coordenadas
 * @details Adiciona as coordenadas x,y com as coordenadas
 * do ponto fornecido e retorna o novo ponto**/

Point Point::add(Point p1)
{
    Point retornaP;
    retornaP.x = x + p1.x;
    retornaP.y = y + p1.y;
    return retornaP;
}

/**@brief Subtração das coordenadas
 * @details Subtrai as coordenadas x,y com as coordenadas
 * fornecidas do ponto P1**/

Point Point::sub(Point p1)
{
    Point retornaP;
    retornaP.x = x - p1.x;
    retornaP.y = y - p1.y;
    return retornaP;
}

/**@brief Calcula a distância do ponto para a
 * origem**/

float Point::norma()
{
    float n;
    n = sqrt((x*x)+(y*y));
    return n;
}

/**@brief Translada o ponto (x,y) de (+a, +b)**/
void Point::translada(float a, float b)
{
    x=a+x;
    y=b+y;
}

/**@brief Imprime o ponto**/
void Point::imprime()
{
    cout<<"("<<x<<","<<y<<")";
}
