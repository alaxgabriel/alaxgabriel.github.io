#include <iostream>
#include "poligono.h"
#include "point.h"
#include "retangulo.h"

using namespace std;

int main()
{
    float a1;
    float a2;
    float a3;

    Retangulo ret(0,0,4,3);

    ret.imprime();

    a1 = ret.area();

    ret.translada(-3,4);
    ret.imprime();
    a2 = ret.area();

    if(a1 == a2){
        cout << "\n A area 1 = " << a1 << "; e a area 2 = " << a2 << endl;
        cout << " Logo, a area permaneceu a mesma!" << endl;
    }
    else{
        cout << "\n A area 1 = " << a1 << "; e a area 2 = " << a2 << endl;
        cout << "\n Algo deu errado. A area do poligono mudou!" << endl;
    }

    Point pr1;
    pr1.setXY(ret.getLarg()/2, ret.getAlt()/2);

    ret.rotaciona(30, pr1);
    cout << "Ponto de rotacao: (" << ret.getLarg()/2 << ", " << ret.getAlt()/2 << ")" << endl;
    ret.imprime();
    a3 = ret.area();

    if(a3 - a2 >= 0){
        cout << "\n A area 3 = " << a3 << "; e a area 2 = " << a2 << endl;
        cout << " Logo, a area permaneceu a mesma!" << endl;
    }
    else {
        cout << "\n A area 3 = " << a3 << "; e a area 2 = " << a2 << endl;
        cout << "\n Algo deu errado. A area do poligono mudou!" << endl;
    }

    return 0;
}
