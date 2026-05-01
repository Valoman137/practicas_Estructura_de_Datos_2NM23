#ifndef LISTA_H
#define LISTA_H

class Lista {
private:
    int datos[5];
    int tamanio;

public:
    Lista();

    bool insertar(int valor, int posicion);
    bool eliminar(int posicion);
    int buscar(int valor);

    void mostrar();

    bool estaLlena();
    bool estaVacia();
};

#endif
