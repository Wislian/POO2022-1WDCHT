//
// Created by sebas on 18/03/2022.
//
#include <math.h>
#include "Circulo.h"

void Circulo:: dibujarFigura(){

}
double Circulo:: calcularAreaFigura(double radio){
    double resultado=0;
    resultado=M_PI* pow(radio,2);
    return resultado;

}
double Circulo::calcularPerimetroFigura(double radio){
    double resultado=0;
    resultado = 2*M_PI*radio;
    return resultado;
}