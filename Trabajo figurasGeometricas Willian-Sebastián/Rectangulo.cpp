//
// Created by Sebastián Gómez & Willian Chapid on 18/03/2022.
//

#include "Rectangulo.h"

Rectangulo::Rectangulo() {};
Rectangulo::Rectangulo(double base, double altura){
    this-> base=base;
    this-> altura=altura;
}
void Rectangulo::dibujarFigura(double base, double altura){
    for (int i=0; i < altura; i++)
    {
        for (int j=0; j < base; j++) {
            cout << "*";
        }
        cout << endl;
    }

}
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
