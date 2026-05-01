#ifndef COLA_H
#define COLA_H

class Cola {
private:
    int datos[5];
    int frente;
    int final;

public:
    Cola();

    bool encolar(int valor); // insertar
    bool desencolar();      // eliminar
    int verFrente();

    bool estaVacia();
    bool estaLlena();

    void mostrar();
};

#endif
