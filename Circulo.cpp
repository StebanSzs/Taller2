#include "Circulo.h"
#include <stdexcept>

static const double PI = 3.14159265358979323846;

Circulo::Circulo(double radio) : Figura("Circulo"), radio(radio) {
    if (radio <= 0) {
        throw std::invalid_argument("El radio del circulo debe ser mayor que cero.");
    }
}

double Circulo::calcularArea() const {
    return PI * radio * radio;
}
