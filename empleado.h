#include "trabajadores.h"
#ifndef __EMPLEADO_H_
#define __EMPLEADO_H_

const float PREMIO = 0.1;
const int MAX_LLEGADAS_TARDE = 3;
const float DIAS_TOTALES = 30; //float porque despues hacemos sueldo_mensual / dias_totales

class Empleado: public Trabajador{
	private:
		bool presentismo; 
		int ausencias;
		int llegadas_tarde;

	public:
        //Descripcion: Constructor por defecto
	//PRE: Ninguna
	//POS: Objeto empleado construido
		Empleado();
	
	//Descripcion: Constructor con parametros
	//PRE: Ninguna
	//POST: Objeto empleado construido cargado con los parametros ingresados
		Empleado(string apellido_nombre, unsigned int legajo, float sueldo_bruto, float sueldo_neto, char tipo_trabajador, int ausencias, int llegadas_tarde);
	
	// Descripcion: Getter del atributo ausencias
	//PRE: Ninguna
	//POST: Devuelve el atributo ausencias
		int obtener_ausencias();
	
	// Descripcion: Getter del atributo llegadas_tarde.
	//PRE: Ninguna.
	//POST: Devuelve el atributo llegadas_tarde.
		int obtener_llegadas_tarde();
	
	// Descripcion: Getter del atributo presentismo.
	//PRE: Ninguna.
	//POST: Devuelve el atributo presentismo.
		bool obtener_presentismo();
	
	// Descripcion: Setter del atributo presentismo
	//PRE: Parametro valido (verdadero o falso)
	//POST: Asigna el atributo presentismo
		void asignar_presentismo(bool presentismo);
	
	// Descripcion: Setter del atributo presentisCmo
	//PRE: Parametro valido (verdadero o falso)
	//POST: Asigna el atributo presentismo
		void verificar_presentismo();
	// Descripcion:
		//PRE:
		//POST:
		void liquidar_sueldo();
};

#endif
