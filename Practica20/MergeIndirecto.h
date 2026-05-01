#ifndef MERGEINDIRECTO_H
#define MERGEINDIRECTO_H

#include <iostream>
using namespace std;

class MergeIndirecto {
public:
    void ordenar(int* punteros[], int izquierda, int derecha);
    void mezclar(int* punteros[], int izquierda, int medio, int derecha);
    void imprimirDatos(int* punteros[], int tamano);
};

#endif
