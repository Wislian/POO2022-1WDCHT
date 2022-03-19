//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_CIRCULO_H
#define HERENCIA_Y_POLMORFISMO_CIRCULO_H

#include "FiguraGeometrica.h"
using std::cout;


class Circulo: public FiguraGeometrica
        {

private:
    double radio;
    int id;
public:
    Circulo();
    Circulo(double radio);
    void dibujarFigura(double radio);
    double calcularAreaFigura(double radio);
    double calcularPerimetroFigura(double radio);
    double getPerimetro();
    double getArea();
    int getId();

};


#endif //HERENCIA_Y_POLMORFISMO_CIRCULO_H
