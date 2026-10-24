#include <stdio.h>
#include "Controlador.hpp"
#include <string>
#include <iostream>

//aqui ira el codigo de prueba, las llamadas al controlador, nada de codigo de implementacion, solo creacion y llamadas al menu. 

int main (int argc, char** argv)
{
	Controlador controlador = Controlador();
	string opcion = ""; 
	
	while(opcion!="S")
	{
		
		controlador.status();  
		cin >> opcion; 
		controlador.elegirOpcion(opcion); 
		 
		
	}
	
	
}
