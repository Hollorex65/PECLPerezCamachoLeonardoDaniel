#include "NodoLista.hpp"

class Lista
{
	public: 
		Lista(); 
		~Lista(); 
		void insertarHead(int v);//hecho 
		void insertarUltimo(int v);//hecho 
		void eliminarHead();//A LA MITAD
		void eliminarUlitmo();
		void mostrar(); //hecho 
		int verHead();//FALTA 
		int verUltimo();//FALTA 
		void borrar(); //hecho 
	private: 
		pnodoLista head, ultimo; 
		int longitud; 
}; 