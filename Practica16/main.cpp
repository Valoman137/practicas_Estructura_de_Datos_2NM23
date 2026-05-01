#include <iostream>
#include "Burbuja.h"

using namespace std;

int main() {
    int nEnt;

    cout << "Ingrese datos" << endl;
    cout << "Cantidad de elementos: ";
    cin >> nEnt;
    int* arregloEnteros = new int[nEnt];
    for(int i = 0; i < nEnt; i++) {
        cout << "Entero [" << i << "]: ";
        cin >> arregloEnteros[i];
    }
    algoritmoBurbuja(arregloEnteros, nEnt);
    cout << "Ordenado: ";
    for(int i = 0; i < nEnt; i++) cout << arregloEnteros[i] << " ";
    cout << "\n\n";

    // Liberacion de memoria dinamica
    delete[] arregloEnteros;

    return 0;
}
