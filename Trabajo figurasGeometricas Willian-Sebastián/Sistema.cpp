//
// Created by Willian on 17/03/2022.
//

#include "Sistema.h"
#include "Cuadrado.h"
#include "Rectangulo.h"
#include "Circulo.h"

vector<FiguraGeometrica *> figurasGeometricas;

Sistema::Sistema(){

}

void Sistema::agregarFigura() {
    int opc;
    do{
    cout<<"Digite tipo de figura\n"
    <<"(1)Cuadrado, (2)Rectangulo, (3)circulo\n";
    cin >> opc;
    }while(opc != 1 && opc !=2 && opc != 3 );
    switch (opc) {
        case 1:
            double lado;
            cout << "CUADRADO\n";
            cout<< "Digite el valor del lado\n";
            cin >> lado;
            figurasGeometricas.push_back( new Cuadrado( lado ) );
            cout << "Figura creada\n";
            break;
        case 2:
            double base, altura;
            do {
                cout << "RECTANGULO\n";
                cout << "Digite valor de la base\n";
                cin >> base;
                cout << "Digite valor de la altura\n";
                cin >> altura;
            }while(base <= 0 && altura <=0 );
            figurasGeometricas.push_back( new Rectangulo( base, altura ) );
            cout << "Figura creada\n";
            break;
        case 3:
            double radio;
            do{
                cout << "CIRCULO\n";
                cout << "Digite valor del radio\n";
                cin >> radio;
            }while (radio <= 0) ;
            figurasGeometricas.push_back( new Circulo( radio ) );
            cout << "Figura creada\n";
            break;
        default:
            cout << "Opcion invalida\n";
    }
}

void Sistema::mostrarNombreFigura(int i){
    if( figurasGeometricas[i]->getId() == 1 ) {
        cout << "Cuadrado\n";
    }else if(figurasGeometricas[i]->getId() == 2 ){
        cout << "Rectangulo\n";
    }else{
        cout << "Circulo\n";
    }
}

void Sistema::dibujarFiguras() {
    cout << "Dibujar figuras\n";
    for( int i = 0; i < figurasGeometricas.size(); i++ ){
        cout<< "Figura "<<i+1<<" -";
        mostrarNombreFigura(i);
        figurasGeometricas[i]->dibujarFigura();
        cout<<endl;
    }

}


void Sistema::mostrarPerimetros() {
    int id;
    cout << "Mostrar perimetros de cada figura\n";
    for( int i = 0; i < figurasGeometricas.size(); i++ ){
        cout << "Figura #" << i+1 <<" - ";
        mostrarNombreFigura(i);
        cout << figurasGeometricas[i]->getPerimetro()<<" m\n\n";
    }
}

void Sistema::mostrarAreas() {
    cout << "Mostrar area de cada figura\n";
    for( int i = 0; i < figurasGeometricas.size(); i++ ){
        cout << "Figura #" << i+1 <<" - ";
        mostrarNombreFigura(i);
        cout << figurasGeometricas[i]->getArea()<<" m^2\n\n";
    }
}

double Sistema::sumarAreas() {
    double sumaAreas = 0;
    for( int i = 0; i < figurasGeometricas.size(); i++ ){
        sumaAreas += figurasGeometricas[i]->getArea();
    }
     cout << "La suma de todas las areas es: " << sumaAreas << "m^2\n";
    return sumaAreas;
}

Sistema::~Sistema() {
    for( int i = 0; i< figurasGeometricas.size(); i++ ){
        FiguraGeometrica tempFigura = figurasGeometricas[i];
        delete tempFigura;
    }
     cout << "destructor se inicio\n";
}

