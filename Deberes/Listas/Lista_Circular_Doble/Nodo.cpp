#include "Nodo.h"

Nodo::Nodo(const std::string& n) : Nombre(n), siguiente(nullptr), anterior(nullptr) {}

std::string Nodo::getNombre() const {
    return Nombre;
}

void Nodo::setNombre(const std::string& newNombre) {
    Nombre = newNombre;
}

Nodo* Nodo::getSiguiente() const {
    return siguiente;
}

void Nodo::setSiguiente(Nodo* newSiguiente) {
    siguiente = newSiguiente;
}

Nodo* Nodo::getAnterior() const {
    return anterior;
}

void Nodo::setAnterior(Nodo* newAnterior) {
    anterior = newAnterior;
}
