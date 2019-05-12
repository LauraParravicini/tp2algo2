#ifndef _TRABAJADORES_H_
#define _TRABAJADORES_H_
#include <iostream>
#include <string>
using namespace std;

class Trabajador{
	private:
		string apellido_nombre;
		unsigned int legajo;
		float sueldo_bruto;
		float sueldo_neto;
		char tipo_trabajador;
	public:
		Trabajador();
		Trabajador(string apellido_nombre, unsigned int legajo, float sueldo_bruto, float sueldo_neto, char tipo_trabajador);
		void asignar_nombre(string nombre);
		string obtener_nombre();
		void asignar_legajo(unsigned int legajo);
		unsigned int obtener_legajo();
		float obtener_sueldo_bruto();
		void asignar_sueldo_neto(float sueldo_neto);
		float obtener_sueldo_neto();
		char obtener_tipo_trabajador();

		virtual void liquidar_sueldo();
};
#endif