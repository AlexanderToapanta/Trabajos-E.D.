/***********************************************************************
 * Module:  Lista_Doble.h
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 18:54:14
 * Purpose: Declaration of the class Lista_Doble
 ***********************************************************************/

#include "Nodo.cpp"
#include <string>

class Lista_Doble {
public:
    Lista_Doble();
    ~Lista_Doble();

    void Insertar(int E, const std::string& N);
    void Buscar(int E, const std::string& N) const;
    void Eliminar(int E, const std::string& N);
    void Mostrar() const;
    void MostrarReversa() const;

private:
    Nodo* cabeza;
    Nodo* cola;
};
