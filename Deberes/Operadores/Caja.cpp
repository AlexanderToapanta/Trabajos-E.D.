/***********************************************************************
 * Module:  Caja.cpp
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:50:01
 * Purpose: Implementation of the class Caja
 ***********************************************************************/

#include "Caja.h"
#include <iostream> 
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Caja::getAltura()
// Purpose:    Implementation of Caja::getAltura()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Caja::getAltura(void)
{
   return altura;
}

////////////////////////////////////////////////////////////////////////
// Name:       Caja::setAltura(double newAltura)
// Purpose:    Implementation of Caja::setAltura()
// Parameters:
// - newAltura
// Return:     void
////////////////////////////////////////////////////////////////////////

void Caja::setAltura(double newAltura)
{
   altura = newAltura;
}

////////////////////////////////////////////////////////////////////////
// Name:       Caja::getAncho()
// Purpose:    Implementation of Caja::getAncho()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Caja::getAncho(void)
{
   return ancho;
}

////////////////////////////////////////////////////////////////////////
// Name:       Caja::setAncho(double newAncho)
// Purpose:    Implementation of Caja::setAncho()
// Parameters:
// - newAncho
// Return:     void
////////////////////////////////////////////////////////////////////////

void Caja::setAncho(double newAncho)
{
   ancho = newAncho;
}

////////////////////////////////////////////////////////////////////////
// Name:       Caja::getProfundidad()
// Purpose:    Implementation of Caja::getProfundidad()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Caja::getProfundidad(void)
{
   return profundidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Caja::setProfundidad(double newProfundidad)
// Purpose:    Implementation of Caja::setProfundidad()
// Parameters:
// - newProfundidad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Caja::setProfundidad(double newProfundidad)
{
   profundidad = newProfundidad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Caja::Caja(double a, double h, double p)
// Purpose:    Implementation of Caja::Caja()
// Parameters:
// - a
// - h
// - p
// Return:     
////////////////////////////////////////////////////////////////////////

Caja::Caja(double a, double h, double p)
{
   ancho=a;
   altura=h;
   profundidad=p;

}

////////////////////////////////////////////////////////////////////////
// Name:       Caja::~Caja()
// Purpose:    Implementation of Caja::~Caja()
// Return:     
////////////////////////////////////////////////////////////////////////

Caja::~Caja()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Caja::Caja()
// Purpose:    Implementation of Caja::Caja()
// Return:     
////////////////////////////////////////////////////////////////////////

Caja::Caja()
{
   ancho=0;
   altura=0;
   profundidad=0;

}


