#include "MergeSort.h"

void OrdenamientoMerge::mezclar(int arreglo[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    int* L = new int[n1];
    int* R = new int[n2];

    for (int i = 0; i < n1; i++) L[i] = arreglo[izquierda + i];
    for (int j = 0; j < n2; j++) R[j] = arreglo[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arreglo[k] = L[i];
            i++;
        } else {
            arreglo[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arreglo[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arreglo[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void OrdenamientoMerge::ordenar(int arreglo[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;

        ordenar(arreglo, izquierda, medio);
        ordenar(arreglo, medio + 1, derecha);

        mezclar(arreglo, izquierda, medio, derecha);
    }
}

void OrdenamientoMerge::imprimirArreglo(int arreglo[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        cout << "[" << arreglo[i] << "] ";
    }
    cout << endl;
}
