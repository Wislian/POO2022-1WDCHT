#include "View.h"

using std::cin;
using std::cout;
using std::string;

void menuPrincipal(View view){
    int opcion = 0;
    do
    {
        cout << " Bienvenido\n";
        cout << "1. Agregar una nueva figura\n";
        cout << "2. Mostra todas las figuras existentes\n";
        cout << "3. Mostrar figuras con colores\n";
        cout << "4. Suma total de todas las areas de las figuras registradas\n";
        cout << "0.  Salir \n";

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            view.agregarFigura();
            break;
        case 2:
            view.probarPolimorfismo();
            break;
        case 3:
            view.mostrarFigurasConColores();
            break;
        case 4:
            view.sumArea();
        default:
            break;
        }
    } while (opcion != 0);
}

int main() {
    View view;
    view.combinarReferencias();
    menuPrincipal(view);
    return 0;
}
