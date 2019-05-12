#include "lista.h"
const char EMPLEADO = 'E';
const char JORNALERO = 'J';
const char CONSULTADOR = 'C';
#include <iostream>
using namespace std;

Lista::Lista(){
    primero = NULL;
    tam = 0;
}

bool Lista::esta_vacia(){
    return !primero;
}

unsigned Lista::obtener_tamanio(){
    return tam;
}

void Lista::agregar_trabajador(Trabajador* trabajador){
    Nodo* nuevo = new Nodo(trabajador);
    int legajo = trabajador->obtener_legajo();
    Nodo* actual = primero;
    Nodo* anterior = NULL;
    if(esta_vacia())
        primero = nuevo;
    else{
        bool buscar = true;
        while(actual->obtener_siguiente() && buscar){
            Trabajador* puntero_actual = actual->obtener_trabajador();
            if(puntero_actual->obtener_legajo() < legajo){
                anterior = actual;
                actual = actual->obtener_siguiente();
            }
            else buscar = false;
        }
        if(actual == primero){
            nuevo->setear_siguiente(primero);
            primero = nuevo;
        }
        else{
            nuevo->setear_siguiente(actual);
            anterior->setear_siguiente(nuevo);
        }
    }
    tam++;
}

Trabajador* Lista::devolver_trabajador(int legajo){

}

void Lista::eliminar_trabajador(int legajo){}

void Lista::listar_trabajadores(){
    Nodo* aux = primero;
    while(!primero->obtener_siguiente()){
        Trabajador* actual = aux->obtener_trabajador();
        if(actual->obtener_tipo_trabajador() == EMPLEADO){
            Empleado* nuevo = dynamic_cast<Empleado*>(actual);
            nuevo->liquidar_sueldo();
            cout<<nuevo->obtener_nombre()<<endl;
            cout<<nuevo->obtener_legajo()<<endl;
            cout<<nuevo->obtener_sueldo_bruto()<<endl;
            cout<<nuevo->obtener_sueldo_neto()<<endl;
            cout<<nuevo->obtener_tipo_trabajador()<<endl;
        }
        else if(actual->obtener_tipo_trabajador() == JORNALERO)
            Jornalero* nuevo = dynamic_cast<Jornalero*>(actual);
        else
            Consultador* nuevo = dynamic_cast<Consultador*>(actual);
        aux = aux->obtener_siguiente();
    }
}

Lista::~Lista(){}
