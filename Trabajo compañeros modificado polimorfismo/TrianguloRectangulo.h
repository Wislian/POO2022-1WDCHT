//
// Created by Willian on 25/03/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_TRIANGULORECTANGULO_H
#define EJERCICIO_POLIMORFISMO_TRIANGULORECTANGULO_H

#include "FiguraGeometrica.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using std::cout;
using std::pow;

class TrianguloRectangulo : public FiguraGeometrica{
private:
    float lado;
public:
    TrianguloRectangulo();
    TrianguloRectangulo( float lado );
    float averiguarPerimetro();
    float averiguarArea();
    void dibujarFigura(int i);
    void dibujarFigura( int color );
    void nombreFigura();
};
#endif //EJERCICIO_POLIMORFISMO_TRIANGULORECTANGULO_H
