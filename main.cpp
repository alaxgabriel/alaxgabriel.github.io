#include <iostream>
#include "poligono.h"
#include "point.h"
#include "retangulo.h"

using namespace std;

int main()
{
    Point pRot;
    pRot.setXY(0,0);
    Poligono pol;
    pol.inicia();
    pol.inserirVertices();
    pol.imprime();
    //pol.recupera();
    pol.area();
    //pol.translada(1,1);
    //pol.print();
    pol.rotaciona(30, pRot);
    pol.imprime();
    pol.area();
    /*Retangulo ret(0, 0, 4, 3);
    //Retangulo ret(0, 0, 5, 5);
    ret.imprime();
    float a1;
    float a2;
    float a3;
    a1 = ret.area();
    //ret.translada(-3, 4);
    //ret.imprime();
    a2 = ret.area();
    if(a1 == a2){
        cout << "\n Area permaneceu a mesma apos o translado!" << endl;
    }
    else{
        cout << "\n Algo deu errado! A area do retangulo mudou apos o translado!!" << endl;
    }
    ret.rotaciona();
    ret.imprime();
    a3 = ret.area();
    if(a1 == a3){
        cout << "\n Area permaneceu a mesma apos a rotacao!" << endl;
    }
    else{
        cout << "\n Algo deu errado! A area do retangulo mudou apos a rotacao!!" << endl;
    }*/
    return 0;
}
