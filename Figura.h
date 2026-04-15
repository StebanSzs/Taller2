#ifndef FIGURA_H
#define FIGURA_H

#include <string>

using namespace std;

class Figura {
protected:
    string nombre;

public:
    explicit Figura(const std::string& nombre);
    virtual double calcularArea() const = 0;
    string obtenerNombre() const;
    virtual ~Figura();
};

#endif
