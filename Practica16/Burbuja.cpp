#include "Burbuja.h"


Burbuja::Burbuja() {
    identificador = "";
    valor = 0;
}


Burbuja::Burbuja(string id, int v) {
    identificador = id;
    valor = v;
}


bool Burbuja::operator > (const Burbuja& otro) const {
    return this->valor > otro.valor;
}
