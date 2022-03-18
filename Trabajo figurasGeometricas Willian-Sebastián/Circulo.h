//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_CIRCULO_H
#define HERENCIA_Y_POLMORFISMO_CIRCULO_H

#include "FiguraGeometrica.h"


class Circulo: public FiguraGeometrica{

private:
    double radio;
public:
    Circulo();
    Circulo(double radio);
    void dibujarFigura();
    double calcularAreaFigura();
    double calcularPerimetroFigura();

};


#endif //HERENCIA_Y_POLMORFISMO_CIRCULO_H
