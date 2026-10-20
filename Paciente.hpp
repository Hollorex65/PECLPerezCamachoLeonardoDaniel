#ifndef PACIENTE_HPP
#define PACIENTE_HPP
#include <cstring>
#include <string>

using namespace std; 
class Paciente
{

private:

	// Atributos de la clase Paciente
	
	int identificador;
    bool enfermedad; //apendicitis o hernias, siendo -> [True apendicitis y False hernias]
	string dni;
	int habitacion; 
	
public:

	// Setters
	void setId(int id); 
	void setEnfermedad(bool enfer); 
	void setDni(string DNI); 
	void setHabitacion(int hab); 
	
	// Getters
	int getId(); 
	bool getEnfermedad(); 
	string getDni(); 
	int getHabitacion(); 
	// Constructores
    Paciente();                                                       // Constructor por defecto 
    ~Paciente();                                                      // Destructor

	// Metodo para saludar siendo Paciente
    void saludarPaciente();
	//generar un random dni 
	string randomDni();
	//generar una enfermedad aleatoria
	bool randomEnfermedad();
	//paciente sentinela de "no hay nada": identifica -1 (para colas/pilas/listas vacias)
	static Paciente pacienteVacio();
	
};

#endif // PACIENTE_HPP
