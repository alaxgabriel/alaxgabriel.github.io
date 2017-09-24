/*
    \mainpage
    \author Alax Gabriel
    \version 0.0.0.1
    \data setembro de 2017

*/

#include <iostream>         // Biblioteca de entrada e saida
#include <cstdlib>          // Biblioteca padrao
#include "poligono.h"       // Referencia para a classe poligono
#include "point.h"          // Referencia para a classe point
#include "retangulo.h"      // Referencia para a classe retangulo

using namespace std;

int main()
{
    float a1;
    /** a1 Recebe a area do poligono inicializado. */

    float a2;
    /** a2 Recebe a area do poligono apos a translacao. */

    float a3;
    /** a3 Recebe a area do poligono apos rotacao. */

    Retangulo ret(0,0,4,3);
    /** ret Implementacao do retangulo com vertice (0,0), largura 4 e altura 3. */

    ret.imprime();
    /** ret.imprime imprime o poligono ret. */

    a1 = ret.area();
    /** a1 recebe o valor da area do poligono. */

    ret.translada(-3,4);
    /** ret.translada Translada o poligono ret com -3 em x e 4 em y. */
    ret.imprime();

    /** a2 recebe o valor da area do poligono apos translacao. */
    a2 = ret.area();

    /** Compara o valor das areas antes e apos a translacao. */
    if(a1 == a2){
        cout << "\n A AREA 1 = " << a1 << "; E A AREA 2 = " << a2 << endl;
        cout << " LOGO, A AREA PERMANECEU A MESMA!" << endl;
    }
    else{
        cout << "\n A AREA 1 = " << a1 << "; E A AREA 2 = " << a2 << endl;
        cout << "\n ALGO DEU ERRADO. A AREA DO POLIGONO MUDOU!" << endl;
    }

    /** Inicializa o ponto pr1 */
    Point pr1;
    /** pr1 sera o ponto de rotacao do poligono. A coordenada x do ponto pr1 sera a metade da largura do retangulo; enquanto a coordenada
    y de pr1 sera a metade da altura do retangulo ret */
    pr1.setXY(ret.getLarg()/2, ret.getAlt()/2);


    float ang1;
    /** ang1 Sera o angulo de rotacao em graus. */

    ang1 = 30;

    ret.rotaciona(ang1, pr1);
    /** ret.rotaciona(ang, pr1) Rotacao do retangulo ret */

    cout << "PONTO DE ROTACAO: (" << ret.getLarg()/2 << ", " << ret.getAlt()/2 << ")" << endl;
    cout << "ANGULO DE ROTACAO: " << ang1 << " GRAUS" << endl;

    ret.imprime();

    /** a3 recebe o valor da area do poligono */
    a3 = ret.area();
    /** Compara o valor das areas antes e apos a rotacao */
    if(a3 - a2 >= 0){
        cout << "\n A AREA 1 = " << a3 << "; E A AREA 2 = " << a2 << endl;
        cout << " LOGO, A AREA PERMANECEU A MESMA!" << endl;
    }
    else {
        cout << "\n A AREA 1 = " << a3 << "; E A AREA 2 = " << a2 << endl;
        cout << "\n ALGO DEU ERRADO. A AREA DO POLIGONO MUDOU!" << endl;
    }

    return 0;
}
