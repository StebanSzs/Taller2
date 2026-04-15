#include <iostream>
#include <iomanip>
#include <string>
#include "Rectangulo.h"
#include "Circulo.h"

using namespace std;

void mostrarInformacion(const Figura& figura) {
    cout << figura.obtenerNombre() << " -> Area: " << figura.calcularArea() << endl;
}

void mostrarInformacion(const Figura& figura, const string& mensaje) {
    cout << mensaje << " " << figura.obtenerNombre() << " -> Area: " << figura.calcularArea() << endl;
}

void mostrarInformacion(const Figura& figura, int decimales) {
    cout << fixed << setprecision(decimales);
    cout << figura.obtenerNombre() << " -> Area: " << figura.calcularArea() << endl;
    cout.unsetf(ios::floatfield);
    cout << setprecision(6);
}

int main() {
    try {
        Rectangulo rectangulo(5, 3);
        Circulo circulo(2.5);

        mostrarInformacion(rectangulo);
        mostrarInformacion(circulo, "[Figura creada]");
        mostrarInformacion(circulo, 4);

        if (rectangulo > circulo) {
            cout << "El rectangulo tiene mayor area que el circulo." << endl;
        } else {
            cout << "El circulo tiene mayor area (o igual) que el rectangulo." << endl;
        }

        // Descomenta la siguiente linea para probar el manejo de errores:
        // Rectangulo invalido(-1, 4);

    } catch (const exception& error) {
        cerr << "Error al crear figura: " << error.what() << endl;
    }

    return 0;
}
