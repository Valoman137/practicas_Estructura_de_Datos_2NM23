#include <iostream>
#include "ArregloNumeros.h"

using namespace std;

int main() {
    ArregloNumeros obj(5);

    obj.ingresar();

    cout << "\nResultados:\n";
    cout << "Suma: " << obj.suma() << endl;
    cout << "Promedio: " << obj.promedio() << endl;
    cout << "Media: " << obj.media() << endl;
    cout << "Maximo: " << obj.maximo() << endl;
    cout << "Minimo: " << obj.minimo() << endl;

    return 0;
}
