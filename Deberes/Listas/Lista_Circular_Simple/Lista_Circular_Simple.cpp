/***********************************************************************
 * Module:  Lista_Circular_Simple.cpp
 * Author:  Usuario
 * Modified: miércoles, 29 de mayo de 2024 16:33:38
 * Purpose: Implementation of the class Lista_Circular_Simple
 ***********************************************************************/

#include "Lista_Circular_Simple.h"
#include <iostream>

Lista_Circular_Simple::Lista_Circular_Simple() : cabeza(nullptr), cola(nullptr) {}

Lista_Circular_Simple::~Lista_Circular_Simple() {
    if (cabeza != nullptr) {
        Nodo* actual = cabeza;
        do {
            Nodo* temp = actual;
            actual = actual->siguiente;
            delete temp;
        } while (actual != cabeza);
    }
}

void Lista_Circular_Simple::Insertar(int v) {
    Nodo* nuevoNodo = new Nodo(v);
    if (cabeza == nullptr) {
        cabeza = nuevoNodo;
        cola = nuevoNodo;
        nuevoNodo->siguiente = cabeza;
    } else {
        cola->siguiente = nuevoNodo;
        nuevoNodo->siguiente = cabeza;
        cola = nuevoNodo;
    }
}

void Lista_Circular_Simple::Buscar(int v) const {
    if (cabeza == nullptr) {
        std::cout << "Lista vacía" << std::endl;
        return;
    }

    Nodo* actual = cabeza;
    do {
        if (actual->valor == v) {
            std::cout << "Nodo encontrado: " << actual->valor << std::endl;
            return;
        }
        actual = actual->siguiente;
    } while (actual != cabeza);

    std::cout << "Nodo no encontrado" << std::endl;
}

void Lista_Circular_Simple::Eliminar(int v) {
    if (cabeza == nullptr) {
        std::cout << "Lista vacía" << std::endl;
        return;
    }

    Nodo* actual = cabeza;
    Nodo* previo = cola;
    do {
        if (actual->valor == v) {
            if (actual == cabeza && actual == cola) {
                cabeza = nullptr;
                cola = nullptr;
            } else {
                if (actual == cabeza) {
                    cabeza = cabeza->siguiente;
                    cola->siguiente = cabeza;
                } else if (actual == cola) {
                    cola = previo;
                    cola->siguiente = cabeza;
                } else {
                    previo->siguiente = actual->siguiente;
                }
            }
            delete actual;
            std::cout << "Nodo eliminado" << std::endl;
            return;
        }
        previo = actual;
        actual = actual->siguiente;
    } while (actual != cabeza);

    std::cout << "Nodo no encontrado para eliminar" << std::endl;
}

void Lista_Circular_Simple::Mostrar() const {
    if (cabeza == nullptr) {
        std::cout << "Lista vacía" << std::endl;
        return;
    }

    Nodo* actual = cabeza;
    do {
        std::cout << actual->valor << " -> ";
        actual = actual->siguiente;
    } while (actual != cabeza);
    std::cout << "(cabeza)" << std::endl;
}
