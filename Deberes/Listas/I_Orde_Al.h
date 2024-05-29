/***********************************************************************
 * Module:  I_Orde_Al.h
 * Author:  Usuario
 * Modified: martes, 28 de mayo de 2024 18:09:14
 * Purpose: Declaration of the class I_Orde_Al
 ***********************************************************************/

#if !defined(__Orden_Al_I_Orde_Al_h)
#define __Orden_Al_I_Orde_Al_h

#include"Orde_Al.cpp"
class I_Orde_Al
{
public:
   virtual void Separar_Espacio(string*& Palabras, int Cantidad)=0;
   virtual void Ingreso_Palabras(string* Palabras, int Cantidad)=0;
   virtual void Ordenar(string* Palabras, int Cantidad)=0;

protected:
private:

};

#endif