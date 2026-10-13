#include <stdio.h>
#include "Persona.hpp"
#include "Paciente.hpp"
#include <string>
#include <iostream>

// Menu de la aplicacion hehehe
void menu();

int main(int argc, char **argv)
{
	string opcion;
	
	// Test persona 1
	Persona personaTest;
	personaTest = Persona("Pedro", 67, "Hombre", "12345678A");
	//personaTest.saludar(); // Muestra los datos de la persona para ver si funciona.
	
	// Test paciente 1
	Paciente pacienteTest = Paciente(personaTest, 1, false); // Paciente test con Hernias
	pacienteTest.saludarPaciente(); // Muestra al paciente y que enfermedad tiene ademas de su Identificador.
	
	// Ya estaria listo la parte de la clase persona junto con la clase hija Paciente
	//que contiene todos los datos y metodos de su Madre persona, es decir que solamente
	//quedaria hacer un metodo para crear de manera automatica 12 pacientes usando el constructor
	//y que tengan datos aleatorios siendo el Identificador de la clase Paciente el unico valor
	//que debera de ser generado teniendo en cuenta que no puede repetirse, asi que ese metodo usara
	//constructor de persona y paciente y debera estar en la Maid siendo una funcion generadora.
	
	// Podria usar un for con un contador de 12 para esto y tener una tablita con datos para los nombre
	//aletorios y lo mismo con un random para los DNI, el identificador debera de chequear que el valor que se usa
	//no se repita
	
	// Muestra la lista de opciones:
	menu();
	
	// Esto tambien lo hare mas adelante una funcion con un try cacht para que el usuario solamente
	//pueda colocar char[1] es decir una letra sea Mayuscula o Minuscula....
	cout << "Indique la opcion deseada: ";
	cin >> opcion; // Lee la entrada
	
	return 0;
}

// Implementación de la función menu, aqui abajo ya defino que hace menu.
void menu() {
	
	// Menu con las opciones a elegir
	
    cout << "A. Generar 12 pacientes de forma aleatoria y almacenarlos en la Pila.\n" <<
			"B. Consultar todos los pacientes generados en la Pila (pendientes de entrar en las salas).\n" <<
			"C. Borrar los pacientes generados en la pila.\n" <<
			"D. Simular llegada de los pacientes en las colas.\n" <<
			"E. Consultar los pacientes de las salas A y B.\n" <<
			"F. Consultar los pacientes de las salas C y D.\n" <<
			"G. Borrar los todos los pacientes de las salas.\n" <<
			"H. Simular la entrada de los pacientes a los quirofanos (a las listas).\n" <<
			"I. Mostrar los pacientes que hay en el quirofano que atiende apendicitis.\n" <<
			"J. Mostrar los pacientes que hay en el quirofano que atiende hernias.\n" <<
			"K. Buscar en las listas el paciente con apendicitis de menor prioridad y el de hernia con mayor prioridad.\n" <<
			"L. Reiniciar el programa.\n" <<
			"M. Crear y dibujar el ABB en consola.\n" <<
			"N. Mostrar los datos de todos los pacientes con apendicitis ordenados por numero de habitacion en orden ascendente.\n" <<
			"O. Mostrar los datos de todos los pacientes con hernias ordenados por numero de habitacion en orden ascendente.\n" <<
			"P. Mostrar los datos de todos los pacientes recorriendo el arbol en inorden.\n" <<
			"Q. Buscar en el ABB los pacientes con apendicitis de la habitacion cuyo numero es el mayor y cuyo numero es el menor y los pacientes con hernias de la habitacion cuyo numero es el mayor y cuyo numero es el menor.\n" <<
			"R. Contar el numero de pacientes almacenados en el ABB cuyos numeros de habitacion son impares.\n" <<
			"S. Salir.\n" <<
			"T. Mostrar los pacientes que se encuentran almacenados en un nodo hoja.\n" <<
			"U. Eliminar un paciente indicado por su numero de habitacion (que se pide desde consola) y mostrar el arbol resultante tras la eliminacion de dicho paciente.\n";
}
