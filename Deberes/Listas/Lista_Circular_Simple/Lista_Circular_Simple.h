/***********************************************************************
 * Module:  Lista_Circular_Simple.h
 * Author:  Usuario
 * Modified: miércoles, 29 de mayo de 2024 16:33:38
 * Purpose: Declaration of the class Lista_Circular_Simple
 ***********************************************************************/

#if !defined(__Lista_Circular_Simple_h)
#define __Lista_Circular_Simple_h

struct Nodo {
    int valor;
    Nodo* siguiente;

    Nodo(int v) : valor(v), siguiente(nullptr) {}
};

class Lista_Circular_Simple {
public:
    Lista_Circular_Simple();
    ~Lista_Circular_Simple();

    void Insertar(int v);
    void Buscar(int v) const;
    void Eliminar(int v);
    void Mostrar() const;

private:
    Nodo* cabeza;
    Nodo* cola;
};

#endif
