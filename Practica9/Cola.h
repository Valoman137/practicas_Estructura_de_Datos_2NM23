#ifndef COLA_H
#define COLA_H

#include <queue>

using namespace std;

class ManejadorCola {
private:
    
    queue<int>* miCola;

public:
    ManejadorCola();  
    ~ManejadorCola(); 

    void insertar(int valor);
    void eliminar();
    void mostrarFrente();
    bool estaVacia();
    int obtenerTamano();
};

#endif
