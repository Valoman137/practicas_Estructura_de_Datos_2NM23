#include <iostream>
#include "Cola.h"

using namespace std;

int main() {
    Cola c;

    c.encolar(10);
    c.encolar(20);
    c.encolar(30);

    c.mostrar();

    cout << "\nFrente: " << c.verFrente() << endl;

    c.desencolar();

    cout << "\nDespues de desencolar:\n";
    c.mostrar();

    return 0;
}
