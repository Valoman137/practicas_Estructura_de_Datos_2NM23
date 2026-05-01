#include "QuickSort.h"

void OrdenamientoQuick::intercambiar(int& a, int& b) {
    int temporal = a;
    a = b;
    b = temporal;
}

int OrdenamientoQuick::particion(int arreglo[], int bajo, int alto) {
    int pivote = arreglo[alto]; 
    int i = (bajo - 1); 

    for (int j = bajo; j <= alto - 1; j++) {
        if (arreglo[j] <= pivote) {
            i++;
            intercambiar(arreglo[i], arreglo[j]);
        }
    }
    intercambiar(arreglo[i + 1], arreglo[alto]);
    return (i + 1);
}

void OrdenamientoQuick::ordenar(int arreglo[], int bajo, int alto) {
    if (bajo < alto) {
        int pi = particion(arreglo, bajo, alto);

        ordenar(arreglo, bajo, pi - 1);
        ordenar(arreglo, pi + 1, alto);
    }
}

void OrdenamientoQuick::imprimirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        cout << "[" << arreglo[i] << "] ";
    }
    cout << endl;
}
