#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include<iostream>
#include<fstream>
using namespace std;

class Screen{
private:
<<<<<<< HEAD
    // armazenam o tamanho da tela de desenho
    // no de linhas e de colunas
    int nlin, ncol;

    // guarda o caractere usado para desenhar
    char brush;

    // armazena a matriz da tela
    vector<vector<char>> mat;
public:
    Screen();
    // construtor da classe
    Screen(int nlin, int ncol);

    // desenha um pixel da matriz usando o caratere
    // guardado em 'brush'
    void setPixel(int x, int y);

    // limpa a tela
    void clear();

    // muda o caractere de desenho
    void setBrush(char mBrush);

    // envia a tela para um stream de saida
    friend ostream& operator<<(ostream &os, Screen &t);
=======
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector<vector<char>> mat;
public:
  Screen();
  // construtor da classe
  Screen(int nlin, int ncol);

  // desenha um pixel da matriz usando o caratere
  // guardado em 'brush'
  void setPixel(int x, int y);

  // limpa a tela
  void clear();

  // muda o caractere de desenho
  void setBrush(char brush);

  // envia a tela para um stream de saida
  friend ostream& operator<<(ostream &os, Screen &t);
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
};
#endif // SCREEN_H
