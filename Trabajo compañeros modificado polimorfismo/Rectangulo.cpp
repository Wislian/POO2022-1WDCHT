#include "Rectangulo.h"

Rectangulo::Rectangulo(){
    cout << "Rectangulo\n";
    base = 0;
    altura = 0;
}

Rectangulo::Rectangulo(float base, float altura) {
    cout << "Rectangulo2\n";
    this->base = base;
    this->altura = altura;
}

void Rectangulo::nombreFigura() {
    cout << "Rectangulo\n";
}

float Rectangulo::averiguarPerimetro(){
    perimetro = (base * 2) + (altura * 2);
    return perimetro;
}

float Rectangulo::averiguarArea(){
    area = base * altura;
    return area;
}

void Rectangulo::dibujarFigura() {
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= base; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void Rectangulo::dibujarFigura(int color) {
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),color);
    dibujarFigura();
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),7);
}

