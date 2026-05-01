#ifndef BURBUJA_H
#define BURBUJA_H

#include <iostream>
#include <string>

using namespace std;


class Burbuja {
public:
    string identificador;
    int valor;

    Burbuja();
    Burbuja(string id, int v);

    bool operator > (const Burbuja& otro) const;
};


template <typename T>
void burbujaIndirecta(T arregloDatos[], T* arregloPunteros[], int n) {
    
    for (int i = 0; i < n; i++) {
        arregloPunteros[i] = &arregloDatos[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {

            if (*arregloPunteros[j] > *arregloPunteros[j + 1]) {

                T* aux = arregloPunteros[j];
                arregloPunteros[j] = arregloPunteros[j + 1];
                arregloPunteros[j + 1] = aux;
            }
        }
    }
}

#endif
