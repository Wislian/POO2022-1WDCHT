//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_RECTANGULO_H
#define HERENCIA_Y_POLMORFISMO_RECTANGULO_H


class Rectangulo {
private:
    double altura;
    double base;

public:
    Rectangulo();
    Rectangulo(double base, double altura);
    void dibujarFigura();
    double calcularAreaFigura();
    double calcularPerimetroFigura();

};


#endif //HERENCIA_Y_POLMORFISMO_RECTANGULO_H
