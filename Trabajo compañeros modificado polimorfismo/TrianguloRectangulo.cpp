//
// Created by Willian on 25/03/2022.
//

#include "TrianguloRectangulo.h"

TrianguloRectangulo::TrianguloRectangulo() {
    lado = 0;
}
TrianguloRectangulo::TrianguloRectangulo(float lado) {
    this->lado = lado;
}

void TrianguloRectangulo::dibujarFigura() {
    int cont2 = 1;
    for( int j = 1; cont2 <= this->lado; j++ ) {
        for (int i = 1; i <= cont2; i++) {
            cout << "*";
        }
        cout << "\n";
        cont2++;
    }
}

float TrianguloRectangulo::averiguarArea() {
    float area;
    area = pow(this->lado, this->lado)/2;
    return area;
}

float TrianguloRectangulo::averiguarPerimetro() {
    float perimetro;
    perimetro = pow((2*(this->lado*this->lado)), (1/2));
    return perimetro;
}

void TrianguloRectangulo::nombreFigura() {
    cout << "TrianguloRectangulo\n";
}
void TrianguloRectangulo::dibujarFigura(int color) {
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),color);
    for(int line = 1 ; line <= lado ; line ++)
    {
        for(int col = 1 ; col <= line ; col++){
            cout << "*";
        }
        cout << "\n";
    }
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),7);

}

