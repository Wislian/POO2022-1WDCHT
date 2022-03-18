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
/*

void Cuadrado::dibujarFigura(double lado) {
    int j = 1;
    int k;
    int i = 0;
    cout << endl;
    while( i < lado ) {
        cout << "*";
        i++;
    }
    cout << endl;
    while( j < lado-1 ) {
        k = 0;
        while( k < lado ){
            if( k == 0 || k == lado-1 )
                cout << "*";
            else
                cout << " ";
            k++;
        }
        j++;
        cout << "\n";
    }
    i = 0;
    while( i < lado ) {
        cout << "*";
        i++;
    }
    cout << endl;
}

double Cuadrado::calcularAreaFigura(double lado) {
    double resultado=0;
    resultado = pow(lado,2);
    return resultado;
}

double Cuadrado::calcularPerimetroFigura(double lado) {
    double resultado=0;
    resultado = (lado*4);
    return resultado;
}
*/
