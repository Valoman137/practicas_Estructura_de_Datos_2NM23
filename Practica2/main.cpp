#include <iostream>
#include "ADTNumeros.h"

using namespace std;

int main() {
    ADTNumeros obj;

    obj.ingresar();

    cout << "Suma: " << obj.suma() << endl;
    cout << "Promedio: " << obj.promedio() << endl;

    return 0;
}
