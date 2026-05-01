#include "Entidades.h"

Persona::Persona() {
    siguiente = NULL; 
}

void Persona::capturar() {
    cout << "\n Datos Clase Persona " << endl;
    cout << "Nombre: "; cin >> nombre;
    cout << "Ap. Paterno: "; cin >> ap;
    cout << "Ap. Materno: "; cin >> am;
    cout << "Genero: "; cin >> genero;
    cout << "Edad: "; cin >> edad;
}

void Persona::mostrar() {
    cout << "Persona: " << nombre << " " << ap << " " << am 
         << " | Edad: " << edad << " | Dir: " << this 
         << " | Siguiente: " << siguiente << endl;
}


Auto::Auto() {
    siguiente = NULL;
}

void Auto::capturar() {
    cout << "\n Datos Clase Auto " << endl;
    cout << "Precio: "; cin >> precio;
    cout << "Anio: "; cin >> anio;
}

void Auto::mostrar() {
    cout << "Auto -> Precio: " << precio << " | Anio: " << anio 
         << " | Dir: " << this << " | Siguiente: " << siguiente << endl;
}
