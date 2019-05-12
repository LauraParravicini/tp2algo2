#include "trabajadores.h"
#ifndef __CONSULTADOR_H_
#define __CONSULTADOR_H_

const int  SEMANAS_AL_MES = 4;

class Consultador: public Trabajador{
    private:
        int horas_trabajadas;
        int horas_descontadas; 
    public:
        Consultador();
        Consultador(string apellido_nombre, unsigned int legajo, float sueldo_bruto, float sueldo_neto, char tipo_trabajador, int horas_trabajadas, int horas_descontadas);
        void asignar_horas_trabajadas(int horas_trabajadas);
        void asignar_horas_descontas(int horas_descontadas);
        int obtener_horas_trabajadas();
        int obtener_horas_descontas();
        void liquidar_sueldo();
};

#endif