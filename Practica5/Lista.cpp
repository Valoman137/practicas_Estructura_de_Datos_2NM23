#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista() {
    tamanio = 0;
}

bool Lista::estaLlena() {
    return tamanio == 5;
}

bool Lista::estaVacia() {
    return tamanio == 0;
}

bool Lista::insertar(int valor, int posicion) {
    if (estaLlena() || posicion < 0 || posicion > tamanio) {
        cout << "No se puede insertar\n";
        return false;
    }

    // mover elementos a la derecha
    for (int i = tamanio; i > posicion; i--) {
        datos[i] = datos[i - 1];
    }

    datos[posicion] = valor;
    tamanio++;
    return true;
}

bool Lista::eliminar(int posicion) {
    if (estaVacia() || posicion < 0 || posicion >= tamanio) {
        cout << "No se puede eliminar\n";
        return false;
    }

    // mover elementos a la izquierda
    for (int i = posicion; i < tamanio - 1; i++) {
        datos[i] = datos[i + 1];
    }

    tamanio--;
    return true;
}

int Lista::buscar(int valor) {
    for (int i = 0; i < tamanio; i++) {
        if (datos[i] == valor) {
            return i;
        }
    }
    return -1;
}

void Lista::mostrar() {
    if (estaVacia()) {
        cout << "Lista vacia\n";
        return;
    }

    cout << "Elementos de la lista:\n";
    for (int i = 0; i < tamanio; i++) {
        cout << datos[i] << endl;
    }
}
