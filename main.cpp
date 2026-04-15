#include <iostream>
#include <iomanip>
#include <string>
#include "Rectangulo.h"
#include "Circulo.h"

using namespace std;

void mostrarInformacion(const Figura& figura) {
    cout << "El area del " << figura.obtenerNombre() << " es: " << figura.calcularArea() << endl;
}

void mostrarInformacion(const Figura& figura, const string& mensaje) {
    cout << mensaje << " " << figura.obtenerNombre() << " es: " << figura.calcularArea() << endl;
}

bool operator>(const Figura& izquierda, const Figura& derecha) {
    return izquierda.calcularArea() > derecha.calcularArea();
}

bool operator==(const Figura& izquierda, const Figura& derecha) {
    return izquierda.calcularArea() == derecha.calcularArea();
}

int main() {
    try {
        Rectangulo rectangulo(5, 3);
        Circulo circulo(2.5);

        mostrarInformacion(rectangulo);
        mostrarInformacion(circulo, "El area del");

        if (rectangulo > circulo) {
            cout << "El rectangulo tiene mayor area que el circulo." << endl;
        } else if (rectangulo == circulo) {
            cout << "Tienen el mismo area." << endl;
        } else {
            cout << "El circulo tiene mayor area que el rectangulo." << endl;
        }

        //Rectangulo rInvalido(-1, 4);
        //Circulo cInvalido(0);

    } catch (const char* mensaje) {
        cout << "Error: " << mensaje << endl;
    }

    return 0;
}
