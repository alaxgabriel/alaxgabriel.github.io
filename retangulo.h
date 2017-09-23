#include "poligono.h"
#include "point.h"
#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

class Retangulo : public Poligono{
private:
    float larg;
    float alt;

public:
    Retangulo(float x, float y, float largura, float altura);
    float getAlt(void);
    float getLarg(void);
    ~Retangulo();
};


#endif // RETANGULO_H_INCLUDED
