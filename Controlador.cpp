#include "Controlador.hpp"
#include <cstdlib>


/* A:  generar 12 pacientes y amlacenarlos en la pila de pacientes (hasta 48) 
 * B: mostrar los pacientes en la pila de pacientes 
 * C: borrar todos los pacientes de la pila y los generados antes de entrar en ella 
 * D: extraer los pacientes de la pila y los almacena en una de las dos colas segun su enfermedad
 * E: muestra los pacientes en la cola (sala de preoperatorio) A y B (apendicitis) 
 * F: muestra los pacientes en la cola (sala de preoperatorio) C y D (hernias) 
 * G: borrar los pacientes en las salas del preoperatorio
 * H: extraer los pacientes de las colas del preoperatorio y los almacena en las listass del quirofano segun su enfermedad
 * I: muestra los pacientes en la lista de apendicitis
 * J: muestra los pacientes en la lista de hernias 
 * K: busca en las listas y muestra los 2 pacientes siguientes: el de apendicitis mas grave y el de la hernia mas grave 
 * L: reiniciar el programa a su estado original Pacientes
 * 
*/

Controlador::Controlador()
{
	
}

void Controlador::status()
{
	//linea separadora de 40 guiones
	cout << "\n\n"<<"------------------------------------------------------------------------------------------------------"<<"\n";
	//estado de la pila: cuantos pacientes hay y su contenido
	cout << "Pacientes en la pila -> " << pila_pacientes.getLongitud() << "\n";
	cout<<"Pacientes en las colas:"<<"\n\t\t"<<"Sala A-> "<<cola_A.getLongitud()<<"\t\t"<<"Sala B-> "<<cola_B.getLongitud()<<"\t\t"<<"Sala C-> "<<cola_C.getLongitud()<<"\t\t"<<"Sala D-> "<<cola_D.getLongitud()<<"\t\n";
	cout<<"Pacientes en las listas:"<<"\n\t\t"<<"Quirofano Apendicitis-> "<<lista_apendicitis.getLongitud()<<"\t\t"<<"Quirofano hernias-> "<<lista_hernias.getLongitud()<<"\t\n\n"; 
	cout<<"Pacientes en el arbol ->"<<0; //AQUI VA ABB.getLongitud PERO NO ESTA IMPLEMENTADO TODAVIA 
	cout << "\n\n------------------------------------------------------------------------------------------------------\n\n";
	cout<<"A: Generar 12 pacientes de forma aleatoria y almacenarlos en la Pila.\n";
	cout<<"B: Consultar todos los pacientes generados en la Pila (pendientes de entrar en las salas).\n";
	cout<<"C: Borrar los pacientes generados en la pila.\n"; 
	cout<<"D: Simular llegada de los pacientes en las colas.\n";
	cout<<"E: Consultar los pacientes de las salas A y B.\n"; 
	cout<<"F: Consultar los pacientes de las salas C y D.\n"; 
	cout<<"G: Borrar los todos los pacientes de las salas.\n";
	cout<<"H: Simular la entrada de los pacientes a los quirófanos (a las listas).\n";
	cout<<"I: Mostrar los pacientes que hay en el quirófano que atiende apendicitis.\n";
	cout<<"J: Buscar en las listas el paciente con apendicitis de menor prioridad y el de hernia con mayor prioridad.\n"; 
	cout<<"K: busca en las listas y muestra los 2 pacientes siguientes: el de apendicitis mas grave y el de la hernia mas grave\n"; 
	cout<<"L: Reiniciar el programa.\n";
	cout<<"S: Salir.\n\n";
	cout<<"Indique la opcion deseada: "; 
}


void Controlador::opcionA()
{
	//primero vamos a delimitar el bucle de generacion de pacientes, asi como el limite de pacientes que puede generarse
	//en el bucle los vamos introduciendo en la pila 
	//y vamos a generar el id dependiendo de la enfermedad y de que en la pila de pacientes, no haya nignun paciente con ese id 
	// 2 cifras aleatorias entre 1 y 49->int numeros = rand() % 49 + 1;
	int bucle_maximo = 12;//creamos la variable para el bucle for 
	int pila_maximo = 48;//creamos la variable para la maxima de la Pila
	int i; //creamos la variable para la iteracion del bucle
	int id_comprobar; //creamos la variable para la comparacion de ids 
	bool bucle = 0;//creamos la variable para el bucle while (0= False) 
	for (i = 0; i<bucle_maximo ; i++)
	{
		if (pila_pacientes.getLongitud()<pila_maximo)//si la pila de pacientes es menor que el maximo de pàcientes que puede haber: 
		{
			
			Paciente paciente_creacion = Paciente(); //creamos el paciente a insertar
			if(paciente_creacion.getEnfermedad() == 1)//comprobamos que tenga apendicitis
				{
					while(!bucle) 
					{
						 
						
						id_comprobar = rand() % 49 + 1;//creamos un numero random entre 49 y 1 
						if (id_comprobar != pila_pacientes.getPaciente(id_comprobar).getId()) //si el id que hemos generado es diferente de -1 (caso en el que esta vacia la pila o no coincide ningun id) entonces: 
						{
							paciente_creacion.setId(id_comprobar);//le asignamos el id al paciente creado 
							pila_pacientes.insertar(paciente_creacion); //lo insertamos
							break; //salimos del while 
						} 
					}
				}
			else if(paciente_creacion.getEnfermedad() == 0)//misma logica pero para hernias (1 == false) 
				{
					while(!bucle) 
					{
 
						
						id_comprobar = rand() % 99 + 51; 
						if (id_comprobar != pila_pacientes.getPaciente(id_comprobar).getId()) 
						{
							paciente_creacion.setId(id_comprobar);
							pila_pacientes.insertar(paciente_creacion); //lo insertamos
							break; 
						} 
					}
				}
		}
	}
}
 
	
void Controlador:: opcionB()
{
	
}
 
	
void Controlador:: opcionC()
{
	
}
 
void Controlador:: opcionD()
{
}


void Controlador:: opcionE()
{
}
 
		
void Controlador:: opcionF()
{
}


void Controlador:: opcionG()
{
}
 

void Controlador:: opcionH()
{
}

 
void Controlador:: opcionI()
{
}
 

void Controlador:: opcionJ()
{
}
 


void Controlador:: opcionK()
{
}
 

void Controlador:: opcionL()
{
}

void Controlador::elegirOpcion(string opcion) 
{
	
}

Controlador::~Controlador()
{
	
}
		


