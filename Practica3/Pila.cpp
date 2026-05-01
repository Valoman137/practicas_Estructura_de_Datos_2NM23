#include "Pila.h"
#include <iostream>

using namespace std;

Pila::Pila() {
    tope = -1;
}

bool Pila::estaLlena() {
    return tope == 4;
}

bool Pila::estaVacia() {
    return tope == -1;
}

bool Pila::push(int valor) {
    if (estaLlena()) {
        cout << "La pila esta llena\n";
        return false;
    }
    datos[++tope] = valor;
    return true;
}

bool Pila::pop() {
    if (estaVacia()) {
        cout << "La pila esta vacia\n";
        return false;
    }
    tope--;
    return true;
}

int Pila::peek() {
    if (estaVacia()) {
        cout << "Pila vacia\n";
        return -1;
    }
    return datos[tope];
}

void Pila::mostrar() {
    if (estaVacia()) {
        cout << "Pila vacia\n";
        return;
    }

    cout << "Elementos de la pila:\n";
    for (int i = tope; i >= 0; i--) {
        cout << datos[i] << endl;
    }
}
