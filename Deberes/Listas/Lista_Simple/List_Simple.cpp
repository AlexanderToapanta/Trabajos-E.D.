/***********************************************************************
 * Module:  List_Simple.cpp
 * Author:  Usuario
 * Modified: mi�rcoles, 29 de mayo de 2024 16:33:38
 * Purpose: Implementation of the class List_Simple
 ***********************************************************************/

#include "List_Simple.h"
#include<string>
#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       List_Simple::getSuguiente()
// Purpose:    Implementation of List_Simple::getSuguiente()
// Return:     nodo*
////////////////////////////////////////////////////////////////////////

nodo* List_Simple::getsiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Simple::setSuguiente(nodo* newSuguiente)
// Purpose:    Implementation of List_Simple::setSuguiente()
// Parameters:
// - newSuguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Simple::setsiguiente(nodo* newsiguiente)
{
   siguiente = newsiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Simple::Insertar()
// Purpose:    Implementation of List_Simple::Insertar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Simple::Insertar(int E, string N)
{
   nodo* nuevoNodo = new nodo(E, N);
    nuevoNodo->siguiente = siguiente;
    siguiente = nuevoNodo;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Simple::Buscar()
// Purpose:    Implementation of List_Simple::Buscar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Simple::Buscar(int E, string N)
{
    nodo* actual = siguiente;
    while (actual != nullptr) {
        if (actual->Edad == E && actual->Nombre == N) {
            cout << "Nodo encontrado: Edad = " << actual->Edad << ", Nombre = " << actual->Nombre <<endl;
            return;
        }
        actual = actual->siguiente;
    }
    cout << "Nodo no encontrado" << endl;
}


////////////////////////////////////////////////////////////////////////
// Name:       List_Simple::Eliminar()
// Purpose:    Implementation of List_Simple::Eliminar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Simple::Eliminar(int E, string N)
{
  nodo* actual = siguiente;
    nodo* previo = nullptr;
    while (actual != nullptr) {
        if (actual->Edad == E && actual->Nombre == N) {
            if (previo == nullptr) {
                siguiente = actual->siguiente;
            } else {
                previo->siguiente = actual->siguiente;
            }
            delete actual;
            cout << "Nodo eliminado" << endl;
            return;
        }
        previo = actual;
        actual = actual->siguiente;
    }
    cout << "Nodo no encontrado para eliminar" << endl;
}


////////////////////////////////////////////////////////////////////////
// Name:       List_Simple::Mostrar()
// Purpose:    Implementation of List_Simple::Mostrar()
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Simple::Mostrar( )
{
   nodo* actual = siguiente;
    while (actual != nullptr) {
        std::cout << "Edad: " << actual->Edad << ", Nombre: " << actual->Nombre << " -> ";
        actual = actual->siguiente;
    }
    std::cout << "nullptr" << std::endl;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Simple::List_Simple(int E, int N, nodo* S)
// Purpose:    Implementation of List_Simple::List_Simple()
// Parameters:
// - E
// - N
// - S
// Return:     
////////////////////////////////////////////////////////////////////////

List_Simple::List_Simple(int E, string N, nodo* S)
{
   Edad=E;
   Nombre = N;
   siguiente = S;

}

////////////////////////////////////////////////////////////////////////
// Name:       List_Simple::~List_Simple()
// Purpose:    Implementation of List_Simple::~List_Simple()
// Return:     
////////////////////////////////////////////////////////////////////////

List_Simple::~List_Simple()
{
   // TODO : implement
}