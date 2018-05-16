#include <iostream>
#include <vector>
#include <string>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <sstream>


#include "screen.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main(){
    vector <FiguraGeometrica*> figuras;
    vector <FiguraGeometrica*>::iterator it;

    ifstream entrada;
    ofstream saida;
    string comando, sr, dir, pathin, pathout;
    Screen t;

    dir = "C:/Users/almei/OneDrive/Documentos/DCA1202/DCA1202/Projeto2/";
    pathin = dir+"entrada.txt";
    pathout = dir+"saida.txt";
    entrada.open(pathin.c_str());

    if(entrada.is_open()){
        cout << "Arquivo aberto com sucesso\n";
    }
    else{
        cout << "Falha na abertura do arquivo\n";
    }

    saida.open(pathout.c_str());

    if(saida.is_open()){
        cout << "Arquivo aberto com sucesso\n";
    }
    else{
        cout << "Falha na abertura do arquivo\n";
    }
    /**lendo o arquivo recebendo as variaveis
    necessarias para realizar a ação
    a partir do arquivo entrada**/

    while(entrada.good()){
        /**comando guarda o que foi extraido de entrada**/
        getline(entrada,comando);
        cout << comando << endl;
        /**verificando a leitura, iniciando o stream**/
        if(entrada.good()){
            stringstream sstream(comando);
            sstream >> sr;
            cout << "sr = " << sr << endl;
            if(sr == "dim"){
                int x,y;
                sstream >> x >> y;

                t = Screen(x,y);
            }
            /**verificando o brush definido**/
            if(sr == "brush"){
                char b;
                sstream >> b;
                if(!sstream.good()){
                    t.setBrush(b);
                }else{
                    t.setBrush(' ');
                }
            }
            /**desenhar uma linha**/
            if(sr == "line"){
                int x0,x1,y0,y1;
                sstream >> x0 >> y0 >> x1 >> y1;


                figuras.push_back(new Reta(x0,y0,x1,y1));
            }
            /**desenhar um retangulo**/
            if(sr == "rectangle"){
                int xe, ye, h, l, p;
                sstream >> xe >> ye >> h >> l >> p;
                figuras.push_back(new Retangulo(xe,ye,l,h,p));
            }

            /**desenhar um circulo**/
            if(sr == "circle"){
                int x,y,raio,fill;
                sstream >> x >> y >> raio >> fill;
                figuras.push_back(new Circulo(x,y,raio,fill));
            }
        }


    }

    for(it = figuras.begin();it!=figuras.end();it++){
        (*it)->draw(t);
    }
    /**para exibir na tela**/
    saida << t;

    /**encerrando stream**/
    entrada.close();
    saida.close();

}

