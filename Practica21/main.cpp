#include "QuickIndirecto.h"

int main() {
    QuickIndirecto qi;
    int n;

    cout << "=== QUICK SORT INDIRECTO (EJERCICIO 21) ===\n";
    cout << "Cuantos elementos deseas ordenar? ";
    cin >> n;

    int* datos = new int[n];     
    int** punteros = new int*[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Ingresa valor [" << i << "]: ";
        cin >> datos[i];
        punteros[i] = &datos[i]; 
    }

    cout << "\nEstado inicial (via punteros):\n";
    qi.imprimirDatos(punteros, n);

    qi.ordenar(punteros, 0, n - 1);

    cout << "\nDatos ordenados indirectamente:\n";
    qi.imprimirDatos(punteros, n);

    cout << "\nVerificacion: El primer dato en 'datos' sigue siendo: " << datos[0] << endl;

    delete[] datos;
    delete[] punteros;
    
    cout << "\nPresiona una tecla para finalizar...";
    cin.ignore();
    cin.get();
    
    return 0;
}
