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
		int getLongitud(); //hecho: devuelve el numero de pacientes de la lista
		//hecho: busca entre los pacientes de esa enfermedad el de id mas alto (buscarMayor=true) o mas bajo, sentinela si no hay
		Paciente encontrar(bool enfermedad, bool buscarMayor);
		//hecho: devuelve el paciente con esa habitacion o el sentinela (habitacion 0) si no esta en la lista
		Paciente getPacienteHabitacion(int habitacion);
		
	private: 
		pnodoLista head, ultimo; 
		int longitud; //actualizada en insertar/eliminar/borrar 
}; 

#endif // LISTA_HPP
