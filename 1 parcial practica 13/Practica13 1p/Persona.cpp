#include "Persona.h"

Persona::Persona() {}

void Persona::pedirDatos() {
    cout << "\n--- Datos Persona ---" << endl;

    cout << "Nombre: ";
    cin >> nombre;

    cout << "Apellido Paterno: ";
    cin >> ap;

    cout << "Apellido Materno: ";
    cin >> am;

    cout << "Genero: ";
    cin >> genero;

    cout << "Edad: ";
    cin >> edad;
}

void Persona::mostrarDatos() {
    cout << "\nPersona registrada:" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Apellido Paterno: " << ap << endl;
    cout << "Apellido Materno: " << am << endl;
    cout << "Genero: " << genero << endl;
    cout << "Edad: " << edad << endl;
}
