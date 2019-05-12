#include "nodo.h"
#include "empleado.h"
#include "jornalero.h"
#include "consultador.h"

#ifndef __LISTA_H_
#define __LISTA_H_

class Lista{
    private:
        Nodo* primero;
        unsigned int tam;
    public:
        Lista();
        ~Lista();

        bool esta_vacia();

        void agregar_trabajador(Trabajador* trabajador);
        Trabajador* devolver_trabajador(int legajo);

        void eliminar_trabajador(int legajo);

        void listar_trabajadores();

        unsigned obtener_tamanio();
};

#endif
