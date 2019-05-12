#include <iostream>
#include "lista.h" 
#include <string> 
#include <fstream>

using namespace std;

const char EMPLEADO = 'E';
const char JORNALERO = 'J';
const char CONSULTOR = 'C';

void leer_trabajadores(string ruta);

int main(){
	ifstream trabajadores;
	string ruta = "trabajadores.txt";
	leer_trabajadores(ruta);

	return 0;
}

void leer_trabajadores(string ruta){
	ifstream trabajadores;
	trabajadores.open(ruta);
	char tipo_trabajador;
	int legajo, sueldo_bruto, llegadas_tarde, ausencias, dias_trabajados, horas_trabajadas, horas_descontar;
	string apellido_nombre;
	if (trabajadores.is_open()){
		while(!trabajadores.eof()){
			trabajadores >> tipo_trabajador;
			trabajadores >> legajo;
			trabajadores >> apellido_nombre;
			trabajadores >> sueldo_bruto;

			if(tipo_trabajador == EMPLEADO){
				trabajadores >> llegadas_tarde;
				trabajadores >> ausencias;
				//Acá metemos esos datos en la lista

			}else if(tipo_trabajador == JORNALERO){
				trabajadores >> dias_trabajados;
				//Acá metemos ese dato en la lista

			}else{
				trabajadores >> horas_trabajadas;
				trabajadores >> horas_descontar;
				//Acá metemos ese dato en la lista
			}
		}
	}
	else
		cout<< "no se ha podido abrir"<<endl;

	trabajadores.close();
}
