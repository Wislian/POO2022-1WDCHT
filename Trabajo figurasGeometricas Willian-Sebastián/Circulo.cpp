//
// Created by sebas on 18/03/2022.
//
#include <math.h>
#include "Circulo.h"

Circulo::Circulo() {

}

Circulo::Circulo(double radio) {
    this -> radio = radio;
    id = 3;
}

void Circulo:: dibujarFigura(double radio){
    for(int i=0; i<=radio * 2; i++){
        for (int j=0; j<= radio * 2; j++){
            if(pow((i-radio),2)+pow((j-radio),2)<= pow(radio,2) ) {
                cout << "*";
            }else {
                cout << " ";
            }
        }
        cout<<"\n";
    }
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
