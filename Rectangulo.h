#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Figura.h"

class Rectangulo : public Figura {
private:
    double base;
    double altura;

public:
    Rectangulo(double base, double altura);
    double calcularArea() const override;
};

#endif
