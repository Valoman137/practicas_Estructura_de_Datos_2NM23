#include "MergeIndirecto.h"

int main() {
    MergeIndirecto mi;
    int n;

    cout << "=== MERGE SORT INDIRECTO (EJERCICIO 20) ===\n";
    cout << "Cuantos elementos deseas ordenar? ";
    cin >> n;

    int* datos = new int[n];      
    int** punteros = new int*[n]; 

    for (int i = 0; i < n; i++) {
        cout << "Valor para [" << i << "]: ";
        cin >> datos[i];
        punteros[i] = &datos[i]; 
    }

    cout << "\nDatos originales (a traves de punteros):\n";
    mi.imprimirDatos(punteros, n);


    mi.ordenar(punteros, 0, n - 1);

    cout << "\nDatos ordenados (indirectamente):\n";
    mi.imprimirDatos(punteros, n);

    cout << "\nNota: El arreglo original 'datos' sigue igual en memoria,\n";
    cout << "lo que cambiamos fue el orden en el arreglo de punteros.\n";

    delete[] datos;
    delete[] punteros;
    
    cout << "\nPresiona una tecla para salir...";
    cin.ignore();
    cin.get();
    
    return 0;
}
