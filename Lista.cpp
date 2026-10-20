#include "Lista.hpp"

Lista::Lista()
{
	head = NULL; 
	ultimo = NULL; 
	longitud = 0; 
}

void Lista::insertarHead(Paciente p)
{
	//introduce el paciente p en la cabecera de la lista.
	pnodoLista nuevo; 
	nuevo = new NodoLista(p); 
	if (head == NULL)
		{ 
		nuevo -> siguiente = NULL; 
		ultimo = nuevo; 
		}
	else
		{
		nuevo -> siguiente = head; 
		
		}
	head = nuevo; 
	longitud++; 
}
void Lista::insertarUltimo(Paciente p)
{
	//insertamos p al final de la lista. 
	pnodoLista nuevo; //iniciamos en memoria el nodo con el que vamos a trabajar
	nuevo = new NodoLista(p); //creamos el nodo con el paciente p 
	nuevo->siguiente= NULL; //el nodo creado, el siguiente nodo al que apuntara sera null porque es el ultimo de la lista  
	
	if (head == NULL)
		{
 //si no hay elemento de cabecera(si esta vacio) 
		head = nuevo; //la cabecera sera nuestro nuevo elemento 
		}
	else
		{
		ultimo-> siguiente = nuevo; //si no el siguiente del ultimo que ya estaba sera el nuevo. enlazamos los punteros 
		}
	ultimo = nuevo; //dejamos el ultimo de la lista como nuestro nuevo nodo 
	longitud++; 
}
void Lista::eliminarHead()
{
	if (head == NULL)
	{
		cout << "\tlista vacia, no hay nada que eliminar\n";
		return; // no se resta longitud porque no se ha borrado nada
	}
	// El nodo que sale es el head actual. Guardamos, avanzamos y borramos.
	pnodoLista temporal = head;
	head = head-> siguiente;
	if (head == NULL)
	{
		// la lista ha quedado vacia
		ultimo = NULL;
	}
	else if (head-> siguiente == NULL)
	{
		// quedaba un solo nodo: head y ultimo apuntan al mismo
		ultimo = head;
	}
	delete temporal;
	longitud--;
} 
void Lista::eliminarUlitmo()
{
	if (head == NULL)
	{
		cout << "\tlista vacia, no hay nada que eliminar\n";
		return;
	}
	if (head == ultimo) // solo hay un nodo: es un eliminarHead
	{
		eliminarHead();
		return;
	}
	// Recorremos hasta quedar en el nodo ANTERIOR al ultimo
	pnodoLista temporal = head;
	while (temporal-> siguiente != ultimo)
	{
		temporal = temporal -> siguiente;
	}
	delete ultimo;
	ultimo = temporal;
	temporal-> siguiente = NULL;
	longitud--;
}
void Lista::mostrar()
//MOSTRAR LOS PACIENTES DE LA LISTA 
{
	pnodoLista temporal; 
	if(head == NULL)
	{
		cout<< "\tlista vacia		\n"; 
	}
	else
	{
		temporal = head;
		while(temporal != NULL)
		{
			temporal->valor.saludarPaciente(); 
			temporal = temporal -> siguiente;
		}
		
	}
}
void Lista::borrar()
//elimina la lista entera
{
	while (head != NULL)
	{
		eliminarHead(); // por cada nodo: delete + reset de punteros + longitud--
	}
	longitud = 0; // por seguridad, aunque eliminarHead ya lo deja a 0
}
Paciente Lista::verHead()
{
	if (head == NULL)
	{
		cout << "\tlista vacia, no hay head\n";
		return Paciente::pacienteVacio(); // identificador -1
	}
	return head-> valor;
}
Paciente Lista::verUltimo()
{
	if (ultimo == NULL)
	{
		cout << "\tlista vacia, no hay ultimo\n";
		return Paciente::pacienteVacio(); // identificador -1
	}
	return ultimo-> valor;
}
Lista::~Lista()
{
	this->borrar(); 
}