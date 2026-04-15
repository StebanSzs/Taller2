#ifndef FIGURA_H
#define FIGURA_H

#include <string>

class Figura {
protected:
    std::string nombre;

public:
    explicit Figura(const std::string& nombre);
    virtual double calcularArea() const = 0;
    std::string obtenerNombre() const;
    virtual ~Figura();
};

bool operator>(const Figura& izquierda, const Figura& derecha);

#endif
