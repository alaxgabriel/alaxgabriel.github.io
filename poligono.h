#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "point.h"

class Poligono{
private:
    int n;
    Point p[100];
public:
    void inicia(void);
    void inserirVertices(void);
    int recupera(void);
    float area(void);
    void translada(float a, float b);
    void rotaciona(void);
    void imprime(void);
};


#endif // POLIGONO_H_INCLUDED
