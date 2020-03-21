#include "cuadrado.h"

Cuadrado::Cuadrado(float l, float x, float y)
{
    _lado = l;
    setX(x);
    setY(y);
}

Cuadrado::Cuadrado(){}

float Cuadrado::area()
{
    return _lado*_lado;
}

float Cuadrado::perimetro()
{
    return _lado*4;
}


