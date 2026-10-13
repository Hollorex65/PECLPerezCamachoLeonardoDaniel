#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <cstring>
#include <string>

using namespace std;

class Persona
{

private:
    // Atributos de la Clase persona.
    string nombre;
	int edad;
    string genero;
    char DNI[10];
	
public:

	// Setters
	
    Persona& SetNombre(const string& nombre)
    {
        this->nombre = nombre;
        return *this;
    }
    Persona& SetEdad(int edad)
    {
        this->edad = edad;
        return *this;
    }
    Persona& SetGenero(const string& genero)
    {
        this->genero = genero;
        return *this;
    }
    Persona& SetDNI(const char _DNI[10])
	{
		strcpy(this->DNI, _DNI); // Copia el contenido de forma segura
		return *this;
	}
	
	// Getters
	
    const string& GetNombre() const { return nombre; }
    int GetEdad() const { return edad; }
    const string& GetGenero() const { return genero; }
    const char* GetDNI() const { return DNI; }
	
	// Contructores
	
    Persona();                                                         // Constructor por defecto
    Persona(string _nombre, int _edad, string _genero, char _DNI[10]); // Constructor con parámetros
    ~Persona();                                                        // Destructor

	// Metodo para saludar
	
    void saludar();
};

#endif
