#ifndef GEOMETRICA_H
#define GEOMETRICA_H
#include<iostream>

using namespace std;

class Geometrica {
public:


    virtual float area();
    virtual float perimetro();

    void setX(float x){_xc = x;}
    float getX(){return _xc;}

    void setY(float y){_yc = y;}
    float getY(){return _yc;}

    Geometrica();
    ~Geometrica();

private:
    float _xc;
    float _yc;
    float _angulo;

};

#endif // GEOMETRICA_H
