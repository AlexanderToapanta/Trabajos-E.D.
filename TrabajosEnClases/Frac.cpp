/***********************************************************************
 * Module:  Frac.cpp
 * Author:  Usuario
 * Modified: s�bado, 18 de mayo de 2024 22:30:01
 * Purpose: Implementation of the class Frac
 ***********************************************************************/

#include "Frac.h"
#include <iostream> 
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Frac::getNumerador()
// Purpose:    Implementation of Frac::getNumerador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Frac::getNumerador(void)
{
   return numerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::setNumerador(int newNumerador)
// Purpose:    Implementation of Frac::setNumerador()
// Parameters:
// - newNumerador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Frac::setNumerador(int newNumerador)
{
   numerador = newNumerador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::getDenominador()
// Purpose:    Implementation of Frac::getDenominador()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Frac::getDenominador(void)
{
   return denominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::setDenominador(int newDenominador)
// Purpose:    Implementation of Frac::setDenominador()
// Parameters:
// - newDenominador
// Return:     void
////////////////////////////////////////////////////////////////////////

void Frac::setDenominador(int newDenominador)
{
   denominador = newDenominador;
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::Frac(int num, int dem)
// Purpose:    Implementation of Frac::Frac()
// Parameters:
// - num
// - dem
// Return:     
////////////////////////////////////////////////////////////////////////

Frac::Frac(int num, int dem)
{
   numerador=num;
   denominador=dem;

}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::~Frac()
// Purpose:    Implementation of Frac::~Frac()
// Return:     
////////////////////////////////////////////////////////////////////////

Frac::~Frac()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Frac::Frac()
// Purpose:    Implementation of Frac::Frac()
// Return:     
////////////////////////////////////////////////////////////////////////

Frac::Frac()
{
   numerador=0;
   denominador=0;
}

void Frac::in() {
    cout << "Ingrese el numerador: ";
    cin >> numerador;
    cout << "Ingrese el denominador: ";
    cin >> denominador;
}

Frac Frac::operator*(const Frac &obj)  {
    return Frac(numerador * obj.numerador, denominador * obj.denominador);
}

void Frac::out()  {
    cout << numerador << "/" << denominador << endl;
}