#include "trabajadores.h"
#ifndef __JORNALERO_H_
#define __JORNALERO_H_

class Jornalero: public Trabajador{
    private:  
        int dias_trabajados;
    public:       
        Jornalero();
        Jornalero(string apellido_nombre, unsigned int legajo, float sueldo_bruto, float sueldo_neto, char tipo_trabajador, int dias_trabajados);
        void asignar_dias_trabajados(int dias_trabajados);
        int obtener_dias_trabajados();
        void liquidar_sueldo();
};

#endif