#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point{
private:
    float x;
    float y;
public:

    void setX(float _x);
    void setY(float _y);
    void setXY(float _x, float _y);
    float getX(void);
    float getY(void);
    Point add(Point p1);
    Point sub(Point p1);
    float norma(void);
    void translada(float a, float b);
    void imprime(void);

};




#endif // POINT_H_INCLUDED
