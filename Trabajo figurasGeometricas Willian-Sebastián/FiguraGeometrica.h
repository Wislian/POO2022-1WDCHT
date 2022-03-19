//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H
#define HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H

#include <iostream>

#include "Sistema.h"


class FiguraGeometrica {
protected:
    double area;
    double perimetro;

public:
    virtual void dibujarFigura();
    virtual void mostrarPerimetros();
    virtual double calcularAreaFigura();
    virtual double calcularPerimetroFigura();

};


#endif //HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H
