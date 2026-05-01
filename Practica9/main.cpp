#include <iostream>
#include "Cola.h"

using namespace std;

int main() {
    ManejadorCola cola;
    int opcion, valor;

    do {
        cout << "\n Ingrese un dato" << endl;
        cout << "1. Insertar valor (Push)" << endl;
        cout << "2. Eliminar valor (Pop)" << endl;
        cout << "3. Ver frente (Front)" << endl;
        cout << "4. Ver tamano" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese un valor numerico: ";
                cin >> valor;
                cola.insertar(valor);
                break;
            case 2:
                cola.eliminar();
                break;
            case 3:
                cola.mostrarFrente();
                break;
            case 4:
                cout << "Tamano actual: " << cola.obtenerTamano() << endl;
                break;
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 0);

    return 0;
}
