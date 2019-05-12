#ifndef _NODO_H_
#define _NODO_H_
#include "trabajadores.h"

class Nodo{
    private:
        Trabajador* trabajador;
        Nodo* siguiente;
    public:
        Nodo(Trabajador* trabajador);
        ~Nodo();

        void asignar_trabajador(Trabajador* trabajador);
        Trabajador* obtener_trabajador();

        void setear_siguiente(Nodo* siguiente);
        Nodo* obtener_siguiente();
};

#endif
