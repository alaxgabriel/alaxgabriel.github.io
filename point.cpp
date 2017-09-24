#include "point.h"
#include <iostream>
#include <cmath>        // Biblioteca que contem funcoes matematicas

using namespace std;

/** \brief Insere coordenada x */
void Point::setX(float _x){
    /**
        \details Insere coordenada x do ponto
        \param _x Valor do tipo float que indica a coordenada x do ponto
     */
    x = _x;
}

/** \brief INsere coordenada y */
void Point::setY(float _y){
    /**
        \details Insere coordenada y do ponto
        \param _y Valor do tipo float que indica a coordenada y do ponto
     */
    y = _y;
}

/** \brief Insere as coordenadas do ponto */
void Point::setXY(float _x, float _y){
    /**
        \details Insere as coordenadas x e y do ponto
        \param _x Valor do tipo float que indica a coordenada y do ponto
        \param _y Valor do tipo float que indica a coordenada y do ponto
     */
    x = _x;
    y = _y;
}

/** \brief Recupera coordenada x */
float Point::getX(void){
    /**
        \details Recupera a coordenada x do ponto
        \return Retorna a coordenada x do ponto
     */
    return x;
}

/** \brief Recupera coordenada y */
float Point::getY(void){
  /**
        \details Recupera a coordenada y do ponto
        \return Retorna a coordenada y do ponto
     */
    return y;
}

/** \brief Soma pontos */
Point Point::add(Point p1){
    /**
        \details Soma o ponto inicializado, ao ponto p1 passado
        \param p1 Objeto da classe ponto que será somado ao ponto inicializado
        \return Retorna um objeto do tipo ponto, resultado da soma dos pontos
     */
    Point ret;
    ret.x = x + p1.x;
    ret.y = y + p1.y;

    return ret;
}

/** \brief Subtrai pontos */
Point Point::sub(Point p1){
    /**
        \details Subtrai o ponto inicializado, ao ponto p1 passado
        \param p1 Objeto da classe ponto que será subtraido ao ponto inicializado
        \return Retorna um objeto do tipo ponto, resultado da subtracao dos pontos
     */
    Point ret;
    ret.x = x - p1.x;
    ret.y = y - p1.y;

    return ret;
}

/** \brief Calcula a norma */
float Point::norma(){
    /**
        \details Calcula a norma do ponto
        \return Retorna valor do tipo float da norma do ponto
     */
    return (sqrt(x*x+y*y));

}

/** \brief Translada */
void Point::translada(float a, float b){
    /**
        \details Transalada o ponto somando a e b as coordenadas x e y, respectivamente
        \param a Valor do tipo float que sera somada a coordenada x do ponto
        \param b Valor do tipo float que sera somada a coordenada y do ponto
     */
    x = x+a;
    y = y+b;

}

/** \brief Imprime ponto */
void Point::imprime(){
    /**
        \details Imprime as coordenadas x e y do ponto
     */
    cout << "(" << getX() << ", " << getY() << ")" << endl;
}
