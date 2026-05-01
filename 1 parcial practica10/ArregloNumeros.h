#ifndef ARREGLO_NUMEROS_H
#define ARREGLO_NUMEROS_H

class ArregloNumeros {
private:
    float* numeros;
    int tamanio;

public:
    ArregloNumeros(int t);
    ~ArregloNumeros();

    void ingresar();
    float suma();
    float promedio();
    float media();
    float maximo();
    float minimo();
};

#endif
