#include "NodoCola.hpp"

NodoCola::NodoCola(Paciente p, NodoCola* sig)
{
	valor = p; 
	siguiente = sig; 
}
NodoCola::NodoCola()
{
	// nodo vacio: su valor es el paciente sentinela (identificador -1)
	valor = Paciente::pacienteVacio(); 
	siguiente = NULL; 
}
NodoCola::~NodoCola()
{
}
