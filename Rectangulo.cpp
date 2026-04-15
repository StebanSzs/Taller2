#include "Rectangulo.h"

using namespace std;

Rectangulo::Rectangulo(double base, double altura)
    : Figura("Rectangulo"), base(base), altura(altura) {
    if (base <= 0 || altura <= 0) {
        throw "La base y la altura del rectangulo deben ser mayores que cero.";
    }
}

double Rectangulo::calcularArea() const {
    return base * altura;
}