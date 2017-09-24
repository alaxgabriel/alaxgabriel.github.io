/*
    \mainpage
    \author Alax Gabriel
    \version 0.0.0.1
    \data setembro de 2017

*/

#include <iostream>         // Biblioteca de entrada e saida
#include "poligono.h"       // Referencia para a classe poligono
#include "point.h"          // Referencia para a classe point
#include "retangulo.h"      // Referencia para a classe retangulo

using namespace std;

int main()
{
    /** Recebe a area do poligono inicializado */
    float a1;
    /** Recebe a area do poligono apos a translacao */
    float a2;
    /** Recebe a area do poligono apos rotacao */
    float a3;

    /** Implementacao do retangulo com vertive (0,0), largura 4 e altura 3 */
    Retangulo ret(0,0,4,3);

    /** imprime o poligono ret */
    ret.imprime();

    /** a1 recebe o valor da area do poligono */
    a1 = ret.area();

    /** Translada o poligono ret com -3 em x e 4 em y */
    ret.translada(-3,4);
    ret.imprime();
    /** a1 recebe o valor da area do poligono apos translacao */
    a2 = ret.area();
    /** Compara o valor das areas antes e apos a translacao*/
    if(a1 == a2){
        cout << "\n A area 1 = " << a1 << "; e a area 2 = " << a2 << endl;
        cout << " Logo, a area permaneceu a mesma!" << endl;
    }
    else{
        cout << "\n A area 1 = " << a1 << "; e a area 2 = " << a2 << endl;
        cout << "\n Algo deu errado. A area do poligono mudou!" << endl;
    }
    /** Inicializa o ponto pr1 */
    Point pr1;
    /** pr1 sera o ponto de rotacao do poligono. A coordenada x do ponto pr1 será a metade da largura do retangulo; enquanto a coordenada
    y de pr1 sera a metade da altura do retangulo ret */
    pr1.setXY(ret.getLarg()/2, ret.getAlt()/2);
    /** Rotacao do retangulo ret */
    ret.rotaciona(30, pr1);
    cout << "Ponto de rotacao: (" << ret.getLarg()/2 << ", " << ret.getAlt()/2 << ")" << endl;
    ret.imprime();
    /** a3 recebe o valor da area do poligono */
    a3 = ret.area();
    /** Compara o valor das areas antes e apos a rotacao */
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
