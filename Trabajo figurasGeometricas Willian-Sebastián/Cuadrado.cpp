//
// Created by sebas on 18/03/2022.
//

#include "Cuadrado.h"

Cuadrado::Cuadrado() {
    //id = 1;
}

Cuadrado::Cuadrado(double lado) {
    this -> lado = lado;
    id = 1;
}

void Cuadrado::dibujarFigura() {
    for( i = 1; i <= lado; i++ ){
        for(j = 1; j <= lado; j++ ) {
            cout << "*";
        }
        cout "\n";
    }

}

double Cuadrado::calcularAreaFigura() {
    double area;
    area = lado*lado;
    return area;
}

double Cuadrado::calcularPerimetroFigura() {
    double perimetro;
    perimetro = 4(lado);
    return perimetro;
}