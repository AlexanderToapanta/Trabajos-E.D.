/***********************************************************************
 * Module:  Nodo.h
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 18:58:15
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/


#include <iostream>
#include <string>

using namespace std;

class Nodo {
private:
    int Edad;
    string Nombre;
    Nodo* Siguiente;
    Nodo* Anterior;

public:
    int getEdad(void);
    void setEdad(int newEdad);
    Nodo(int E,  string N, Nodo* S = nullptr, Nodo* A = nullptr);
    ~Nodo();
    string getNombre(void);
    void setNombre(string newNombre);
    Nodo* getSiguiente(void);
    void setSiguiente(Nodo* newSiguiente);
    Nodo* getAnterior(void);
    void setAnterior(Nodo* newAnterior);
};


