#include "Figura.h"
using namespace std;

Figura::Figura(const string& nombre) : nombre(nombre) {
}

string Figura::obtenerNombre() const {
    return nombre;
}

Figura::~Figura() {
}

