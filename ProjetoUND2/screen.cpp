#include "screen.h"
#include <vector>
#include<iostream>
#include<fstream>

Screen::Screen()
{

}

Screen::Screen(int nl, int nc)
{
<<<<<<< HEAD
    nlin = nl;
    ncol = nc;
=======
    int nlin = nl;
    int ncol = nc;
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
    //inicializa a matriz
    mat = vector<vector<char>>(nlin, vector<char>(ncol));
    //atribui a matriz limpa
    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
            mat[i][j]=' ';
        }
    }
}

void Screen::setPixel(int x, int y)
{
<<<<<<< HEAD

    //desenha na posição desejada o que esta no brush
    if(x>0 && y>0 && x<nlin && y<ncol){
        mat[x][y] = brush;

    }
=======
    //desenha na posição desejada o que esta no brush
    if(x>0 && y>0 && x<nlin && y<ncol)
        mat[x][y] = brush;
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
}

void Screen::clear()
{
    //coloca todas as posições da matriz vazias
    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
            mat[i][j]=' ';
        }
    }
}

void Screen::setBrush(char mBrush)
{
    //define o brush
    brush = mBrush;
<<<<<<< HEAD
=======

>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
}

ostream& operator<<(ostream& os, Screen &t)
{
<<<<<<< HEAD
    //sobrecarga do operador '<<' para imprimir screen
    for(int i=0;i<t.mat.size();i++){
        for(int j=0;j<t.mat[i].size();j++){
=======
    int nlin, ncol, j;
    //sobrecarga do operador '<<' para imprimir screen
    for(int i=0;i<t.mat.size();i++){
        for(j=0;j<t.mat[i].size();j++){
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
            os << t.mat[i][j];
        }
        os<<endl;
    }
    return os;
}
