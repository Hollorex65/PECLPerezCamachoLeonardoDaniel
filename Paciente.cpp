#include "Paciente.hpp"
#include <string>
#include <cstring>
#include <iostream>
#include <cstdlib> // Necesario para rand()

using namespace std;

Paciente::Paciente()
{
	dni = randomDni(); //declarar e implementar metodo para generar random dni
	enfermedad = randomEnfermedad(); //declarar e implementar metodo para generar enfermedad aleatoria
	habitacion = 0; 
	identificador = 0; 
}
Paciente::~Paciente()
{
}

void Paciente::setId(int id)
{
	this-> identificador = id; 
}
void Paciente::setEnfermedad(bool enfer)
{
	this-> enfermedad = enfer; 
}
void Paciente::setDni(string DNI)
{
	this-> dni = DNI; 
}
void Paciente::setHabitacion(int hab)
{
	this-> habitacion = hab; 
}

int Paciente::getId()
{
	return this->identificador; 
}
bool Paciente::getEnfermedad()
{
	return this->enfermedad; 
}
string Paciente::getDni()
{
	return this->dni; 
}
int Paciente::getHabitacion()
{
	return this->habitacion; 
}

void Paciente::saludarPacientePila()
{
	//aqui comparamos con el operador terniario para no mostrar 0 y mostrar un mensaje en caso de que el identificador no se asigne (hacemos la conversion debido a que es necesaria, el operador terniario solo acepta const char*
	if(enfermedad)
	{
		cout<<"El paciente cuyo DNI es "<<dni<<" tiene apendicitis\n";   
	}
	else
	{
		cout<<"El paciente cuyo DNI es "<<dni<<"     tiene hernias\n";
	}
}
void Paciente::saludarPacienteCola()
{
	//FALTA IMPLEMENTARLO
	//aqui comparamos con el operador terniario para no mostrar 0 y mostrar un mensaje en caso de que el identificador no se asigne (hacemos la conversion debido a que es necesaria, el operador terniario solo acepta const char*
	if(enfermedad)
	{
		cout<<"El paciente cuyo DNI es "<<dni<<" tiene apendicitis\n";   
	}
	else
	{
		cout<<"El paciente cuyo DNI es "<<dni<<"     tiene hernias\n";
	}
}

string Paciente::randomDni()
{
	// 8 cifras aleatorias entre 10000000 y 99999999
	int numeros = rand() % 90000000 + 10000000;

	// Letra aleatoria de las 26 del abecedario
	string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char letra = letras[rand() % 26];

	// Unimos cifra + letra en un solo string, ej: 48392017D
	return to_string(numeros) + letra;
}

bool Paciente::randomEnfermedad()
{
	// rand() % 2 devuelve 0 o 1: 0 -> true (apendicitis), 1 -> false (hernias)
	return rand() % 2 == 0;
}

Paciente Paciente::pacienteVacio()
{
	Paciente vacio = Paciente();
	vacio.setId(-1); 
	return vacio;
}
