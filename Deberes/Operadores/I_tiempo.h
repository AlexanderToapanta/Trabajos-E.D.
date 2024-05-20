/***********************************************************************
 * Module:  I_tiempo.h
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:44:55
 * Purpose: Declaration of the class I_tiempo
 ***********************************************************************/

#if !defined(__Tiempo_I_tiempo_h)
#define __Tiempo_I_tiempo_h

#include "Tiempo.cpp"

class I_tiempo
{
public:
   virtual Tiempo operator-(const Tiempo &t)=0;
   virtual void Imprimir()=0;
   

protected:
private:

};

#endif