#ifndef Circulo_H
#define Circulo_H

#include <iostream>
#include <iomanip>
#include <cmath>
#include "FiguraGeometrica.h"
#include <windows.h>

using std::cout;
using std::pow;

class Circulo : public FiguraGeometrica
{
private:
    float radio;

public:
    Circulo();
    Circulo(float radio);
    float averiguarPerimetro();
    float averiguarArea();
    void dibujarFigura();
    void dibujarFigura( int color );
    void nombreFigura();
};

#endif
