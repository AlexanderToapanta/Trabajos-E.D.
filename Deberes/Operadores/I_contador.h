/***********************************************************************
 * Module:  I_contador.h
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:57:26
 * Purpose: Declaration of the class I_contador
 ***********************************************************************/

#if !defined(__Contador_I_contador_h)
#define __Contador_I_contador_h
#include "Contador.cpp"
class I_contador
{
public:
   virtual void Imprimir()=0;
   virtual Contador operator--(int)=0;

protected:
private:

};

#endif