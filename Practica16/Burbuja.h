#ifndef BURBUJA_H
#define BURBUJA_H

#include <iostream>
#include <string>

using namespace std;

class Burbuja {
public:
    string identificador;
    int valor;

    // Constructores
    Burbuja();
    Burbuja(string id, int v);

    bool operator > (const Burbuja& otro) const;
};

// Ordenamiento
template <typename T>
void algoritmoBurbuja(T arreglo[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                T aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }
}

#endif
