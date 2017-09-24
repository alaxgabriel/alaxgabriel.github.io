#include "retangulo.h"
#include "poligono.h"
#include "point.h"
#include <cstdlib>
#include <iostream>

using namespace std;

/** brief Construtor da classe */
Retangulo::Retangulo(float x, float y, float largura, float altura){
    /**
        \details Construtor da classe Retangulo que inicializa o objeto
        \param x Valor do tipo float da coordenada x do vertice superior esquerdo do retangulo
        \param y Valor do tipo float da coordenada y do vertice superior esquerdo do retangulo
     */
    setRet(x, y, largura, altura);

    larg = largura;
    alt = altura;
};

/** brief Recupera altura */
float Retangulo::getAlt(){
    /**
        \details Recupera a altura do retangulo
        \return Retorna um valor do tipo float da altura do retangulo
     */
    return alt;
}

/** brief Recupera a largura */
float Retangulo::getLarg(){
    /**
        \details Recupera a largura do retangulo
        \return Retorna um valor do tipo float da largura do triangulo
     */
    return larg;
}

/** brief Destrutor da classe */
Retangulo::~Retangulo(){};


