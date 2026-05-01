#include <iostream>
#include "Pila.h"

using namespace std;

int main() {
    Pila p;

    p.push(10);
    p.push(20);
    p.push(30);

    p.mostrar();

    cout << "\nElemento en el tope: " << p.peek() << endl;

    p.pop();

    cout << "\nDespues de hacer pop:\n";
    p.mostrar();

    return 0;
}
