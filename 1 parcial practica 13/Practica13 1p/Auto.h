#ifndef AUTO_H
#define AUTO_H

#include <iostream>
using namespace std;

class Auto {
private:
    float precio;
    int anio;

public:
    Auto();
    void pedirDatos();
    void mostrarDatos();
};

#endif
