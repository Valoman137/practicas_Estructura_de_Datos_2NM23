#include <iostream>
#include "Persona.h"
#include "Auto.h"

using namespace std;

int main() {

    int n;

    cout << "Cuantas personas deseas registrar?: ";
    cin >> n;

    Persona* personas = new Persona[n];

    // Registro de personas
    for(int i = 0; i < n; i++) {
        cout << "\nPersona #" << i + 1 << endl;
        (personas + i)->pedirDatos();
    }

    cout << "\n=== LISTA DE PERSONAS ===" << endl;
    for(int i = 0; i < n; i++) {
        (personas + i)->mostrarDatos();
    }

    // AUTOS
    int m;

    cout << "\nCuantos autos deseas registrar?: ";
    cin >> m;

    Auto* autos = new Auto[m];

    for(int i = 0; i < m; i++) {
        cout << "\nAuto #" << i + 1 << endl;
        (autos + i)->pedirDatos();
    }

    cout << "\n=== LISTA DE AUTOS ===" << endl;
    for(int i = 0; i < m; i++) {
        (autos + i)->mostrarDatos();
    }

    cout << "\n--- Tamaño de datos ---" << endl;
    cout << "int: " << sizeof(int) << " bytes" << endl;
    cout << "float: " << sizeof(float) << " bytes" << endl;
    cout << "Persona: " << sizeof(Persona) << " bytes" << endl;
    cout << "Auto: " << sizeof(Auto) << " bytes" << endl;

    delete[] personas;
    delete[] autos;

    return 0;
}
