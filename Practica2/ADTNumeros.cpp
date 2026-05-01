#include "ADTNumeros.h"
#include <iostream>

using namespace std;

ADTNumeros::ADTNumeros() {
    tamanio = 5;
}

void ADTNumeros::ingresar() {
    cout << "Ingresa 5 numeros:\n";
    for (int i = 0; i < tamanio; i++) {
        cin >> datos[i];
    }
}

int ADTNumeros::suma() {
    int s = 0;
    for (int i = 0; i < tamanio; i++) {
        s += datos[i];
    }
    return s;
}

float ADTNumeros::promedio() {
    return (float)suma() / tamanio;
}
