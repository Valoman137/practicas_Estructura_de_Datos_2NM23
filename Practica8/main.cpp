#include <iostream>
#include "Pila.h"

using namespace std;

int main() {
    ManejadorPila pila;
    int opcion, valor;

    do {
        cout << "\n Seleccione una opcion" << endl;
        cout << "1. Apilar (Push)" << endl;
        cout << "2. Desapilar (Pop)" << endl;
        cout << "3. Ver Tope (Top)" << endl;
        cout << "4. Ver Tamano" << endl;
        cout << "5. Mostrar pila" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese valor: ";
                cin >> valor;
                pila.apilar(valor);
                break;
            case 2:
                pila.desapilar();
                break;
            case 3:
                pila.mostrarTope();
                break;
            case 4:
                cout << "Elementos totales: " << pila.obtenerTamano() << endl;
                break;
            case 5:
                pila.mostrarTodo();
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 0);

    return 0;
}
