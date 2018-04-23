#include "poligono.h"
#include "point.h"
#include <iostream>
#include <math.h>

using namespace std;

#define MAXTAM 100

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

int Poligono::numberVertices()
{
    return size;
}

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

void Poligono::translate(float a, float b)
{
    for(int i = 0; i < size; i++){
        vertices[i].translada(a,b);
    }
}

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
        //movendo os pontos para o ponto de rotação
        vertices[i].sub(p);

        //matriz de translação
        newX = ((vertices[i].getX()*c) - (vertices[i].getY()*s));
        newY = ((vertices[i].getX()*s) + (vertices[i].getY()*c));

        //voltando para a posição original já rotacionados
        vertices[i].setX(newX + p.getX());
        vertices[i].setY(newY + p.getY());

    }
}

void Poligono::impress()
{
    for(int i = 0; i < size; i++){
        vertices[i].imprime();
        cout << "->";
    }
    vertices[0].imprime();
    cout << endl;
}
