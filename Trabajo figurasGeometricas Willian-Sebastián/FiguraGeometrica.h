//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H
#define HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H

#include <iostream>


class FiguraGeometrica {

public:
    virtual void dibujarFigura();
    virtual double calcularAreaFigura();
    virtual double calcularPerimetroFigura();

};


#endif //HERENCIA_Y_POLMORFISMO_FIGURAGEOMETRICA_H
