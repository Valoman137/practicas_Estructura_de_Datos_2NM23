#include "ArregloNumeros.h"
#include <iostream>
#include <algorithm> // para sort

using namespace std;

ArregloNumeros::ArregloNumeros(int t) {
    tamanio = t;
    numeros = new float[tamanio]; // memoria dinámica
}

ArregloNumeros::~ArregloNumeros() {
    delete[] numeros;
}

void ArregloNumeros::ingresar() {
    cout << "Ingresa " << tamanio << " numeros:\n";
    for (int i = 0; i < tamanio; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> *(numeros + i); // acceso con puntero
    }
}

float ArregloNumeros::suma() {
    float suma = 0;
    for (int i = 0; i < tamanio; i++) {
        suma += *(numeros + i);
    }
    return suma;
}

float ArregloNumeros::promedio() {
    return suma() / tamanio;
}

float ArregloNumeros::media() {
    float* copia = new float[tamanio];

    for (int i = 0; i < tamanio; i++) {
        copia[i] = numeros[i];
    }

    sort(copia, copia + tamanio);

    float resultado;
    if (tamanio % 2 == 0) {
        resultado = (copia[tamanio / 2 - 1] + copia[tamanio / 2]) / 2;
    } else {
        resultado = copia[tamanio / 2];
    }

    delete[] copia;
    return resultado;
}

float ArregloNumeros::maximo() {
    float max = numeros[0];
    for (int i = 1; i < tamanio; i++) {
        if (*(numeros + i) > max) {
            max = *(numeros + i);
        }
    }
    return max;
}

float ArregloNumeros::minimo() {
    float min = numeros[0];
    for (int i = 1; i < tamanio; i++) {
        if (*(numeros + i) < min) {
            min = *(numeros + i);
        }
    }
    return min;
}
