#include "empleado.h"

Empleado::Empleado(): Trabajador(){
	ausencias = 0;
	presentismo = false;
	llegadas_tarde = 0;
}

Empleado::Empleado(string apellido_nombre, unsigned int legajo, float sueldo_bruto, float sueldo_neto, char tipo_trabajador, int ausencias, int llegadas_tarde) : Trabajador(apellido_nombre, legajo, sueldo_bruto, sueldo_neto, tipo_trabajador){
	this->ausencias = ausencias;
	this->llegadas_tarde = llegadas_tarde;
	this->presentismo = presentismo;
} 

int Empleado::obtener_ausencias(){
	return ausencias;
}

int Empleado::obtener_llegadas_tarde(){
	return llegadas_tarde;
}

void Empleado::asignar_presentismo(bool presentismo){
	this->presentismo = presentismo;
}

bool Empleado::obtener_presentismo(){
	return presentismo;
}

void Empleado::verificar_presentismo(){
	if(!obtener_ausencias() && obtener_llegadas_tarde() <= MAX_LLEGADAS_TARDE)
		asignar_presentismo(true);
	else
		asignar_presentismo(false);
}

void Empleado::liquidar_sueldo(){
	float sueldo_neto = 0;
	float sueldo_bruto = obtener_sueldo_bruto();
	verificar_presentismo();
	if(obtener_presentismo()){
		sueldo_neto = sueldo_bruto + sueldo_bruto*PREMIO;
		asignar_sueldo_neto(sueldo_neto);
	}
	else{
		if(!obtener_ausencias())
			asignar_sueldo_neto(sueldo_bruto);
		else{
			sueldo_neto = sueldo_bruto * ((DIAS_TOTALES - obtener_ausencias())/DIAS_TOTALES);
			asignar_sueldo_neto(sueldo_neto);
		}
	}
}