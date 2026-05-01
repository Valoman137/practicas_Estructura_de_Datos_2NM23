#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
using namespace std;

class OrdenamientoQuick {
public:
    void intercambiar(int& a, int& b);
    
    int particion(int arreglo[], int bajo, int alto);
    
    void ordenar(int arreglo[], int bajo, int alto);
    
    void imprimirArreglo(int arreglo[], int tamano);
};

#endif
