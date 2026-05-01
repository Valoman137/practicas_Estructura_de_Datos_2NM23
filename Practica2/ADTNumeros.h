#ifndef ADTNUMEROS_H
#define ADTNUMEROS_H

class ADTNumeros {
private:
    int datos[5];
    int tamanio;

public:
    ADTNumeros();

    void ingresar();
    int suma();
    float promedio();
};

#endif
