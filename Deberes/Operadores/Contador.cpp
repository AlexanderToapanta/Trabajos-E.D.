/***********************************************************************
 * Module:  Contador.cpp
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:55:11
 * Purpose: Implementation of the class Contador
 ***********************************************************************/

#include "Contador.h"
#include <iostream> 
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Contador::getCount()
// Purpose:    Implementation of Contador::getCount()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Contador::getCount(void)
{
   return count;
}

////////////////////////////////////////////////////////////////////////
// Name:       Contador::setCount(int newCount)
// Purpose:    Implementation of Contador::setCount()
// Parameters:
// - newCount
// Return:     void
////////////////////////////////////////////////////////////////////////

void Contador::setCount(int newCount)
{
   count = newCount;
}

////////////////////////////////////////////////////////////////////////
// Name:       Contador::Contador(int count)
// Purpose:    Implementation of Contador::Contador()
// Parameters:
// - count
// Return:     
////////////////////////////////////////////////////////////////////////

Contador::Contador(int count)
{
   this->count = count;
}

////////////////////////////////////////////////////////////////////////
// Name:       Contador::~Contador()
// Purpose:    Implementation of Contador::~Contador()
// Return:     
////////////////////////////////////////////////////////////////////////

Contador::~Contador()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Contador::Contador()
// Purpose:    Implementation of Contador::Contador()
// Return:     
////////////////////////////////////////////////////////////////////////

Contador::Contador()
{
   count=20;
}
