#pragma once
#include <string>

class Nodo {
public:
    std::string Nombre;
    Nodo* siguiente;
    Nodo* anterior;

    Nodo(const std::string& n);

    std::string getNombre() const;
    void setNombre(const std::string& newNombre);

    Nodo* getSiguiente() const;
    void setSiguiente(Nodo* newSiguiente);

    Nodo* getAnterior() const;
    void setAnterior(Nodo* newAnterior);
};
