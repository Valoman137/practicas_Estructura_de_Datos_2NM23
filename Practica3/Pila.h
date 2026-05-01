#ifndef PILA_H
#define PILA_H

class Pila {
private:
    int datos[5];
    int tope;

public:
    Pila();

    bool push(int valor);
    bool pop();
    int peek();

    bool estaVacia();
    bool estaLlena();

    void mostrar();
};

#endif
