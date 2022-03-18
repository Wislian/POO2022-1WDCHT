//
// Created by sebas on 18/03/2022.
//

#include "Rectangulo.h"

Rectangulo::Rectangulo() {
    //id = 2;
}

Rectangulo::Rectangulo(double base, double altura) {
    this -> base = base;
    this -> altura  = altura;
    id = 2;
}

void Rectangulo::dibujarFigura() {
    for( i = 1; i <= altura; i++ ){
        for(j = 1; j <= base; j++ ) {
            cout << "*";
        }
        cout "\n";
    }

}

double Rectangulo::calcularAreaFigura() {
    double area;
    area = base*altura;
    return area;
}

double Rectangulo::calcularPerimetroFigura() {
    double perimetro;
    perimetro = 2(base)+2(altura);
    return perimetro;
}
/*
double Rectangulo:: calcularAreaFigura(double base, double altura){
    double resultado=0;
    resultado = (base*altura);
    std::cout <<resultado<<"area cuadrada";

}
double Rectangulo::calcularPerimetroFigura(double base, double altura){
    double resultado=0;
    resultado = (base*2)+(altura*2);
    std::cout <<resultado<<"perimetro ";
}
 */
