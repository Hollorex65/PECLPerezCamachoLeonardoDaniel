#include "Pila.hpp"

Pila::Pila()
{
	ultimo = NULL; 
	longitud = 0; 
	
}
void Pila::insertar(Paciente p) 
{
	pnodoPila nuevo; 
	nuevo = new NodoPila(p, ultimo); 
	ultimo = nuevo; 
	longitud++; 
}
Paciente Pila::extraer()
{
	Paciente p; 
	pnodoPila nodo; 
	if (!ultimo)
	{
		// la pila esta vacia: devolvemos el paciente sentinela (id -1)
		cout << "\tLa pila esta vacia, no hay nada que extraer\n";
		return Paciente::pacienteVacio(); 
	}
	nodo = ultimo; 
	ultimo = nodo->siguiente; 
	p = nodo->valor; 
	longitud--; 
	delete nodo; 
	return p; 
}
Paciente Pila::cima()
{
	if(!ultimo) 
		return Paciente::pacienteVacio(); 
	return ultimo->valor; 
}
void Pila::mostrar()
{
	pnodoPila aux = ultimo;
	if(!aux)
	{
		cout <<"\tLa pila esta vacia\n"; 
		return; 
	}
	cout <<"\tEl contenido de la pila es:\n"; 
	while(aux) 
	{
		aux->valor.saludarPaciente(); 
		aux = aux->siguiente; 
	}
	cout << endl; 
}
int Pila::getLongitud()
{
	return this-> longitud; 
}
Pila::~Pila()
{
	pnodoPila aux; 
	while(ultimo) 
	{
		aux = ultimo;  
		ultimo = ultimo -> siguiente; 
		delete aux; 
	}

}
