//
// Created by sebas on 18/03/2022.
//

#include "Circulo.h"

Circulo::Circulo() {
    //id = 3;
}

Circulo::Circulo(double radio) {
    this -> radio = radio;
    id = 3;
}

void Circulo::dibujarFigura() {


}

double Circulo::calcularAreaFigura() {
    double area;
    area = radio*(3.1416);//buscar libreria de math o parecidos
    return area;
}

double Circulo::calcularPerimetroFigura() {
    double perimetro;
    perimetro = 2*(3.1416)*r;
    return perimetro;
}
