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
	while(aux)
	{
		aux->valor.saludarPacienteCola(); 
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
	pnodoCola aux = primero; //empezamos desde el primero: ultimo es el final de la cola
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

Paciente Cola::getPacienteId(int id)
{
	if(!primero) 
	{
		return Paciente::pacienteVacio(); 
	}
	pnodoCola aux = primero; //empezamos desde el primero: ultimo es el final de la cola
	while(aux != NULL)
	{
		if(aux->valor.getId() == id)
		{
			return aux->valor; 
		}
		aux = aux->siguiente;
	}
	return Paciente::pacienteVacio(); 
}

void Cola::borrarPorId(int id) 
{
	//si la cola esta vacia no hay nada que borrar 
	if(!primero) 
		return; 
	//si el paciente buscado es el primero de la cola 
	if(primero->valor.getId() == id) 
	{ 
		//eliminar() ya libera el primero y actualiza primero, ultimo y longitud 
		eliminar(); 
		return; 
	} 
	//recorremos la cola desde el primero buscando el nodo con el id pedido 
	pnodoCola aux = primero; 
	while(aux->siguiente != NULL) 
	{ 
		//si el nodo siguiente al actual es el que buscamos 
		if(aux->siguiente->valor.getId() == id) 
		{ 
			pnodoCola nodo = aux->siguiente;   //guardamos el nodo que vamos a borrar 
			aux->siguiente = nodo->siguiente;  //desenganchamos el nodo de la cola 
			if(nodo == ultimo)                 //si tambien borraron al ultimo, el anterior pasa a ser el ultimo 
				ultimo = aux; 
			delete nodo;                       //liberamos la memoria del nodo 
			longitud--;                        //un paciente menos en la cola 
			return;                            //id encontrado y borrado: terminamos 
		} 
		aux = aux->siguiente;                  //avanzamos al siguiente nodo 
	} 
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

pnodoCola Cola::getPrimero()
{
	return primero; 
}
Cola::~Cola()
{
	while(primero)
		eliminar(); 
}
