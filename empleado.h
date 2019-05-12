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
		Empleado();
		Empleado(string apellido_nombre, unsigned int legajo, float sueldo_bruto, float sueldo_neto, char tipo_trabajador, int ausencias, int llegadas_tarde);
		int obtener_ausencias();
		int obtener_llegadas_tarde();
		bool obtener_presentismo();
		void asignar_presentismo(bool presentismo);
		void verificar_presentismo();
		void liquidar_sueldo();
};

#endif
