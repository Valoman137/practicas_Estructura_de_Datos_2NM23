#include <iostream>
#include "Burbuja.h"

using namespace std;

int main() {
    int nEnt;

    cout << "Ingrese datos "<<endl;
    cout << "Cuantos valores numericos: "; cin >> nEnt;
    int* datosEnt = new int[nEnt];
    int** puntEnt = new int*[nEnt]; 

    for(int i=0; i<nEnt; i++) {
        cout << "Valor [" << i << "]: "; cin >> datosEnt[i];
    }
    burbujaIndirecta(datosEnt, puntEnt, nEnt);

    cout << "Orden: ";
    for(int i=0; i<nEnt; i++) cout << *puntEnt[i] << " ";
    cout << endl;

    
    delete[] datosEnt; delete[] puntEnt;


    return 0;
}
