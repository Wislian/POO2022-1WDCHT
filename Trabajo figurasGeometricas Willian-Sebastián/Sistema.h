//
// Created by sebas on 18/03/2022.
//

#ifndef HERENCIA_Y_POLMORFISMO_SISTEMA_H
#define HERENCIA_Y_POLMORFISMO_SISTEMA_H

#include <vector>
#include "FiguraGeometrica.h"
using std::cin;
using std::cout;
using std::endl;
using std::vector;


class Sistema {
private:
    vector<FiguraGeometrica*> figurasGeometricas;
public:
    Sistema();
    void agregarFiguras();
    void mostrarPerimetros();
    double sumarAreas();
    void mostrarAreas();
    void dibujarFiguras();
};


#endif //HERENCIA_Y_POLMORFISMO_SISTEMA_H
