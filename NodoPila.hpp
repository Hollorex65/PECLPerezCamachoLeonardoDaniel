#ifndef NODOPILA_HPP
#define NODOPILA_HPP

#include <iostream>
#include "Paciente.hpp"
using namespace std; 

class NodoPila
{
	public: 
		NodoPila(Paciente p, NodoPila* sig = NULL); 
		~NodoPila();
		
	protected: 
		Paciente valor; 
		NodoPila* siguiente; 
		friend class Pila; 		
};

typedef NodoPila* pnodoPila; 

#endif // NODOPILA_HPP
