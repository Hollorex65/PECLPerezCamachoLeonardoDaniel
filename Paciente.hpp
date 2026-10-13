#ifndef PACIENTE_HPP
#define PACIENTE_HPP
#include "Persona.hpp"
#include <cstring>
#include <string>

class Paciente
{

private:

	// Atributos de la clase Paciente
	
	// Objeto persona
    Persona persona;
	int identificador;
    bool enfermedad; //apendicitis ohernias, siendo -> [True apendicitis y False hernias]
	
public:

	// Setters

    Paciente& SetPersona(const Persona& persona)
    {
        this->persona = persona;
        return *this;
    }
    Paciente& SetIdentificador(int identificador)
    {
        this->identificador = identificador;
        return *this;
    }
    Paciente& SetEnfermedad(bool enfermedad)
    {
        this->enfermedad = enfermedad;
        return *this;
    }
	
	// Getters
	
    const Persona& GetPersona() const { return persona; }
    int GetIdentificador() const { return identificador; }
    bool IsEnfermedad() const { return enfermedad; }
	
	// Constructores
	
    Paciente();                                                       // Constructor por defecto
    Paciente(Persona _persona, int _identificador, bool _enfermedad); // Constructor con parámetros
    ~Paciente();                                                      // Destructor

	// Metodo para saludar siendo Paciente

    void saludarPaciente();
};

#endif // PACIENTE_HPP
