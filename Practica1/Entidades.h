#ifndef ENTIDADES_H
#define ENTIDADES_H

#include <iostream>
#include <string>

using namespace std;

class Persona {
private:
    string nombre, ap, am, genero;
    int edad;
public:
    Persona* siguiente; 

    Persona();
    void capturar();
    void mostrar();
};

class Auto {
private:
    float precio;
    int anio;
public:
    Auto* siguiente; 

    Auto();
    void capturar();
    void mostrar();
};

#endif
