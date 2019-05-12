#include "nodo.h"

Nodo::Nodo(Trabajador* trabajador){
    this->trabajador = trabajador;
    siguiente = NULL;
}

Nodo::~Nodo(){
    cout<<"hola"<<endl;
}

void Nodo::asignar_trabajador(Trabajador* trabajador){
    this->trabajador = trabajador;
}

Trabajador* Nodo::obtener_trabajador(){
    return trabajador;
}

void Nodo::setear_siguiente(Nodo* siguiente){
    this->siguiente = siguiente;
}

Nodo* Nodo::obtener_siguiente(){
    return siguiente;
}
