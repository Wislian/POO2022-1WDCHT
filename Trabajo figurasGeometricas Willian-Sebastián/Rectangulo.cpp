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
    id = 2;
}

void Rectangulo::dibujarFigura(double base, double altura) {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= base; j++) {
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

/*
double Rectangulo:: calcularAreaFigura(double base, double altura){
    double resultado=0;
    resultado = (base*altura);
    std::cout <<resultado<<"area cuadrada";

}
 void Rectangulo::dibujarFigura(double base, double altura){
    for (int i=0; i < altura; i++)
    {
        for (int j=0; j < base; j++) {
            cout << "*";
        }
        cout << endl;
    }

double Rectangulo::calcularPerimetroFigura(double base, double altura){
    double resultado=0;
    resultado = (base*2)+(altura*2);
    std::cout <<resultado<<"perimetro ";
}
 */
