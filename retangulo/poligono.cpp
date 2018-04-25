#include "poligono.h"
#include "point.h"
#include <iostream>
#include <math.h>

using namespace std;

#define MAXTAM 100

/**@brief Construtor default:
**@details  Os 100 vértices do polígono são inicializados com (0,0).
* O número de vértices, por sua vez, é inicializado com 0.
**/
Poligono::Poligono(){

   vertices = new Point[MAXTAM];
}


void Poligono::insertVertice(Point p)
{
    if(size<MAXTAM){
    vertices[size] = p;
    size++;
    }else {
        exit(0);
    }
}

/**@brief Retorna o numero de vértices
 */

int Poligono::numberVertices()
{
    return size;
}

/**@brief Função que calcula a área do polígono
 * @details A função multiplica e soma todas as diagonais
 * principais e secundárias da matriz e subtrai a soma das
 * diagonais principais pela das diagonais secundárias. O resultado
 *  divide é dividido por 2. **/

float Poligono::calcArea()
{
    float area;

    float somaUm = 0;
    for(int i = 0; i < size-1; i++){

        somaUm += vertices[i].getX() * vertices[i+1].getY();
    }
    somaUm += vertices[size-1].getX() * vertices[0].getY();

    float somaDois = 0;
    for(int i = 0; i < size-1; i++){
        somaDois += vertices[i].getY() * vertices[i+1].getX();
    }
    somaDois += vertices[size-1].getY() * vertices[0].getX();


    if(somaUm > somaDois){
        area = (somaUm - somaDois)/2;
    }else{
        area = (somaDois - somaUm)/2;
    }
    return area;
}

/**@brief Função para transladar os vértices do polígono **/

void Poligono::translate(float a, float b)
{
    for(int i = 0; i < size; i++){
        vertices[i].translada(a,b);
    }
}

/**@brief Função para rotacionar o polígono
 * @details A função move os pontos para o ponto de rotação, monta a matriz de translação
 * e então os pontos voltam para a posição original já rotacionados**/

void Poligono::rotate(float ang, Point p)
{
    float s, c, newX, newY;


    if (ang < 0){
        ang = 360 - ang;
        ang*=(M_PI/180);
    }else{
        ang *=(M_PI/180);
    }

    s = sin(ang);
    c = cos(ang);

    for(int i =0; i<size; i++){

        vertices[i].sub(p);

        newX = ((vertices[i].getX()*c) - (vertices[i].getY()*s));
        newY = ((vertices[i].getX()*s) + (vertices[i].getY()*c));

        vertices[i].setX(newX + p.getX());
        vertices[i].setY(newY + p.getY());

    }
}

/**@brief Função que imprime o polígono**/
void Poligono::impress()
{
    for(int i = 0; i < size; i++){
        vertices[i].imprime();
        cout << "->";
    }
    vertices[0].imprime();
    cout << endl;
}
