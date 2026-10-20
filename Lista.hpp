#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodoLista.hpp"

class Lista
{
	public: 
		Lista(); 
		~Lista(); // limpia la lista llamando a borrar()
		void insertarHead(Paciente p);//hecho 
		void insertarUltimo(Paciente p);//hecho 
		void eliminarHead();//hecho 
		void eliminarUlitmo();//hecho
		void mostrar(); //hecho 
		Paciente verHead();//hecho: devuelve paciente sentinela (id -1) si vacia 
		Paciente verUltimo();//hecho: idem 
		void borrar(); //hecho: vacia la lista entera 
		
	private: 
		pnodoLista head, ultimo; 
		int longitud; //actualizada en insertar/eliminar/borrar 
}; 

#endif // LISTA_HPP
