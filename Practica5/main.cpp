#include <iostream>
#include "Lista.h"

using namespace std;

int main() {
    Lista l;

    l.insertar(10, 0);
    l.insertar(20, 1);
    l.insertar(30, 2);

    l.mostrar();

    cout << "\nEliminar posicion 1\n";
    l.eliminar(1);

    l.mostrar();

    cout << "\nBuscar 30: posicion " << l.buscar(30) << endl;

    return 0;
}
