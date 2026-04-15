#include "Figura.h"
#include <string>

Figura::Figura(string nombre){
	this->nombre = nombre;
}

double Figura::calcularArea(){
	cout<<"Usando metodo abstracto de Figura"<<endl;
	return 0;
}