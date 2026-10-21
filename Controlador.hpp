#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP

#include "Cola.hpp"
#include "Pila.hpp"
#include "Lista.hpp"
#include "Paciente.hpp"


/*A: generar 12 pacientes y amlacenarlos en la pila de pacientes (hasta 48) 
 * B:mostrar los pacientes en la pila de pacientes 
 * C:borrar todos los pacientes de la pila y los generados antes de entrar en ella 
 * D:extraer los pacientes de la pila y los almacena en uan de las dos colas segun su enfermedad
 * E:muestra los pacientes en la cola (sala de preoperatorio) A y B (apendicitis) 
 * F:muestra los pacientes en la cola (sala de preoperatorio) C y D (hernias) 
 * G:borrar los pacientes en las salas del preoperatorio
 * H:extraer los pacientes de las colas del preoperatorio y los almacena en las listas del quirofano segun su enfermedad
 * I:muestra los pacientes en la lista de apendicitis
 * J: muestra los pacientes en la lista de hernias 
 * K:busca en las listas y muestra los 2 pacientes siguientes: el de apendicitis mas grave y el de la hernia mas grave 
 * L: reiniciar el programa a su estado original
*/
class Controlador 
{
	private:  
		Pila pila_pacientes; 
		Cola cola_A; 
		Cola cola_B; 
		Cola cola_C;
		Cola cola_D; 
		Lista lista_apendicitis;
		Lista lista_hernias;
		
	public: 
		Controlador(); 
		~Controlador();
		void status(); 
		void opcionA(); 
		void opcionB(); 
		void opcionC(); 
		void opcionD(); 
		void opcionE(); 
		void opcionF(); 
		void opcionG(); 
		void opcionH(); 
		void opcionI(); 
		void opcionJ(); 
		void opcionK(); 
		void opcionL(); 
		void elegirOpcion(string opcion); 
		
}; 
#endif //CONTROLADOR_HPP