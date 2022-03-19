//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H
#define HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H

#include <iostream>
//#include "Sistema.h"


class FiguraGeometrica {
protected:
    double area;
    double perimetro;
    double id;

public:
    virtual void dibujarFigura();
    virtual double getPerimetro();
    virtual double getArea();
    virtual int getId();
    virtual double calcularAreaFigura();
    virtual double calcularPerimetroFigura();

};


#endif //HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H
