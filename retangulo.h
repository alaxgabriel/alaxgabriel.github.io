#include "poligono.h"
#include "point.h"
#ifndef RETANGULO_H_INCLUDED
#define RETANGULO_H_INCLUDED

class Retangulo : public Poligono{
private:
    float larg;  // Largura do retangulo
    float alt;   // Altura do retangulo

public:
    // Declaracao dos metodos da classe Retangulo.
    Retangulo(float x, float y, float largura, float altura);
    float getAlt(void);
    float getLarg(void);
    ~Retangulo();
};


#endif // RETANGULO_H_INCLUDED
