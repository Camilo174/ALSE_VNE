#ifndef PENTAGONO_H
#define PENTAGONO_H

#include "Geometrica.h"

class Pentagono: public Geometrica
{
public:

    Pentagono(float l, float a, float x=0., float y=0);

    float area();
    float perimetro();

    void setLado(float l){_lado = l;}
    float getLado(){return _lado;}

    void setApo(float a){_apotema = a;}
    float getApo(){return _apotema;}

private:
    float _lado;
    float _apotema;
    Pentagono();
};

#endif // PENTAGONO_H
