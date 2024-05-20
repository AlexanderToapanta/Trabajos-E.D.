/***********************************************************************
 * Module:  Coordenas.cpp
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:42:59
 * Purpose: Implementation of the class Coordenas
 ***********************************************************************/

#include "Coordenas.h"
#include <iostream> 
using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Coordenas::getX()
// Purpose:    Implementation of Coordenas::getX()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Coordenas::getX(void)
{
   return x;
}

////////////////////////////////////////////////////////////////////////
// Name:       Coordenas::setX(int newX)
// Purpose:    Implementation of Coordenas::setX()
// Parameters:
// - newX
// Return:     void
////////////////////////////////////////////////////////////////////////

void Coordenas::setX(int newX)
{
   x = newX;
}

////////////////////////////////////////////////////////////////////////
// Name:       Coordenas::getY()
// Purpose:    Implementation of Coordenas::getY()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Coordenas::getY(void)
{
   return y;
}

////////////////////////////////////////////////////////////////////////
// Name:       Coordenas::setY(int newY)
// Purpose:    Implementation of Coordenas::setY()
// Parameters:
// - newY
// Return:     void
////////////////////////////////////////////////////////////////////////

void Coordenas::setY(int newY)
{
   y = newY;
}

////////////////////////////////////////////////////////////////////////
// Name:       Coordenas::Coordenas(int x, int y)
// Purpose:    Implementation of Coordenas::Coordenas()
// Parameters:
// - x
// - y
// Return:     
////////////////////////////////////////////////////////////////////////

Coordenas::Coordenas(int x, int y)
{
   this->x = x; 
   this->y = y;
}

////////////////////////////////////////////////////////////////////////
// Name:       Coordenas::~Coordenas()
// Purpose:    Implementation of Coordenas::~Coordenas()
// Return:     
////////////////////////////////////////////////////////////////////////

Coordenas::~Coordenas()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Coordenas::Coordenas()
// Purpose:    Implementation of Coordenas::Coordenas()
// Return:     
////////////////////////////////////////////////////////////////////////

Coordenas::Coordenas()
{
   x=0;
   y=0;
}
void Coordenas::imprimir()
{
   cout << "Coordenas: (" << x << ", " << y << ")" << endl;
}

bool Coordenas::operator==(const Coordenas &obj) const {
    return (x == obj.x && y == obj.y);
}