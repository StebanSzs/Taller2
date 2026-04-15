#ifndef FIGURA_H
#define FIGURA_H

#include <string>
using namespace std;

class Figura {
	protected:
		string nombre;
	public:
		Figura(string nombre);
		virtual double calcularArea() const = 0;
		virtual ~Figura();	
};
#endif