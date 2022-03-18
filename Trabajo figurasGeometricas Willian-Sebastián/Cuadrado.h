//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_CUADRADO_H
#define HERENCIA_Y_POLMORFISMO_CUADRADO_H


class Cuadrado {
    
private:
    double lado;
    int id;
public:
    Cuadrado();
    Cuadrado(double lado);
    void dibujarFigura();
    double calcularAreaFigura();
    double calcularPerimetroFigura();

};


#endif //HERENCIA_Y_POLMORFISMO_CUADRADO_H
