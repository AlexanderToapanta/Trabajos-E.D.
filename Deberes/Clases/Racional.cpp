/***********************************************************************
 * Module:  Radical.cpp
 * Author: Alexander Toapanta
 * Modified: mi�rcoles, 8 de mayo de 2024 15:54:17
 * Purpose: Implementation of the class Radical
 ***********************************************************************/

#include "Racional.h"

////////////////////////////////////////////////////////////////////////
// Name:       Radical::getNumerador()
// Purpose:    Implementation of Radical::getNumerador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Racional::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Radical::setNumerador(int newNumerador)
// Purpose:    Implementation of Radical::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Racional::setNumerador(int newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Radical::getDenominador()
// Purpose:    Implementation of Radical::getDenominador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Racional::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Radical::setDenominador(int newDenominador)
// Purpose:    Implementation of Radical::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Racional::setDenominador(int newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Radical::Radical(int num, int den)
// Purpose:    Implementation of Radical::Radical()
// Parameters:
// - num
// - den
// Return:     
////////////////////////////////////////////////////////////////////////

Racional::Racional(int num, int den)
{
   numerador = num;
   denominador = den;
}

////////////////////////////////////////////////////////////////////////
// Name:       Radical::Radical()
// Purpose:    Implementation of Radical::Radical()
// Return:     
////////////////////////////////////////////////////////////////////////

Racional::Racional()
{
   numerador=0;
   denominador=1;
}