#include <iostream>
#include <cstdlib>
#include <cmath>
#include "poligono.h"
#include "point.h"


#define PI 3.14159265


using namespace std;

/** \brief Insere o numero de vertices */
void Poligono::setN(int _n){
    /**
        \details Insere o numero de vertices do poligono
        \param _n Valor do tipo inteiro que indica o numero de vertices
     */
    int nv;
    cout << "\n DIGITE O NUMERO DE VERTICES DO SEU POLIGONO: ";
    cin >> nv;
    cout << endl;
    while(nv<3 || nv>100){
        cout << "\n SEU POLIGONO DEVE POSSUIR ENTRE 3 e 100 VERTICES!!! \n\n\n POR FAVOR, DIGITE NOVAMENTE O NUMERO DE VERTICES DO SEU POLIGONO: ";
        cin >> nv;
        cout << endl;
    }
    n = nv;
}

/** \brief Insere o numero de vertices */
int Poligono::getN (void){
    /**
        \details Recupera o numero de vertices do poligono
        \return Retorna o numero de vertices do poligono
     */
    return n;
}


/** \brief Insere os vertices */
void Poligono::setVertices(){
    /**
        \details Insere os n vertices do poligono
     */
    cout << "\n INSIRA OS  " << n << " VERTICES: " << endl;
    float a;
    float b;
    for(int i=0; i<n; i++){
        cout << "\tV" << i << "(x" << i << ", y" << i << ") : ";
        cin >> a >> b;
        p[i].setX(a);
        p[i].setY(b);
    }
    p[n].setX(p[0].getX());
    p[n].setY(p[0].getY());
    cout << "\n\n";
}


/** \brief Insere os vertices do retangulo */
void Poligono::setRet(float x, float y, float largura, float altura){
    /**
        \details Insere os 4 vertices do objeto da classe retangulo, herdeira da classe poligono.
        \param x Valor do tipo float da coordenada x do vertice superior esquerdo do retangulo
        \param y Valor do tipo float da Coordenada y do vertice superior esquerdo do retangulo
        \param largura Valor do tipo float da largura do retangulo
        \param altura Valor do tipo float da altura do retangulo
     */
    p[0].setX(x);
    p[0].setY(y);

    p[1].setX(x);
    p[1].setY(y-altura);

    p[2].setX(x+largura);
    p[2].setY(y-altura);

    p[3].setX(x+largura);
    p[3].setY(y);

    p[4].setX(x);
    p[4].setY(y);

    n=4;
}

/** \brief Calcula area */
float Poligono::area(void){
    /**
        \details Calcula a area do poligono
     */
    float area;
    float a = 0;
    float b = 0;
    float tmp;
    for(int i=0; i<n; i++){
        tmp = 0;
        tmp = p[i].getX()*p[i+1].getY();
        a = a + tmp;
        tmp = 0;
        tmp = p[i].getY()*p[i+1].getX();
        b = b + tmp;
    }

    if(a>0 && b>0){
        if(a>b){
            area = (a-b)/2;
        }
        else{
            area = (b-a)/2;
        }
    }
    else if(a<=0 || b<=0){
        if(a<=0 && b<=0){
            area = (a-b)/2;
        }
        else if(a<=0 && b>=0){
            area = (b-a)/2;
        }
        else if(a>=0 && b<=0){
            area = (a-b)/2;
        }
    }
    else{
        area = (a-b)/2;
    }

    if(area<0){
        area = area * -1;
    }
    cout << "\n AREA DO POLIGONO = " << area << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << endl;
    system("PAUSE");
    cout << endl;
    return area;
}

/** \brief Translada poligono */
void Poligono::translada(float a, float b){
    /**
        \details Translada o poligono somando a e b nas cordenadas x e y, respectivamente
        \param a Valor do tipo float que sera somado as coordanas x dos vertices do poligono
        \param b Valor do tipo float que sera somado as coordanas y dos vertices do poligono
     */
    cout << "\n\n \t\t TRANSLACAO\n";
    cout << "\n TRANSLADA " << a << " EM X;" << endl;
    cout << " TRANSLADA " << b << " EM Y;" << endl;
    for(int i=0; i<n; i++){
        p[i].setX(p[i].getX()+a);
        p[i].setY(p[i].getY()+b);
    }
    p[n].setX(p[n].getX() + a);
    p[n].setY(p[n].getY() + b);
    cout << endl;
    system("PAUSE");
    cout << endl;
}

/** \brief Rotaciona poligono */
void Poligono::rotaciona(float ang, Point pRot){
    /**
        \details Rotaciona o poligono num angulo ang em relacao a um ponto pRot
        \param ang Valor do tipo float que indica o angulo em que o poligono sera rotacionado
        \param pRot Objeto da classe Point que indica o ponto de referencia para a rotacao do poligono
     */
    cout << "\n\n \t\t ROTACAO\n";
    for(int i=0; i<n; i++){
        float x;
        float y;
        x = p[i].getX();
        y = p[i].getY();
        p[i].setX( ((x - pRot.getX()) *cos(ang*PI/180)) - ((y - pRot.getY()) *sin(ang*PI/180)));
        p[i].setY( ((x - pRot.getX()) *sin(ang*PI/180)) + ((y - pRot.getY()) *cos(ang*PI/180)));
    }
    p[n].setX(p[0].getX());
    p[n].setY(p[0].getY());
    cout << endl;
    system("PAUSE");
    cout << endl;
}

/** \brief Imprime poligono */
void Poligono::imprime (){
    /**
        \details Imprime os vertices do poligono no sentido anti-horario
     */
    cout << endl;
    if(getN()== 4){
        cout << "\n RETANGULO: ";
    }
    else{
    cout << "\n POLIGONO: ";
    }
    for(int i=0; i<n; i++){
        cout << " V" << i << "(" << p[i].getX() << ", " << p[i].getY() << ") ->";
    }
    cout << " V0(" << p[n].getX() << ", " << p[n].getY() << ")" << endl;
    cout << endl;
    cout << endl;
    system("PAUSE");
    cout << endl;
}
