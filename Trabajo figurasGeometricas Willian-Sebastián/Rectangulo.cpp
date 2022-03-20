//
// Created by Sebastián Gómez & Willian Chapid on 18/03/2022.
//

#include "Rectangulo.h"

Rectangulo::Rectangulo() {
    //id = 2;
}

Rectangulo::Rectangulo(double base, double altura) {
    this -> base = base;
    this -> altura  = altura;
    this -> area = calcularAreaFigura( base, altura );
    this -> perimetro = calcularPerimetroFigura( base, altura );
    id = 2;
}

void Rectangulo::dibujarFigura() {
    for (int i = 1; i <= this->altura; i++) {
        for (int j = 1; j <= this->base; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

double Rectangulo::calcularAreaFigura(double base, double altura) {
        double area;
        area = (base * altura);
        return area;
}

double Rectangulo::calcularPerimetroFigura(double base, double altura) {
        double perimetro;
        perimetro = (2 * base) + (2 * altura);
        return perimetro;
}

double Rectangulo::getPerimetro(){
    return this->perimetro;
}
double Rectangulo::getArea(){
    return this->area;
}
int Rectangulo::getId(){
    return this->id;
}



