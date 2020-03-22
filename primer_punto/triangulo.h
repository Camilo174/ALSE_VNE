#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "Geometrica.h"

class Triangulo: public Geometrica{
public:

    Triangulo(float b, float h, float x=0., float y=0.);

    float area();
    float perimetro();

    void setBase(float b){_base = b;}
    float getBase(){return _base;}

    void setAlto(float h){_altura = h;}
    float getAlto(){return _altura;}

private:

    float _base;
    float _altura;

    Triangulo();
};

#endif // TRIANGULO_H
