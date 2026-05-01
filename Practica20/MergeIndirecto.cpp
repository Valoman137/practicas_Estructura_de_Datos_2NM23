#include "MergeIndirecto.h"

void MergeIndirecto::mezclar(int* punteros[], int izquierda, int medio, int derecha) {
    int n1 = medio - izquierda + 1;
    int n2 = derecha - medio;

    int** L = new int*[n1];
    int** R = new int*[n2];

    for (int i = 0; i < n1; i++) L[i] = punteros[izquierda + i];
    for (int j = 0; j < n2; j++) R[j] = punteros[medio + 1 + j];

    int i = 0, j = 0, k = izquierda;

    while (i < n1 && j < n2) {
        // Compar contenido 
        if (*L[i] <= *R[j]) {
            punteros[k] = L[i];
            i++;
        } else {
            punteros[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        punteros[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        punteros[k] = R[j];
        j++;
        k++;
    }

    delete[] L;
    delete[] R;
}

void MergeIndirecto::ordenar(int* punteros[], int izquierda, int derecha) {
    if (izquierda < derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        ordenar(punteros, izquierda, medio);
        ordenar(punteros, medio + 1, derecha);
        mezclar(punteros, izquierda, medio, derecha);
    }
}

void MergeIndirecto::imprimirDatos(int* punteros[], int tamano) {
    for (int i = 0; i < tamano; i++) {
        cout << "[" << *punteros[i] << "] ";
    }
    cout << endl;
}
