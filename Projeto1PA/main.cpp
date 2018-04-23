#include <iostream>
#include "point.h"
#include "poligono.h"
#include "retangulo.h"
using namespace std;

int main()
{

   Retangulo r(0,0,3,4);
   r.impress();

   cout<<"Area Retangulo: "<<r.calcArea()<<endl;
   cout<<endl;
   r.translate(-3,4);
   cout<<"Retangulo Transladado: "<<endl;
   r.impress();
   cout<<endl;
   cout<<"Area Retangulo Transladado: "<<r.calcArea()<<endl;
   cout<<endl;
   Point CM;
   CM.setXY((r.getLarg())/2,(r.getAlt())/2);
   r.rotate(-30,CM);
   cout<<"Retangulo rotacionado: "<<endl;
   r.impress();
   cout<<endl;
   cout<<"Area ROt: "<<r.calcArea()<<endl;
}
