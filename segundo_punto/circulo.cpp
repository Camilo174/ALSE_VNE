#include "circulo.h"
#include <math.h>

Circulo::Circulo(float r, float x, float y)
{
    _radio = r;
    setX(x);
    setY(y);
}

Circulo::Circulo(){}

float Circulo::area(){
    return M_PI * _radio * _radio;
}

float Circulo::perimetro(){
    return M_PI * 2 * _radio;
}
