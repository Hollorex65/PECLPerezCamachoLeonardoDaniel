#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP

#include <iostream>
#include "Paciente.hpp"

using namespace std; 

class NodoLista
{
	public: 
		NodoLista(Paciente p, NodoLista* sig = NULL);
		NodoLista(); //definido en NodoLista.cpp: nodo vacio con paciente sentinela
		~NodoLista(); 
	private: 
		Paciente valor;
		NodoLista* siguiente; 
		
		friend class Lista; 
};
typedef NodoLista* pnodoLista; 

#endif // NODOLISTA_HPP
