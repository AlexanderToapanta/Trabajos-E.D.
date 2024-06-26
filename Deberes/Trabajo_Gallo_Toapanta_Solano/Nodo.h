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
    string Nombre1;
    string Nombre2;
    string Apellido;
    string Correo;
    Nodo* Siguiente;
    Nodo* Anterior;

public:
    string getNombre2(void);
    void setNombre2(string newNombre2);
    Nodo(string N1,  string N2, string Ape, Nodo* S = nullptr, Nodo* A = nullptr);
    ~Nodo();
    string getNombre1(void);
    string getCorreo(void);
    void setNombre1(string newNombre1);
    void setCorreo(string newCorreo);
    string getApellido(void);
    void setApellido(string newApellido);
    Nodo* getSiguiente(void);
    void setSiguiente(Nodo* newSiguiente);
    Nodo* getAnterior(void);
    void setAnterior(Nodo* newAnterior);
};


