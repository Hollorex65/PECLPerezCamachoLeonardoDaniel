#include "Paciente.hpp"
#include "Persona.hpp"
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

// Constructor por defecto
Paciente::Paciente() {
    Persona persona = Persona();
    identificador = 0;
	enfermedad = false;
}

// Constructor con parámetros
Paciente::Paciente(Persona _persona, int _identificador, bool _enfermedad) {
    persona = _persona;
    identificador = _identificador;
    enfermedad = _enfermedad;
}

// Destructor
Paciente::~Paciente() {
    // Código de limpieza si fuera necesario
}


// Método de ejemplo, para monstrar los datos de la persona.
void Paciente::saludarPaciente() {
	
	// Mas que saludar da los datos del paciente.
	
    cout << "Nombre: " << persona.GetNombre() << " Edad: " << persona.GetEdad() << 
	" Sexo: " << persona.GetGenero() << " DNI: " << persona.GetDNI() << " identificador: " << 
	Paciente::GetIdentificador() << " Enfermedad: " << 
	(Paciente::IsEnfermedad() == true ? "Apendicitis" : "Hernias") << ".\n"; 	// Esto es un if basicamente
																				//si es true Apendicitis
																				//si es false Hernias
}

