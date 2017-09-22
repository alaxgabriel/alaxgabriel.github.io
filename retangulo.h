#include "poligono.h"
#include "point.h"
#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

class Retangulo : public Poligono{
    Point pRet[5];
    float n;
public:
    Retangulo(float x, float y, float largura, float altura);
    ~Retangulo();
};


#endif // RETANGULO_H_INCLUDED
