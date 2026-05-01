#ifndef MERGESORT_H
#define MERGESORT_H

#include <iostream>
using namespace std;

class OrdenamientoMerge {
public:
    // Función principal para ordenar
    void ordenar(int arreglo[], int izquierda, int derecha);
    
    // Función para mezclar las subpartes
    void mezclar(int arreglo[], int izquierda, int medio, int derecha);
    
    // Función auxiliar para imprimir el arreglo
    void imprimirArreglo(int arreglo[], int tamano);
};

#endif
