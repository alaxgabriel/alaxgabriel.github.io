#include "point.h"
#include <iostream>
#include <cmath>        // Biblioteca que contem funcoes matematicas

using namespace std;

/** brief Insere coordenada x */
void Point::setX(float _x){
    /**
        \details Insere coordenada x do ponto
        \param _x Valor do tipo float que indica a coordenada x do ponto
     */
    x = _x;
}

/** brief INsere coordenada y */
void Point::setY(float _y){
    /**
        \details Insere coordenada y do ponto
        \param _y Valor do tipo float que indica a coordenada y do ponto
     */
    y = _y;
}

/** brief Insere as coordenadas do ponto */
void Point::setXY(float _x, float _y){
    /**
        \details Insere as coordenadas x e y do ponto
        \param _x Valor do tipo float que indica a coordenada y do ponto
        \param _y Valor do tipo float que indica a coordenada y do ponto
     */
    x = _x;
    y = _y;
}

/** brief Recupera coordenada x */
float Point::getX(void){
    /**
        \details Recupera a coordenada x do ponto
        \return Retorna a coordenada x do ponto
     */
    return x;
}

/** brief Recupera coordenada y */
float Point::getY(void){
  /**
        \details Recupera a coordenada y do ponto
        \return Retorna a coordenada y do ponto
     */
    return y;
}

/** brief Imprime poligono */
Point Point::add(Point p1){
    /**
        \details Rotaciona o poligono num angulo ang em relacao a um ponto pRot
        \param ang Valor do tipo float que indica o angulo em que o poligono sera rotacionado
        \param pRot Objeto da classe Point que indica o ponto de referencia para a rotacao do poligono
     */
    Point ret;
    ret.x = x + p1.x;
    ret.y = y + p1.y;

    return ret;
}

/** brief Imprime poligono */
Point Point::sub(Point p1){
    /**
        \details Rotaciona o poligono num angulo ang em relacao a um ponto pRot
        \param ang Valor do tipo float que indica o angulo em que o poligono sera rotacionado
        \param pRot Objeto da classe Point que indica o ponto de referencia para a rotacao do poligono
     */
    Point ret;
    ret.x = x - p1.x;
    ret.y = y - p1.y;

    return ret;
}

/** brief Imprime poligono */
float Point::norma(){
    /**
        \details Rotaciona o poligono num angulo ang em relacao a um ponto pRot
        \param ang Valor do tipo float que indica o angulo em que o poligono sera rotacionado
        \param pRot Objeto da classe Point que indica o ponto de referencia para a rotacao do poligono
     */
    return (sqrt(x*x+y*y));

}

/** brief Imprime poligono */
void Point::translada(float a, float b){
    /**
        \details Rotaciona o poligono num angulo ang em relacao a um ponto pRot
        \param ang Valor do tipo float que indica o angulo em que o poligono sera rotacionado
        \param pRot Objeto da classe Point que indica o ponto de referencia para a rotacao do poligono
     */
    x = x+a;
    y = y+b;

}

/** brief Imprime poligono */
void Point::imprime(){
    /**
        \details Rotaciona o poligono num angulo ang em relacao a um ponto pRot
        \param ang Valor do tipo float que indica o angulo em que o poligono sera rotacionado
        \param pRot Objeto da classe Point que indica o ponto de referencia para a rotacao do poligono
     */
    cout << "(" << getX() << ", " << getY() << ")" << endl;
}
