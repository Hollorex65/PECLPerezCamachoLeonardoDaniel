#include "Lista.hpp"

Lista::Lista()
{
	head = NULL; 
	ultimo = NULL; 
	longitud = 0; 
}

void Lista::insertarHead(int v)
{
	//introduce el valor v en la cabecera de la lista.
	pnodoLista nuevo; 
	nuevo = new NodoLista(v); 
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
}
void Lista::insertarUltimo(int v)
{
	//insertamos v en el final de la lista. 
	pnodoLista nuevo; //iniciamos en memoria el nodo con el que vamos a trabajar
	nuevo = new NodoLista(v); //creamos el nodo con el valor v 
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
}
void Lista::eliminarHead()
{
	pnodoLista temporal; 
	
	if(head-> siguiente == NULL)
	{
		delete head; 
	}
	else
	{
		temporal = head-> siguiente;
		head = temporal; 
		delete temporal; 
	}
} 
void Lista::eliminarUlitmo()//FALTA
{
	pnodoLista temporal; 
	if(head->siguiente==NULL)
	{
		eliminarHead();
	}
	else
	while(temporal->siguiente->siguiente!=NULL)
	{
		
	} 
	 
	
	
}
void Lista::mostrar()
//MOSTRAR ELEMENTOS DE LA LISTA 
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
			cout << temporal-> valor<<""; 
			temporal = temporal -> siguiente;
		}
		
	}
}
void Lista::borrar()
//elimina la lista entera
{
	pnodoLista temporal; 
	temporal = head; 
	if(temporal==NULL)
	{
		cout<<"\tla lista esta vacia		\n";
	}
	else
	{
		while(temporal-> siguiente!= NULL)
		{
			temporal-> siguiente = temporal; 
			delete head; 
		}
	}
}
