/***********************************************************************
 * Module:  List_Num.cpp
 * Author:  Usuario
 * Modified: martes, 28 de mayo de 2024 16:51:42
 * Purpose: Implementation of the class List_Num
 ***********************************************************************/

#include "List_Num.h"

////////////////////////////////////////////////////////////////////////
// Name:       List_Num::getNumeros()
// Purpose:    Implementation of List_Num::getNumeros()
// Return:     int*
////////////////////////////////////////////////////////////////////////

int* List_Num::getNumeros(void)
{
   return Numeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Num::setNumeros(int* newNumeros)
// Purpose:    Implementation of List_Num::setNumeros()
// Parameters:
// - newNumeros
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Num::setNumeros(int* newNumeros)
{
   Numeros = newNumeros;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Num::getCantidad()
// Purpose:    Implementation of List_Num::getCantidad()
// Return:     int
////////////////////////////////////////////////////////////////////////

int List_Num::getCantidad(void)
{
   return Cantidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Num::setCantidad(int newCantidad)
// Purpose:    Implementation of List_Num::setCantidad()
// Parameters:
// - newCantidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Num::setCantidad(int newCantidad)
{
   Cantidad = newCantidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Num::List_Num(int* Num, int Can)
// Purpose:    Implementation of List_Num::List_Num()
// Parameters:
// - Num
// - Can
// Return:     
////////////////////////////////////////////////////////////////////////

List_Num::List_Num(int* Num, int Can)
{
  Numeros = Num;
  Cantidad = Can;
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Num::~List_Num()
// Purpose:    Implementation of List_Num::~List_Num()
// Return:     
////////////////////////////////////////////////////////////////////////

List_Num::~List_Num()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Num::Ingreso(int* Numeros, int Cantidad)
// Purpose:    Implementation of List_Num::Ingreso()
// Parameters:
// - Numeros
// - Cantidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Num::Ingreso(int*& Numeros, int& Cantidad)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       List_Num::Invertir(int* Numeros, int Cantidad)
// Purpose:    Implementation of List_Num::Invertir()
// Parameters:
// - Numeros
// - Cantidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void List_Num::Invertir(int* Numeros, int Cantidad)
{
   // TODO : implement
}