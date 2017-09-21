#include <iostream>
#include <cstdlib>
#include <cmath>
#include "poligono.h"
#include "point.h"


#define PI 3.14159265

using namespace std;

void Poligono::inicia (){
    int nv;
    cout << "\n Digite o numero de vertices do poligono: ";
    cin >> nv;
    cout << endl;
    while(nv<3 || nv>100){
        cout << "\n Seu poligono deve possuir entre 3 e 100 vertices!!! \n\n\n Por favor digite novamente o numero de vertices do seu poligono: ";
        cin >> nv;
        cout << endl;
    }
    n = nv;
}

void Poligono::inserirVertices(){
    cout << "\n Insira os " << n << " vertices do poligono: " << endl;
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
    //cout << "\tV0(" << p[n].getX() << ", " << p[n].getY() << ")!!!" << endl;
}

void Poligono::print (){
    cout << endl;
    for(int i=0; i<n+1; i++){
        cout << "\tV" << i << "(" << p[i].getX() << ", " << p[i].getY() << ")" << endl;
    }
}

int Poligono::recupera (void){
    int a;
    cout << "\n Numero de vertices do poligono: " << n << endl;
    a = n;
    return a;
}

float Poligono::area(void){
    float area;
    float a = 0;
    float b = 0;
    float tmp;
    for(int i=0; i<n; i++){
        tmp = 0;
        tmp = p[i].getX()*p[i+1].getY();
        //cout << "tmpA" << i << " = " << tmpA << endl;
        a = a + tmp;
        tmp = 0;
        tmp = p[i].getY()*p[i+1].getX();
        //cout << "tmpB" << i << " = " << tmpB << endl;
        b = b + tmp;
    }
    //cout << "\n a = " << a << "\n b = " << b << endl;
    if(a > b){
        area = (a - b)/2;
    }
    else{
        area = (b - a)/2;
    }
    cout << "\n Area do poligono: " << area << endl;
    return area;
}

void Poligono::translada(float a, float b){
    for(int i=0; i<n; i++){
        p[i].setX(p[i].getX()+a);
        p[i].setY(p[i].getY()+b);
    }
    p[n].setX(p[n].getX() + a);
    p[n].setY(p[n].getY() + b);
}

void Poligono::rotaciona(void){
    Point pr;
    float ang;
    float a;
    float b;
    float r;
    cout << "\n Informe o ponto de rotacao para o poligono: ";
    cin >> a >> b;
    pr.setXY(a, b);
    cout << "\n Informe o angulo da rotacao: ";
    cin >> ang;
    while(ang < 0 || ang > 360){
        cout << "\n O angulo deve ser entre 0 e 360 graus!! \n\n Informe o angulo de rotacao: ";
        cin >> ang;
    }

    for(int i=0; i<n; i++){
        r = sqrt( ( pow( ( p[i].getX() - pr.getX() ), 2) ) + ( pow( ( p[i].getY() - pr.getY() ), 2) ) );
        p[i].setX(r*cos(ang*PI/180));
        p[i].setY(r*sin(ang*PI/180));
    }
    p[n].setX(p[0].getX());
    p[n].setY(p[0].getY());

}
