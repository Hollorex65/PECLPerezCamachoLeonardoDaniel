#include <iostream>
using namespace std; 

class NodoPila
{
	public: 
		NodoPila(int v, NodoPila* sig = NULL); 
		~NodoPila();
		
	protected: 
		int valor; 
		NodoPila* siguiente; 
		friend class Pila; 		
};

typedef NodoPila* pnodoPila; 
