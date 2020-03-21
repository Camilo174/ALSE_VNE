#include "pentagono.h"

Pentagono::Pentagono(float l, float a, float x, float y)
{
    _lado = l;
    _apotema = a;
    setX(x);
    setY(y);
}

Pentagono::Pentagono(){}

float Pentagono::perimetro(){
    return 5*_lado;
}

float Pentagono::area(){
    return ((5*_lado)*(_apotema))/2;
}
