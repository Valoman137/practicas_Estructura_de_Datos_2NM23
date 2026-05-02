#include "Auto.h"

Auto::Auto() {}

void Auto::pedirDatos() {
    cout << "\n--- Datos Auto ---" << endl;

    cout << "Precio: ";
    cin >> precio;

    cout << "Anio: ";
    cin >> anio;
}

void Auto::mostrarDatos() {
    cout << "\nAuto registrado:" << endl;
    cout << "Precio: " << precio << endl;
    cout << "Anio: " << anio << endl;
}
