/***********************************************************************
 * Module:  Orde_Al.cpp
 * Author:  Usuario
 * Modified: martes, 28 de mayo de 2024 17:48:49
 * Purpose: Implementation of the class Orde_Al
 ***********************************************************************/

#include "Orde_Al.h"
#include<string>
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::getCantidad()
// Purpose:    Implementation of Orde_Al::getCantidad()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Orde_Al::getCantidad(void)
{
   return Cantidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::setCantidad(int newCantidad)
// Purpose:    Implementation of Orde_Al::setCantidad()
// Parameters:
// - newCantidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Orde_Al::setCantidad(int newCantidad)
{
   Cantidad = newCantidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::getPalabras()
// Purpose:    Implementation of Orde_Al::getPalabras()
// Return:     string*
////////////////////////////////////////////////////////////////////////

string* Orde_Al::getPalabras(void)
{
   return Palabras;
}

////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::setPalabras(string* newPalabras)
// Purpose:    Implementation of Orde_Al::setPalabras()
// Parameters:
// - newPalabras
// Return:     void
////////////////////////////////////////////////////////////////////////

void Orde_Al::setPalabras(string* newPalabras)
{
   Palabras = newPalabras;
}

////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::Orde_Al(string* Palabras, int Cantidad)
// Purpose:    Implementation of Orde_Al::Orde_Al()
// Parameters:
// - Palabras
// - Cantidad
// Return:     
////////////////////////////////////////////////////////////////////////

Orde_Al::Orde_Al(string* Palabras, int Cantidad)

{
   Palabras=Palabras;
   Cantidad = Cantidad;
}


////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::~Orde_Al()
// Purpose:    Implementation of Orde_Al::~Orde_Al()
// Return:     
////////////////////////////////////////////////////////////////////////

Orde_Al::~Orde_Al()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::Separar_Espacio(string* Palabras, int Cantidad)
// Purpose:    Implementation of Orde_Al::Separar_Espacio()
// Parameters:
// - Palabras
// - Cantidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Orde_Al::Separar_Espacio(string*& Palabras, int Cantidad)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::Ingreso_Palabras(string* Palabras, int Cantidad)
// Purpose:    Implementation of Orde_Al::Ingreso_Palabras()
// Parameters:
// - Palabras
// - Cantidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Orde_Al::Ingreso_Palabras(string* Palabras, int Cantidad)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Orde_Al::Ordenar(string* Palabras, int Cantidad)
// Purpose:    Implementation of Orde_Al::Ordenar()
// Parameters:
// - Palabras
// - Cantidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Orde_Al::Ordenar(string* Palabras, int Cantidad)
{
  
}