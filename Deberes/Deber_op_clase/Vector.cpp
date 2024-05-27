/***********************************************************************
 * Module:  Vector.cpp
 * Author:  Usuario
 * Modified: domingo, 19 de mayo de 2024 20:55:35
 * Purpose: Implementation of the class Vector
 ***********************************************************************/

#include "Vector.h"
#include <iostream> 
using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Vector::getPunto_x()
// Purpose:    Implementation of Vector::getPunto_x()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Vector::getPunto_x(void)
{
   return Punto_x;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::setPunto_x(int newPunto_x)
// Purpose:    Implementation of Vector::setPunto_x()
// Parameters:
// - newPunto_x
// Return:     void
////////////////////////////////////////////////////////////////////////

void Vector::setPunto_x(int newPunto_x)
{
   Punto_x = newPunto_x;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::getPunt_y()
// Purpose:    Implementation of Vector::getPunt_y()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Vector::getPunt_y(void)
{
   return Punt_y;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::setPunt_y(int newPunt_y)
// Purpose:    Implementation of Vector::setPunt_y()
// Parameters:
// - newPunt_y
// Return:     void
////////////////////////////////////////////////////////////////////////

void Vector::setPunt_y(int newPunt_y)
{
   Punt_y = newPunt_y;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::Vector(int x, int y)
// Purpose:    Implementation of Vector::Vector()
// Parameters:
// - x
// - y
// Return:     
////////////////////////////////////////////////////////////////////////

Vector::Vector(int x, int y)
{
   Punto_x=x;
   Punt_y=y;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::~Vector()
// Purpose:    Implementation of Vector::~Vector()
// Return:     
////////////////////////////////////////////////////////////////////////

Vector::~Vector()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Vector::Vector()
// Purpose:    Implementation of Vector::Vector()
// Return:     
////////////////////////////////////////////////////////////////////////

Vector::Vector()
{
   Punto_x=0;
   Punt_y=0;

}
void Vector::in() {
    cout << "Ingrese el punto en x: ";
    cin >> Punto_x;
    cout << "Ingrese el punto en y: ";
    cin >> Punt_y;
}
void Vector::imprimir()  {
        cout << "Producto cruz:"<<"(" << Punto_x<<"i"<< "," <<"-"<< Punt_y <<"j"<< ")" << endl;
    }

Vector Vector::operator%(const Vector &obj) {
        return Vector (Punto_x * obj.Punt_y ,Punt_y * obj.Punto_x);
    }
