#include <iostream>
#include <stdlib.h>
#include "Entidades.h"

using namespace std;

int main() {
    const int TAM = 2;

    Persona listaPersonas[TAM];
    Auto listaAutos[TAM];

    for (int i = 0; i < TAM; i++) {
        cout << "\n Registro #" << i + 1 << " ---";
        listaPersonas[i].capturar();
        listaAutos[i].capturar();
        
         
        // Si no es el ultimo elemento, apuntamos al siguiente en el arreglo
        if (i < TAM - 1) {
            listaPersonas[i].siguiente = &listaPersonas[i+1];
            listaAutos[i].siguiente = &listaAutos[i+1];
        }
    }

    cout << "\n Listado " << endl;
    for (int i = 0; i < TAM; i++) {
        listaPersonas[i].mostrar();
        listaAutos[i].mostrar();
    }

    // Mostrar tamanos de datos
    cout << "\n--- Practica 7 BIS: Tamanio de datos ---" << endl;
    cout << "Tamanio int: " << sizeof(int) << " bytes" << endl;
    cout << "Tamanio float: " << sizeof(float) << " bytes" << endl;
    cout << "Tamanio class Auto: " << sizeof(Auto) << " bytes (incluye puntero)" << endl;
    cout << "Tamanio class Persona: " << sizeof(Persona) << " bytes (incluye puntero)" << endl;
    cout << "Tamanio de un Puntero: " << sizeof(Persona*) << " bytes" << endl;

    system("pause");
    return 0;
}
