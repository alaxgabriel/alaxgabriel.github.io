#include <iostream>
#include "poligono.h"
#include "point.h"
#include "retangulo.h"

using namespace std;

int main()
{
    //Poligono pol;
    //pol.inicia();
    //pol.inserirVertices();
    //pol.imprime();
    //pol.recupera();
    //pol.area();
    //pol.translada(1,1);
    //pol.print();
    //pol.rotaciona();
    //pol.imprime();
    Retangulo ret(0, 0, 4, 3);
    //Retangulo ret(0, 0, 5, 5);
    ret.imprime();
    ret.area();
    ret.translada(-3, 4);
    ret.imprime();
    ret.area();
    return 0;
}
