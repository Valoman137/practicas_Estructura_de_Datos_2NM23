#include "QuickIndirecto.h"

void QuickIndirecto::intercambiar(int*& a, int*& b) {
    int* temporal = a;
    a = b;
    b = temporal;
}

int QuickIndirecto::particion(int* punteros[], int bajo, int alto) {
    int pivote = *punteros[alto]; 
    int i = (bajo - 1);

    for (int j = bajo; j <= alto - 1; j++) {
        // Comparamos el valor 
        if (*punteros[j] <= pivote) {
            i++;
            intercambiar(punteros[i], punteros[j]);
        }
    }
    intercambiar(punteros[i + 1], punteros[alto]);
    return (i + 1);
}

void QuickIndirecto::ordenar(int* punteros[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(punteros, bajo, alto);
        ordenar(punteros, bajo, pi - 1);
        ordenar(punteros, pi + 1, alto);
    }
}

void QuickIndirecto::imprimirDatos(int* punteros[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        cout << "[" << *punteros[i] << "] ";
    }
    cout << endl;
}
