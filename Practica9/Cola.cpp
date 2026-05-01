#include "Cola.h"
#include <iostream>

using namespace std;


ManejadorCola::ManejadorCola() {
    miCola = new queue<int>();
}


ManejadorCola::~ManejadorCola() {
    delete miCola;
}

void ManejadorCola::insertar(int valor) {
    miCola->push(valor);
    cout << "Valor " << valor << " insertado en la cola." << endl;
}

void ManejadorCola::eliminar() {
    if (!estaVacia()) {
        cout << "Eliminando valor del frente: " << miCola->front() << endl;
        miCola->pop();
    } else {
        cout << "Error: La cola esta vacia." << endl;
    }
}

void ManejadorCola::mostrarFrente() {
    if (!estaVacia()) {
        cout << "Valor en el frente: " << miCola->front() << endl;
    }
}

bool ManejadorCola::estaVacia() {
    return miCola->empty();
}

int ManejadorCola::obtenerTamano() {
    return miCola->size();
}
