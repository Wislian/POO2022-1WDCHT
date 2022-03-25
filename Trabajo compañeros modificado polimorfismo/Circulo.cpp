#include "Circulo.h"

Circulo::Circulo(){
    radio = 0;
}

Circulo::Circulo(float radio) {
    this->radio = radio;
}

void Circulo::nombreFigura(){
    cout << "Circulo\n";
}

float Circulo::averiguarPerimetro(){
    float pi = M_PI;
    perimetro = 2 * pi * radio;
    return perimetro;
}

float Circulo::averiguarArea() {
    float pi = M_PI;
    area = (pow(radio, 2)) * pi;
    return area;
}

void Circulo::dibujarFigura() {
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

void Circulo::dibujarFigura(int color) {
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),color);
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
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),7);
}

