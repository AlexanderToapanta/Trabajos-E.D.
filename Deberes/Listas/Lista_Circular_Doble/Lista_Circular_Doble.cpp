#include "Lista_Circular_Doble.h"
#include <iostream>

Lista_Circular_Doble::Lista_Circular_Doble() : cabeza(nullptr) {}

Lista_Circular_Doble::~Lista_Circular_Doble() {
    if (cabeza) {
        Nodo* actual = cabeza;
        do {
            Nodo* temp = actual;
            actual = actual->siguiente;
            delete temp;
        } while (actual != cabeza);
    }
}

void Lista_Circular_Doble::Insertar(const std::string& N) {
    Nodo* nuevoNodo = new Nodo(N);
    if (!cabeza) {
        cabeza = nuevoNodo;
        cabeza->siguiente = cabeza;
        cabeza->anterior = cabeza;
    } else {
        Nodo* cola = cabeza->anterior;
        cola->siguiente = nuevoNodo;
        nuevoNodo->anterior = cola;
        nuevoNodo->siguiente = cabeza;
        cabeza->anterior = nuevoNodo;
    }
}

void Lista_Circular_Doble::Buscar(const std::string& N) const {
    if (!cabeza) {
        std::cout << "Lista vacía" << std::endl;
        return;
    }

    Nodo* actual = cabeza;
    do {
        if (actual->getNombre() == N) {
            std::cout << "Nodo encontrado: Nombre = " << actual->getNombre() << std::endl;
            return;
        }
        actual = actual->siguiente;
    } while (actual != cabeza);
    
    std::cout << "Nodo no encontrado" << std::endl;
}

void Lista_Circular_Doble::Eliminar(const std::string& N) {
    if (!cabeza) {
        std::cout << "Lista vacía" << std::endl;
        return;
    }

    Nodo* actual = cabeza;
    do {
        if (actual->getNombre() == N) {
            if (actual->siguiente == actual) {
                delete actual;
                cabeza = nullptr;
            } else {
                actual->anterior->siguiente = actual->siguiente;
                actual->siguiente->anterior = actual->anterior;
                if (actual == cabeza) {
                    cabeza = actual->siguiente;
                }
                delete actual;
            }
            std::cout << "Nodo eliminado" << std::endl;
            return;
        }
        actual = actual->siguiente;
    } while (actual != cabeza);
    
    std::cout << "Nodo no encontrado para eliminar" << std::endl;
}

void Lista_Circular_Doble::Mostrar() const {
    if (!cabeza) {
        std::cout << "Lista vacía" << std::endl;
        return;
    }

    Nodo* actual = cabeza;
    do {
        std::cout << "Nombre: " << actual->getNombre() << " -> ";
        actual = actual->siguiente;
    } while (actual != cabeza);
    std::cout << "cabeza" << std::endl;
}

void Lista_Circular_Doble::MostrarReversa() const {
    if (!cabeza) {
        std::cout << "Lista vacía" << std::endl;
        return;
    }

    Nodo* actual = cabeza->anterior;
    do {
        std::cout << "Nombre: " << actual->getNombre() << " -> ";
        actual = actual->anterior;
    } while (actual != cabeza->anterior);
    std::cout << "cabeza" << std::endl;
}
