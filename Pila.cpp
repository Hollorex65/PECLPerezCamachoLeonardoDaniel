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
		aux->valor.saludarPacientePila(); 
		aux = aux->siguiente; 
	}
	cout << endl; 
}
int Pila::getLongitud()
{
	return this-> longitud; 
}
Paciente Pila::getPaciente(int id)
{
	if(!ultimo)//comprobamos que la lista no este vacia
	{
		return Paciente::pacienteVacio();//si es asi devolvemos el paciente vacio con id -1 
	}
	pnodoPila aux = ultimo ;//creamos nuestro nodo para recorrer la pila
	while(aux !=NULL)//mientras que el nodo no llegue al final
	{
		if(aux->valor.getId()== id)//comprobamos que el valor del nodo actual coincida con el id que pedimos
		{
			return aux->valor; //si coincide devolvemos el paciente con el id 
		}
		aux = aux->siguiente;//si no coincide avanzamos en la pila  
	}
	return Paciente::pacienteVacio(); 
}
pnodoPila Pila::getUltimo()
{
	return ultimo; 
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
