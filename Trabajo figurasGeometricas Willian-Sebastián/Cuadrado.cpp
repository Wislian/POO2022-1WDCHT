//
// Created by sebas on 18/03/2022.
//
#define MOD 2
#include "Cuadrado.h"

Cuadrado::Cuadrado() {
    //id = 1;
}

Cuadrado::Cuadrado(double lado) {
    this -> lado = lado;
    this -> area = calcularAreaFigura( lado );
    this -> perimetro = calcularPerimetroFigura( lado );
    id = 1;
}

void Cuadrado::dibujarFigura() {
    for( int i = 1; i <= this -> lado; i++ ){
        for(int j = 1; j <= this->lado; j++ ) {
            cout << "*";
        }
        cout<<"\n";
    }

}

double Cuadrado::calcularAreaFigura(double lado) {
    double area;
    area = lado*lado;
    return area;
}

double Cuadrado::calcularPerimetroFigura(double lado) {
    double perimetro;
    perimetro = 4*(lado);
    return perimetro;
}

double Cuadrado::getPerimetro(){
    return this->perimetro;

}
double Cuadrado::getArea(){
    return this->area;

}
int Cuadrado::getId(){
    return this->id;

}

