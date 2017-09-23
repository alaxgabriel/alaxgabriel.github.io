#include "retangulo.h"
#include "poligono.h"
#include "point.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Retangulo::Retangulo(float x, float y, float largura, float altura){
    setRet(x, y, largura, altura);

    larg = largura;
    alt = altura;
};

float Retangulo::getAlt(){
    return alt;
}

float Retangulo::getLarg(){
    return larg;
}

Retangulo::~Retangulo(){};


