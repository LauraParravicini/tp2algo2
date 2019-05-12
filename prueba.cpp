#include "trabajadores.h"
#include "empleado.h"
#include "jornalero.h"
#include "consultador.h"
#include "nodo.h"
#include "lista.h"
#include <iostream>

int main(){
    Empleado empleado("Perez Rosa", 321, 42000, 0, 'E', 2, 0); //Deberia descontar 2 dias entero, 42000 - ((30-2)/30) == 40600
    //Nodo trabajador(&empleado);
    Empleado empleado2("Sosa Juan", 457, 40000, 0, 'E', 0, 1);
    Jornalero jornalero("Rossi Rocio", 125, 850, 0, 'J', 7);
    Lista trabajadores;
    cout<<trabajadores.esta_vacia()<<endl;
    trabajadores.agregar_trabajador(&empleado2);
    trabajadores.listar_trabajadores();
    trabajadores.agregar_trabajador(&empleado);
    trabajadores.agregar_trabajador(&jornalero);

    //Trabajador* aux = trabajador.obtener_trabajador();
    /*Nota clave*/
    /*Acordate que cuando mando una subclase
      y la asigno a una clase ancestro,
      se slicea toda la info de la subclase,
      por lo tanto tengo que usar punteros
      a la subclase y luego devolver el puntero
      de la clase ancestro, para luego castearlo
      nuevamente a la subclase*/
    //Empleado* nuevo = dynamic_cast<Empleado*>(aux);
    //cout<<nuevo->obtener_ausencias()<<endl;
    //cout<<nuevo->obtener_llegadas_tarde()<<endl;
    trabajadores.listar_trabajadores();
    return 0;
}
