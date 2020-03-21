#ifndef CUADRADO_H
#define CUADRADO_H

#include "Geometrica.h"

class Cuadrado: public Geometrica {
public:

    Cuadrado(float l, float x=0., float y = 0.);

    float area();
    float perimetro();

    void setLado(float l){_lado=l;}
    float getLado(){return _lado;}

private:
    float _lado;
    Cuadrado();
};

#endif // CUADRADO_H
