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
	pnodoCola getPrimero(); 
	Paciente getPaciente(int habitacion); 
	Paciente getPacienteId(int id); 
	//borra y libera el nodo cuyo paciente tenga ese id 
	void borrarPorId(int id); 
	
	
private: 
	pnodoCola primero, ultimo; 
	int longitud; 
	
};

#endif // COLA_HPP
