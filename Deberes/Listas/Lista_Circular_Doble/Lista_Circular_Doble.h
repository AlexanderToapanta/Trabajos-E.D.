#pragma once
#include "Nodo.cpp"
#include <string>

class Lista_Circular_Doble {
public:
    Lista_Circular_Doble();
    ~Lista_Circular_Doble();

    void Insertar(const std::string& N);
    void Buscar(const std::string& N) const;
    void Eliminar(const std::string& N);
    void Mostrar() const;
    void MostrarReversa() const;

private:
    Nodo* cabeza;
};
