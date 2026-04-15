#include "Figura.h"

Figura::Figura(const std::string& nombre) : nombre(nombre) {}

std::string Figura::obtenerNombre() const {
    return nombre;
}

Figura::~Figura() {}

bool operator>(const Figura& izquierda, const Figura& derecha) {
    return izquierda.calcularArea() > derecha.calcularArea();
}
