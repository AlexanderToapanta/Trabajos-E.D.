/***********************************************************************
 * Module:  Lista_Doble.cpp
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 18:54:14
 * Purpose: Implementation of the class Lista_Doble
 ***********************************************************************/

#include "Lista_Doble.h"
#include <iostream>

Lista_Doble::Lista_Doble() : cabeza(nullptr), cola(nullptr) {}

Lista_Doble::~Lista_Doble() {
    while (cabeza != nullptr) {
        Nodo* temp = cabeza;
        cabeza = cabeza->getSiguiente();
        delete temp;
    }
}

void Lista_Doble::Insertar(int E, const std::string& N) {
    Nodo* nuevoNodo = new Nodo(E, N);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
        cola = nuevoNodo;
    } else {
        cola->setSiguiente(nuevoNodo);
        nuevoNodo->setAnterior(cola);
        cola = nuevoNodo;
    }
}

void Lista_Doble::Buscar(int E, const std::string& N) const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        if (actual->getEdad() == E && actual->getNombre() == N) {
            std::cout << "Nodo encontrado: Edad = " << actual->getEdad() << ", Nombre = " << actual->getNombre() << std::endl;
            return;
        }
        actual = actual->getSiguiente();
    }
    std::cout << "Nodo no encontrado" << std::endl;
}

void Lista_Doble::Eliminar(int E, const std::string& N) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        if (actual->getEdad() == E && actual->getNombre() == N) {
            if (actual->getAnterior() != nullptr) {
                actual->getAnterior()->setSiguiente(actual->getSiguiente());
            } else {
                cabeza = actual->getSiguiente();
            }
            if (actual->getSiguiente() != nullptr) {
                actual->getSiguiente()->setAnterior(actual->getAnterior());
            } else {
                cola = actual->getAnterior();
            }
            delete actual;
            std::cout << "Nodo eliminado" << std::endl;
            return;
        }
        actual = actual->getSiguiente();
    }
    std::cout << "Nodo no encontrado para eliminar" << std::endl;
}

void Lista_Doble::Mostrar() const {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        std::cout << "Edad: " << actual->getEdad() << ", Nombre: " << actual->getNombre() << " -> <-";
        actual = actual->getSiguiente();
    }
    std::cout << "nullptr" << std::endl;
}

void Lista_Doble::MostrarReversa() const {
    Nodo* actual = cola;
    while (actual != nullptr) {
        std::cout << "Edad: " << actual->getEdad() << ", Nombre: " << actual->getNombre() << " -> ";
        actual = actual->getAnterior();
    }
    std::cout << "nullptr" << std::endl;
}
