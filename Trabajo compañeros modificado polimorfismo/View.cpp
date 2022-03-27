#include "View.h"

void View::agregarCuadrado() {
    float lado = 0;
    cout << "Ingrese la medida del lado del Cuadrado: ";
    cin >> lado;
    Cuadrado tempCuadrado(lado);
    vectorFiguras.push_back(new Cuadrado(tempCuadrado));
}

void View::agregarRectangulo() {
    float base = 0, altura = 0;
    cout << "Ingrese la medida de la base del Rectangulo: ";
    cin >> base;
    cout << "Ingrese la medida de la altura del Rectangulo: ";
    cin >> altura;
    Rectangulo tempRectangulo(base, altura);
    vectorFiguras.push_back(new Rectangulo(tempRectangulo));
}

void View::agregarCirculo() {
    float radio = 0;
    cout << "Ingrese la medida del radio del Circulo: ";
    cin >> radio;
    Circulo tempCirculo(radio);
    vectorFiguras.push_back(new Circulo(tempCirculo));
}

void View::agregarFigura(){
    int opcion = 0;
    do{
        cout << "Ingrese el numero de la figura que desea agregar\n";
        cout << "1. Cuadrado\n";
        cout << "2. Rectangulo\n";
        cout << "3. Circulo\n";
        cout << "0. Salir\n";
        cin >> opcion;
        switch (opcion) {
            case 1:
                agregarCuadrado();
                break;
            case 2:
                agregarRectangulo();
                break;
            case 3:
                agregarCirculo();
                break;
            default:
                break;
        }
    } while (opcion != 0);
}

void View::combinarReferencias(){
    FiguraGeometrica figuraGeometricaObj;
    Cuadrado cuadradObj;
    Rectangulo rectangulObj;
    Circulo circulObj;
}

void View::probarPolimorfismo() {
    for (int i=0; i<vectorFiguras.size(); i++){
        vectorFiguras[i]->nombreFigura();
        cout << "Area = " << vectorFiguras[i]->averiguarArea() << "\n";
        cout << "Perimetro = " << vectorFiguras[i]->averiguarPerimetro() << "\n";
        vectorFiguras[i]->dibujarFigura(0);
    }
}

void View::mostrarFigurasConColores() {
    int opcionColor;
    for (int i=0; i<vectorFiguras.size(); i++){
        vectorFiguras[i]->nombreFigura();
        cout << "Area = " << vectorFiguras[i]->averiguarArea() << "\n";
        cout << "Perimetro = " << vectorFiguras[i]->averiguarPerimetro() << "\n";
        do{
            cout <<"Digite color con el que quiere que se muestre la figura\n";
            cout <<"1) Azul\n2) Verde\n3)Aguamarina\n4)rojo\n5)Purpura\n6)amarillo\n";
            cout << "->";
            cin >> opcionColor;

        }while(opcionColor < 1 || opcionColor > 6);
        vectorFiguras[i]->dibujarFigura(opcionColor);
    }
}

void View::sumArea() {
    int suma = 0;
    for (int i=0; i<vectorFiguras.size(); i++){
        suma += vectorFiguras[i]->averiguarArea();
    }
    cout << "La suma del area de todas las figuras registradas es " << suma << "\n";
}

