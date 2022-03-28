#include "Cuadrado.h"

Cuadrado::Cuadrado(){
    cout << "Cuadrado\n";
    lado = 0;
}

Cuadrado::Cuadrado(float lado){
    cout << "Cuadrado2\n";
    this->lado = lado;
}

void Cuadrado::nombreFigura() {
    cout << "Cuadrado\n";
}

float Cuadrado::averiguarPerimetro(){
    perimetro = lado * 4;
    return perimetro;
}

float Cuadrado::averiguarArea(){
    area = pow(lado, 2);
    return area;
}

void Cuadrado::dibujarFigura() {
    for( int i = 1; i <= lado; i++ ){
        for(int j = 1; j <= lado; j++ ) {
            cout << "*";
        }
        cout<<"\n";
    }
}

void Cuadrado::dibujarFigura(int color) {
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),color);
    dibujarFigura();
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),7);
}

