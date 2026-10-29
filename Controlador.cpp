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
	cout<<"J: Mostrar los pacientes que hay en el quirófano que atiende hernias.\n"; 
	cout<<"K: Buscar en las listas el paciente con apendicitis de menor prioridad y el de hernia con mayor prioridad\n"; 
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
	int habitacion_comprobar; //declaramos la habitacion a comprobar 
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
						habitacion_comprobar = rand() % 99 + 101;//generamos la habitacion random de apendicitis (rango 101-199 segun la practica) 
						if (id_comprobar != pila_pacientes.getPacienteId(id_comprobar).getId() && habitacion_comprobar != pila_pacientes.getPacienteHabitacion(habitacion_comprobar).getHabitacion()) //si el id que hemos generado es diferente de -1 (caso en el que esta vacia la pila o no coincide ningun id) entonces:
						{
							paciente_creacion.setId(id_comprobar);//le asignamos el id al paciente creado 
							paciente_creacion.setHabitacion(habitacion_comprobar); //asignamos la habitacion
							pila_pacientes.insertar(paciente_creacion); //lo insertamos
							break; //salimos del while 
						} 
					}
				}
			else if(paciente_creacion.getEnfermedad() == 0)//misma logica pero para hernias (1 == false) 
				{
					while(!bucle) 
					{
 
						
						id_comprobar = rand() % 49 + 51; //creamos un numero random entre 51 y 99 para las hernias 
						habitacion_comprobar = rand() % 99 + 201;//generamos la habitacion random de hernias (rango 201-299 segun la practica) 
						if (id_comprobar != pila_pacientes.getPacienteId(id_comprobar).getId()&& habitacion_comprobar != pila_pacientes.getPacienteHabitacion(habitacion_comprobar).getHabitacion()) 
						{
							paciente_creacion.setId(id_comprobar);
							paciente_creacion.setHabitacion(habitacion_comprobar); 
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
	//muestra los pacientes en la pila de pacientes 
	if(pila_pacientes.getUltimo()) 
	{
			pila_pacientes.mostrar(); 
	}
	
}
 
	
void Controlador:: opcionC()
{
	//elimina los pacientes de la pila (extraer libera la memoria del nodo)
	while(pila_pacientes.getUltimo()) 
	{
		pila_pacientes.extraer(); 
	}
}
 
void Controlador:: opcionD()
{
	//Simular llegada de los pacientes en las colas.\n
	//1. primero extraemos el paciente de la pila 
	//2. introducimos en la cola dependiendo de la enfermedad 
	
	while(pila_pacientes.getUltimo()) 
	{
		int longitud = pila_pacientes.getLongitud(); 
		int i; 
		Paciente paciente; 
		for(i = 0; i<longitud; i++)
		{
			paciente = pila_pacientes.extraer(); 
			
			if(paciente.getEnfermedad() == 0)
			{
				if(cola_C.getLongitud() <= cola_D.getLongitud())
					cola_C.insertar(paciente); 
				else
					cola_D.insertar(paciente); 
			}
			else if(paciente.getEnfermedad() == 1)
			{
				if(cola_A.getLongitud() <= cola_B.getLongitud())
					cola_A.insertar(paciente); 
				else
					cola_B.insertar(paciente); 
			}
		}
	}
	
}


void Controlador:: opcionE()
{
	//consultar los pacientes en la cola A y B
	//vamos a llamar al metodo PacienteSaludarCola
	
	cout<<" Sala A:\n";
	cola_A.mostrar(); 
	cout<<" Sala B:\n";
	cola_B.mostrar(); 
}
 
		
void Controlador:: opcionF()
{
	//muestra cola C y D
	cout<<" Sala C:\n";
	cola_C.mostrar(); 
	cout<<" Sala D:\n";
	cola_D.mostrar(); 
}


void Controlador:: opcionG()
{
	//elimina el contenido d elas colas (eliminar libera la memoria del nodo)
	while(cola_A.getPrimero())
	{
		cola_A.eliminar(); 
	}
	while(cola_B.getPrimero())
	{
		cola_B.eliminar(); 
	}
	while(cola_C.getPrimero())
	{
		cola_C.eliminar(); 
	}
	while(cola_D.getPrimero())
	{
		cola_D.eliminar(); 
	}
}
 

void Controlador:: opcionH()
{
	//H: extraemos los pacientes de las colas del preoperatorio y los ordenamos por gravedad (id) en la lista del quirofano
	//el mas grave (id mas alto) queda AL FINAL de la lista: insertamos por head recorriendo los ids de mayor a menor
	
	//APENDICITIS (rango de ids 1-49): movemos la cola A y la B a la lista de apendicitis
	int id_apendicitis = 49; //empezamos por el id mas grande posible 
	while((cola_A.getPrimero() != NULL || cola_B.getPrimero() != NULL) && id_apendicitis >= 1) //seguimos mientras queda alguien en A o B y no nos salgamos del rango 
	{
		//buscamos en la cola A el paciente con el id actual 
		Paciente paciente_a_lista = cola_A.getPacienteId(id_apendicitis); //consulta el paciente con ese id 
		if(paciente_a_lista.getId() != -1) //si no es el sentinela, lo hemos encontrado en la A 
		{
			lista_apendicitis.insertarHead(paciente_a_lista); //lo metemos por delante: como bajamos ids, el mas grave acaba al final 
			cola_A.borrarPorId(id_apendicitis); //lo extraemos de la cola para no volver a encontrarlo 
		}
		else
		{
			//si no estaba en la A, buscamos el mismo id en la cola B 
			paciente_a_lista = cola_B.getPacienteId(id_apendicitis); 
			if(paciente_a_lista.getId() != -1) //si lo encontramos en la B 
			{
				lista_apendicitis.insertarHead(paciente_a_lista); //lo metemos en la lista 
				cola_B.borrarPorId(id_apendicitis); //y lo extraemos de la cola 
			}
		}
		id_apendicitis--; //bajamos un escalon de gravedad 
	}
	
	//HERNIAS (rango de ids 51-99): movemos la cola C y la D a la lista de hernias, mismo algoritmo 
	int id_hernias = 99; //empezamos por el id mas grande posible de hernias 
	while((cola_C.getPrimero() != NULL || cola_D.getPrimero() != NULL) && id_hernias >= 51) //seguimos mientras queda alguien en C o D y no nos salgamos del rango 
	{
		//buscamos en la cola C el paciente con el id actual 
		Paciente paciente_a_lista = cola_C.getPacienteId(id_hernias); //consulta el paciente con ese id 
		if(paciente_a_lista.getId() != -1) //si no es el sentinela, lo hemos encontrado en la C 
		{
			lista_hernias.insertarHead(paciente_a_lista); //lo metemos por delante en la lista de hernias 
			cola_C.borrarPorId(id_hernias); //lo extraemos de la cola 
		}
		else
		{
			//si no estaba en la C, buscamos el mismo id en la cola D 
			paciente_a_lista = cola_D.getPacienteId(id_hernias); 
			if(paciente_a_lista.getId() != -1) //si lo encontramos en la D 
			{
				lista_hernias.insertarHead(paciente_a_lista); //lo metemos en la lista 
				cola_D.borrarPorId(id_hernias); //y lo extraemos de la cola 
			}
		}
		id_hernias--; //bajamos un escalon de gravedad 
	}
}

 
void Controlador:: opcionI()
{
	lista_apendicitis.mostrar(); 
}
 

void Controlador:: opcionJ()
{
	lista_hernias.mostrar(); 
}
 


void Controlador:: opcionK()
{
	// Buscar en las listas el paciente con apendicitis de menor prioridad y el de hernia con mayor prioridad
	Paciente paciente_apendicitis = lista_apendicitis.encontrar(1,0);
	Paciente  paciente_hernias = lista_hernias.encontrar(0,1);

	paciente_apendicitis.saludarPacienteCola(); 
	paciente_hernias.saludarPacienteCola(); 
}
 

void Controlador:: opcionL()
{
	//reiniciamos: vaciamos las dos listas del quirofano (borrar libera todos los nodos)
	lista_apendicitis.borrar(); 
	lista_hernias.borrar(); 
}

void Controlador::elegirOpcion(string opcion) 
{
	if (opcion == "A") 
		opcionA(); 
	else if (opcion == "B")
		opcionB(); 
	else if (opcion == "C")
		opcionC();
	else if (opcion == "D")
		opcionD();
	else if (opcion == "E")
		opcionE();
	else if (opcion == "F")
		opcionF();
	else if (opcion == "G")
		opcionG();
	else if (opcion == "H")
		opcionH();
	else if (opcion == "I")
		opcionI();
	else if (opcion == "J")
		opcionJ();
	else if (opcion == "K")
		opcionK();
	else if (opcion == "L")
		opcionL();
}

Controlador::~Controlador()
{
	
}
		


