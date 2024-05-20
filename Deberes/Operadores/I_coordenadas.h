/***********************************************************************
 * Module:  I_coordenadas.h
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:42:59
 * Purpose: Declaration of the class I_coordenadas
 ***********************************************************************/

#if !defined(__Coordenas_I_coordenadas_h)
#define __Coordenas_I_coordenadas_h
#include "Coordenas.cpp"
class I_coordenadas
{
public:
   virtual void Imprimir()=0;
   virtual Coordenas operator==(const Coordenas &obj)=0;

protected:
private:

};

#endif