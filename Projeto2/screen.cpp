#include "screen.h"
#include <vector>
#include<iostream>
#include<fstream>

/**
 * @brief Screen::Screen
 * @param nl numero de linhas
 * @param nc numero de colunas
 * @details Um vetor de char preenchido com
 * espaços cria a tela.
 */
Screen::Screen(int nl, int nc)
{
    nlin = nl;
    ncol = nc;

    mat = vector<vector<char>>(nlin, vector<char>(ncol));

    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
            mat[i][j]=' ';
        }
    }
}
/**
 * @brief Screen::setPixel
 * @details Os parâmetros x e y recebidos
 * indicam a coordenada que vai ser substituida
 * pelo char armazenado no brush.
 */

void Screen::setPixel(int x, int y)
{
    if(x>0 && y>0 && x<nlin && y<ncol){
        mat[x][y] = brush;
    }
}

/**
 * @brief Screen::clear
 * @details Deixa todas as posições da matriz
 * vazia
 */
void Screen::clear()
{

    for(int i=0;i<nlin;i++){
        for(int j=0;j<ncol;j++){
            mat[i][j]=' ';
        }
    }
}

/**
 * @brief Screen::setBrush
 * @details Define o brush
 */
void Screen::setBrush(char mBrush)
{

    brush = mBrush;
}

/**
 * @brief operator <<
 * @param os
 * @param t
 * @details sobrecarga do operador '<<' para imprimir screen. Possibilita
 *  que o usuário escolha exibir a tela no terminal
 *  ou em um arquivo txt.
 */
ostream& operator<<(ostream& os, Screen &t)
{

    for(int i=0;i<t.mat.size();i++){
        for(int j=0;j<t.mat[i].size();j++){
            os << t.mat[i][j];
        }
        os<<endl;
    }
    return os;
}
