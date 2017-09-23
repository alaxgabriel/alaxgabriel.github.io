#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED
#include "point.h"

class Poligono{
private:
    int n;
    Point p[101];

public:
    void setN(int _n);
    int getN(void);
    void setVertices(void);
    void setRet(float x, float y, float largura, float altura);
    float area(void);
    void translada(float a, float b);
    void rotaciona(float ang, Point pRot);
    void imprime(void);
};


#endif // POLIGONO_H_INCLUDED
