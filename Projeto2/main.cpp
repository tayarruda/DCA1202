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
    string comando, sr;
    Screen t;

    entrada.open("/home/tayarr/DCA1202/Projeto2/entrada.txt");

    if(entrada.is_open()){
        cout << "Arquivo aberto com sucesso\n";
    }
    else{
        cout << "Falha na abertura do arquivo\n";
    }

    saida.open("/home/tayarr/DCA1202/Projeto2/saida.txt");

    if(saida.is_open()){
        cout << "Arquivo aberto com sucesso\n";
    }
    else{
        cout << "Falha na abertura do arquivo\n";
    }
    //lendo o arquivo recebendo as variaveis
    //necessarias para realizar a ação
    //a partir do arquivo entrada

    while(entrada.good()){
        //comando guarda o que foi extraido de entrada
        getline(entrada,comando);

        //verificando a leitura, iniciando o stream
        if(entrada.good()){
            stringstream sstream(sr);
            sstream >> sr;

            if(sr == "dim"){
               int x,y;
               sstream >> x >> y;
               t = Screen(x,y);
            }
            //verificando o brush definido
            if(sr == "brush"){
                char b;
                sstream >> b;
                if(sstream.good()){
                    t.setBrush(b);
                }else{
                    t.setBrush(' ');
                }
            }
            //desenhar uma linha
            if(sr == "line"){
                int x0,x1,y0,y1;
                sstream >> x0 >> y0 >> x1 >> y1;
                Reta rt(x0,y0,x1,y1);
                rt.draw(t);
            }
            //desenhar um retangulo
            if(sr == "rectangle"){
                int xe, ye, h, l;
                sstream >> xe >> ye >> h >> l;
                Retangulo re(xe,ye,l,h);
                re.draw(t);
            }

            //desenhar um circulo
            if(sr == "circle"){
                int x,y,raio,fill;
                sstream >> x >> y >> raio >> fill;
                Circulo cl(x,y,raio,fill);
                cl.draw(t);
            }
        }
        //para exibir na tela
        saida << t;

        //encerrando stream
        entrada.close();
        saida.close();

    }


}

