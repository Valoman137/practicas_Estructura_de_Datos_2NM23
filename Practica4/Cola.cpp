#include "Cola.h"
#include <iostream>

using namespace std;

Cola::Cola() {
    frente = 0;
    final = -1;
}

bool Cola::estaLlena() {
    return final == 4;
}

bool Cola::estaVacia() {
    return frente > final;
}

bool Cola::encolar(int valor) {
    if (estaLlena()) {
        cout << "Cola llena\n";
        return false;
    }
    datos[++final] = valor;
    return true;
}

bool Cola::desencolar() {
    if (estaVacia()) {
        cout << "Cola vacia\n";
        return false;
    }
    frente++;
    return true;
}

int Cola::verFrente() {
    if (estaVacia()) {
        cout << "Cola vacia\n";
        return -1;
    }
    return datos[frente];
}

void Cola::mostrar() {
    if (estaVacia()) {
        cout << "Cola vacia\n";
        return;
    }

    cout << "Elementos de la cola:\n";
    for (int i = frente; i <= final; i++) {
        cout << datos[i] << endl;
    }
}
