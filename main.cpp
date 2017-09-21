#include <iostream>
#include "poligono.h"
#include "point.h"

using namespace std;

int main()
{
    Poligono pol;
    pol.inicia();
    pol.inserirVertices();
    pol.imprime();
    //pol.recupera();
    //pol.area();
    //pol.translada(1,1);
    //pol.print();
    //pol.rotaciona();
    pol.imprime();
    return 0;
}
