#include "NodoLista.hpp"

NodoLista::NodoLista(Paciente p, NodoLista* sig)
{
	valor = p; 
	siguiente = sig; 
}
NodoLista::NodoLista()
{
	// nodo vacio: su valor es el paciente sentinela (identificador -1)
	valor = Paciente::pacienteVacio(); 
	siguiente = NULL; 
}
NodoLista::~NodoLista()
{
}
