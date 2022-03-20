//
// Created by Willian on 17/03/2022.
//
#include <iostream>
#include "Sistema.h"

using std::cout;
using std::endl;

void menu(Sistema sistema){
    int opcion = 0;
    cout<<"Bienvenido a nuestro programa - Willian Chapid & Sebastian Gomez "<<endl;
    do {
        cout << "MENU\n";
        cout << "1) Agregar figura" << endl;
        cout << "2) Dibujar Figuras" << endl;
        cout << "3) Mostrar Perimetros" << endl;
        cout << "4) Suma de Areas" << endl;
        cout << "0) Salir\n";
        cin >> opcion;
        switch (opcion) {
            case 1:
                cout << "AGREGAR FIGURA\n";
                sistema.agregarFigura();
                break;
            case 2:
                cout << "FIGURAS DIBUJADAS\n";
                sistema.dibujarFiguras();
                break;
            case 3:
                cout << "PERIMETROS DE LAS FIGURAS\n";
                sistema.mostrarPerimetros();
                break;
            case 4:
                cout << "SUMA DE LAS AREAS\n";
                sistema.sumarAreas();
                break;
            default: break;

        }
    }while(opcion != 0 );
    cout << "Muchas gracias por usar nuestro sistema , vuelva pronto!!!\n";
}

int main(){
    Sistema sistema;
    menu(sistema);
    return 0;
}

