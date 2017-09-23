#include <iostream>
#include <cstdlib>
#include <cmath>
#include "poligono.h"
#include "point.h"


#define PI 3.14159265


using namespace std;


void Poligono::setN(int _n){
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

int Poligono::getN (void){
    cout << "\n Numero de vertices do poligono: " << n << endl;
    return n;
}

void Poligono::setVertices(){
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
    cout << "\n\n";
}


void Poligono::setRet(float x, float y, float largura, float altura){
    p[0].setX(x);// 0 0
    p[0].setY(y);

    p[1].setX(x);// 0 -3
    p[1].setY(y-altura);

    p[2].setX(x+largura);
    p[2].setY(y-altura);

    p[3].setX(x+largura);
    p[3].setY(y);

    p[4].setX(x);
    p[4].setY(y);

    n=4;
}

float Poligono::area(void){
    float area;
    float a = 0;
    float b = 0;
    float tmp;
    for(int i=0; i<n; i++){
        tmp = 0;
        tmp = p[i].getX()*p[i+1].getY();
        //cout << "tmpA" << i << " = " << tmp;
        a = a + tmp;
        tmp = 0;
        tmp = p[i].getY()*p[i+1].getX();
        //cout << "\t" << "tmpB" << i << " = " << tmp << endl;
        b = b + tmp;
    }

    //cout << "\n a = " << a << "\t b = " << b << endl;

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
    cout << "\n Area do poligono: " << area << endl;
    cout << endl;
    cout << "---------------------------------------" << endl;
    cout << endl;
    system("PAUSE");
    cout << endl;
    return area;
}

void Poligono::translada(float a, float b){
    cout << "\n\n \t\t TRANSLACAO\n";
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

void Poligono::rotaciona(float ang, Point pRot){
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

void Poligono::imprime (){
    cout << endl;
    cout << "\n Poligono: ";
    for(int i=0; i<n; i++){
        cout << " V" << i << "(" << p[i].getX() << ", " << p[i].getY() << ")->";
    }
    cout << " V0(" << p[n].getX() << ", " << p[n].getY() << ")" << endl;
    cout << endl;
    cout << endl;
    system("PAUSE");
    cout << endl;
}
