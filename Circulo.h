#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura {
private:
    double radio;
public:
    explicit Circulo(double radio);
    double calcularArea() const override;
};

#endif