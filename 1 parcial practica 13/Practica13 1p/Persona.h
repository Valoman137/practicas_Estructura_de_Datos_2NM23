#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
private:
    string nombre, ap, am, genero;
    int edad;

public:
    Persona();
    void pedirDatos();
    void mostrarDatos();
};

#endif
