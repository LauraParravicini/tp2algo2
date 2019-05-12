#include "consultador.h"
    
Consultador::Consultador(): Trabajador(){
    horas_trabajadas = 0;
    horas_descontadas = 0;
}
Consultador::Consultador(string apellido_nombre, unsigned int legajo, float sueldo_bruto, float sueldo_neto, char tipo_trabajador, int horas_trabajadas, int horas_descontadas): Trabajador(apellido_nombre, legajo, sueldo_bruto, sueldo_neto, tipo_trabajador){
    this->horas_trabajadas = horas_trabajadas;
    this->horas_descontadas = horas_descontadas;    
}
void Consultador::asignar_horas_trabajadas(int horas_trabajadas){
    this-> horas_trabajadas = horas_trabajadas;
}
void Consultador::asignar_horas_descontas(int horas_descontadas){
    this-> horas_descontadas = horas_descontadas;
}
int Consultador::obtener_horas_trabajadas(){
    return horas_trabajadas;
}
int Consultador::obtener_horas_descontas(){
    return horas_descontadas;
}
void Consultador::liquidar_sueldo(){
    float sueldo_neto = 0;
	float sueldo_bruto = obtener_sueldo_bruto();
    sueldo_neto = ((horas_trabajadas * SEMANAS_AL_MES) - horas_descontadas) * sueldo_bruto;
    asignar_sueldo_neto (sueldo_neto);
}
