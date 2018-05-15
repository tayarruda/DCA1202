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
<<<<<<< HEAD
    string comando, sr, dir, pathin, pathout;
    Screen t;

    dir = "/home/tayarr/DCA1202/Projeto2/";
    pathin = dir+"entrada.txt";
    pathout = dir+"saida.txt";
    entrada.open(pathin.c_str());
=======
    string comando, sr;
    Screen t;

    entrada.open("/home/tayarr/DCA1202/Projeto2/entrada.txt");
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1

    if(entrada.is_open()){
        cout << "Arquivo aberto com sucesso\n";
    }
    else{
        cout << "Falha na abertura do arquivo\n";
    }

<<<<<<< HEAD
    saida.open(pathout.c_str());
=======
    saida.open("/home/tayarr/DCA1202/Projeto2/saida.txt");
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1

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
<<<<<<< HEAD
        cout << comando << endl;
        //verificando a leitura, iniciando o stream
        if(entrada.good()){
            stringstream sstream(comando);
            sstream >> sr;
            cout << "sr = " << sr << endl;
            if(sr == "dim"){
                int x,y;
                sstream >> x >> y;

                t = Screen(x,y);
            }
            //verificando o brush definido
            if(sr == "brush"){

                char b;
                sstream >> b;

                if(!sstream.good()){

                    t.setBrush(b);
                }else{

=======

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
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
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
<<<<<<< HEAD
                int xe, ye, h, l, fill;
                sstream >> xe >> ye >> h >> l >> fill;
                Retangulo re(xe,ye,l,h,fill);
=======
                int xe, ye, h, l;
                sstream >> xe >> ye >> h >> l;
                Retangulo re(xe,ye,l,h);
>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1
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
<<<<<<< HEAD


    }
    //para exibir na tela
    saida << t;

    //encerrando stream
    entrada.close();
    saida.close();
=======
        //para exibir na tela
        saida << t;

        //encerrando stream
        entrada.close();
        saida.close();

    }

>>>>>>> b25ac14087fa11707bbe9b4289243953cd0756f1

}

