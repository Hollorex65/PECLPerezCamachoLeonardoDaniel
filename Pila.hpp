#ifndef PILA_HPP
#define PILA_HPP

#include "NodoPila.hpp"

class Pila
{
public: 
	Pila();
	~Pila(); 
	
	void insertar(Paciente p); 
	Paciente extraer(); 
	Paciente cima(); 
	void mostrar();
	int getLongitud();
	pnodoPila getUltimo(); 
	Paciente getPaciente(int id); 
	
	
	
private: 
	pnodoPila ultimo; 
	int longitud;
};

#endif // PILA_HPP
