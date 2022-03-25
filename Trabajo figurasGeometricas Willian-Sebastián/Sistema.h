//
// Created by Willian on 18/03/2022.
//

#ifndef TRABAJO_FIGURASGEOMETRICAS_WILLIAN_SEBASTIÁN_SISTEMA_H
#define TRABAJO_FIGURASGEOMETRICAS_WILLIAN_SEBASTIÁN_SISTEMA_H

#include "FiguraGeometrica.h"
#include <iostream>
#include <vector>



using std::cin;
using std::cout;
using std::vector;

class Sistema{
private:
    //vector<FiguraGeometrica *> figurasGeometricas;
public:
    Sistema();
    ~Sistema();
    void agregarFigura();
    void mostrarPerimetros();
    void mostrarAreas();
    double sumarAreas();
    void dibujarFiguras();
    void mostrarNombreFigura(int i );

};

#endif //TRABAJO_FIGURASGEOMETRICAS_WILLIAN_SEBASTIÁN_SISTEMA_H
