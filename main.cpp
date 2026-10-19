#include <stdio.h>
#include "Persona.hpp"
#include "Paciente.hpp"
#include <string>
#include <iostream>
#include <cstdlib> // Necesario para rand() y srand()
#include <cstring> // Necesario para usar strcpy

// Menu de la aplicacion hehehe
void menu();
// Generador de pacientes
void generadorPacientes();

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
	//menu();
	
	// Esto tambien lo hare mas adelante una funcion con un try cacht para que el usuario solamente
	//pueda colocar char[1] es decir una letra sea Mayuscula o Minuscula....
	//cout << "Indique la opcion deseada: ";
	//cin >> opcion; // Lee la entrada
	
	while (opcion != "S") {
		
		// Menu desplegado y peticion de entrada...
		menu();
		cout << "\nIndique la opcion deseada: ";
		cin >> opcion; // Lee la entrada
		
		if (opcion == "A") {
			
			// Ya esta la funcion generadora de pacientes, mas que pacientes personas ahora solamente queda implementarla a 
			cout << "\nOpcion A selecionada generando 12 pacientes nuevos...\n\n";
			// Funcion generadora de pacientes nuevos (12 por iteracion - Maximo 48)
			for (int i = 0; i < 12; i++) {
				generadorPacientes();
			}
			cout << "\nPacientes generados con exito.\n\n";
			
		} else if (opcion == "B") {
			cout << "\nOpcion B\n";
		} else if (opcion == "S") {
			cout << "\nSaliendo del programa\n";
		}else {
			cout << "\n--------------------------------------------\nDebes elegir una de las opciones del menu...\n--------------------------------------------\n\n";
		}
	}
	
	return 0;
}

// ImplementaciOn de la función menu, aqui abajo ya defino que hace menu.
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

void generadorPacientes() {
	
	// Nombres de personas...
	string personas[20] = {
        "Alejandro", "Beatriz",  // 0 (Par),  1 (Impar)
        "Carlos",    "Diana",    // 2 (Par),  3 (Impar)
        "Eduardo",   "Fernanda", // 4 (Par),  5 (Impar)
        "Gabriel",   "Helena",   // 6 (Par),  7 (Impar)
        "Ignacio",   "Julia",    // 8 (Par),  9 (Impar)
        "Kevin",     "Lucia",    // 10 (Par), 11 (Impar)
        "Manuel",    "Natalia",  // 12 (Par), 13 (Impar)
        "Oscar",     "Patricia", // 14 (Par), 15 (Impar)
        "QuintIn",   "Rosa",     // 16 (Par), 17 (Impar)
        "Sergio",    "Tatiana"   // 18 (Par), 19 (Impar)
    };
	// Letras DNI...
	char abecedario[26] = {
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 
        'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 
		'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
    };
	
	// Generamos con un numero aleatorio los nombres de los pacientes y sus edades
	
	// Inicializar la semilla aleatoria (para que los números cambien en cada ejecución)
    //srand(time(nullptr));
	
	// Generar un numero aleatorio de 0 a 19 - rand() % 20 da un valor entre 0 y 19
    int numeroAleatorio = rand() % 20;
	
	// Con ese valor aleatroio se asigna un nombre del array de nombres
	string nombreAleatorio = personas[numeroAleatorio];
	
	// Generamos otro numero aleatorio 
	int edad = rand() % (30) + 20;
	 
	// Generamos mas numeros aleatorios para su DNI y letra del DNI
	int numeroAleatorioLetraDNI = rand() % 26;
	int numerosDNI = rand() % 99999999 + 10000000;
	
	// Convertir a string
	string DNI_str = to_string(numerosDNI) + abecedario[numeroAleatorioLetraDNI];
	 
	char DNI[10];
	strcpy(DNI, DNI_str.c_str()); // <--- Copia automática aquí
	 
	 // Esta persona es temporalmente queda añadirlos a la pila
	 Persona persone12 = Persona(nombreAleatorio, edad, (numeroAleatorio % 2 == 0 ? "Hombre" : "Mujer"), DNI);
	 persone12.saludar();
	
	//cout << nombreAleatorio << " tiene: " << edad << (numeroAleatorio % 2 == 0 ? " es Hombre" : " es Mujer") 
	//<< " DNI: " << abecedario[numeroAleatorioLetraDNI] << numerosDNI << "\n";
}
