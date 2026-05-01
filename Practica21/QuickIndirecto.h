#ifndef QUICKINDIRECTO_H
#define QUICKINDIRECTO_H

#include <iostream>
using namespace std;

class QuickIndirecto {
public:
    void intercambiar(int*& a, int*& b);
    
    int particion(int* punteros[], int bajo, int alto);
    
    void ordenar(int* punteros[], int bajo, int alto);
    
    void imprimirDatos(int* punteros[], int tamano);
};

#endif
