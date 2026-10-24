#include "Cola.hpp" 

Cola::Cola()
{
	primero = NULL; 
	ultimo = NULL; 
	longitud = 0; 
}
void Cola::insertar(Paciente p) 
{
	pnodoCola nuevo; 
	nuevo = new NodoCola(p); 
	if(ultimo)
		ultimo-> siguiente = nuevo; 
	ultimo = nuevo; 
	
	if(!primero) 
		primero = nuevo; 
	longitud++; 
}
void Cola::mostrar()
{
	pnodoCola aux = primero; 
	if(!aux)
	{
		cout << "\tLa cola esta vacia\n"; 
		return; 
	}
	cout<<"\tEl contenido de la cola es:\n"; 
	while(aux)
	{
		aux->valor.saludarPacientePila(); 
		aux = aux-> siguiente; 
	}
	cout<<endl; 
}
Paciente Cola::eliminar()
{
	Paciente p; 
	pnodoCola nodo; 
	nodo = primero; 
	if(!nodo) 
	{
		// la cola esta vacia: devolvemos el paciente sentinela (id -1)
		cout << "\tLa cola esta vacia, no hay nada que eliminar\n";
		return Paciente::pacienteVacio(); 
	}
	p = nodo->valor; 
	primero = nodo->siguiente; 
	delete nodo; 
	if(!primero)
		ultimo = NULL; 
	longitud--; 
	return p; 
}
Paciente Cola::getPaciente(int habitacion) 
{
	if(!primero)
	{
		return Paciente::pacienteVacio();
	}
	pnodoCola aux = ultimo; 
	while(aux != NULL)
	{
		if(aux->valor.getHabitacion() == habitacion)
		{
			return aux -> valor; 
		}
		aux = aux->siguiente; 
	}
	return Paciente::pacienteVacio(); 
}
Paciente Cola::verPrimero()
{
	if(!primero) 
		return Paciente::pacienteVacio(); 
	return primero->valor; 
}
int Cola::getLongitud()
{
	//devuelve el numero de pacientes que hay en la cola
	return this-> longitud; 
}

Cola::~Cola()
{
	while(primero)
		eliminar(); 
}
