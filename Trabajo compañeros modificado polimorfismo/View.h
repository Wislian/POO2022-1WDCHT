#ifndef VIEW_H
#define VIEW_H


#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

class View{
    private:
        vector<FiguraGeometrica*> vectorFiguras;
    public:
        void agregarFigura();
        void probarPolimorfismo();
        void combinarReferencias();
        void sumArea();
        void agregarCuadrado();
        void agregarRectangulo();
        void agregarCirculo();
        void mostrarFigurasConColores();
};
#endif