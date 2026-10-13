#include "Persona.hpp"
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// Constructor por defecto
Persona::Persona() {
    nombre = "Desconocido";
    edad = 0;
    genero = "No especificado";
	strcpy(DNI, "00000000A");
}

// Constructor con parámetros
Persona::Persona(string _nombre, int _edad, string _genero, char _DNI[10]) {
    nombre = _nombre;
    edad = _edad;
    genero = _genero;
	strcpy(DNI, _DNI);
}

// Destructor
Persona::~Persona() {
    // Código de limpieza si fuera necesario
}

// Método de ejemplo, para monstrar los datos de la persona. (Saludo)
void Persona::saludar() {
    cout << "Hola, me llamo " << Persona::GetNombre() << ", tengo " << Persona::GetEdad() << " anyos y soy " << Persona::GetGenero() << " DNI: " << Persona::GetDNI() << ".\n";
}
	