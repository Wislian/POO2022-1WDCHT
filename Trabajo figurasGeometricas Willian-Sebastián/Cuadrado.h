//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_CUADRADO_H
#define HERENCIA_Y_POLMORFISMO_CUADRADO_H

#include "FiguraGeometrica.h"
#include <math.h>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

class Cuadrado : public FiguraGeometrica
        {

private:
    double lado;
    int id;
public:
    Cuadrado();
    ~Cuadrado();
    Cuadrado(double lado);
    void dibujarFigura();
    double calcularAreaFigura(double lado);
    double calcularPerimetroFigura(double lado);
    double getPerimetro();
    double getArea();
    int getId();

};


#endif //HERENCIA_Y_POLMORFISMO_CUADRADO_H
