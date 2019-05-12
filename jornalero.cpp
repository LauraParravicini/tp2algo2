#include "jornalero.h"
#ifndef __JORNALERO_H_
#define __JORNALERO_H_

Jornalero::Jornalero(): Trabajador(){
    dias_trabajados = 0;
}
Jornalero::Jornalero(string apellido_nombre, unsigned int legajo, float sueldo_bruto, float sueldo_neto, char tipo_trabajador, int dias_trabajados) : Trabajador(apellido_nombre, legajo, sueldo_bruto, sueldo_neto, tipo_trabajador){
    this->dias_trabajados = dias_trabajados;    
}
void Jornalero::asignar_dias_trabajados(int dias_trabajados){
    this-> dias_trabajados = dias_trabajados;
}
int Jornalero::obtener_dias_trabajados(){
    return dias_trabajados;
}
void Jornalero::liquidar_sueldo(){
    int sueldo_bruto = obtener_sueldo_bruto();
    int sueldo_neto = dias_trabajados * sueldo_bruto;
    asignar_sueldo_neto (sueldo_neto);
}

#endif