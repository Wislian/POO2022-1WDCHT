//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_RECTANGULO_H
#define HERENCIA_Y_POLMORFISMO_RECTANGULO_H

#include "FiguraGeometrica.h"
using std::cin;
using std::cout;
using std::endl;


class Rectangulo : public FiguraGeometrica {
private:
    double altura;
    double base;
    int id;

public:
    Rectangulo();
    Rectangulo(double base, double altura);
    void dibujarFigura(double base, double altura);
    double calcularAreaFigura(double base, double altura);
    double calcularPerimetroFigura(double base, double altura);

};


#endif //HERENCIA_Y_POLMORFISMO_RECTANGULO_H
