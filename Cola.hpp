#ifndef COLA_HPP
#define COLA_HPP

#include "NodoCola.hpp"

class Cola 
{
public:
	Cola();
	~Cola();
	
	void insertar(Paciente p); 
	Paciente eliminar(); 
	void mostrar();
	Paciente verPrimero(); 
	int getLongitud(); 
	Paciente getPaciente(int habitacion); 
	
private: 
	pnodoCola primero, ultimo; 
	int longitud; 
	
};

#endif // COLA_HPP
