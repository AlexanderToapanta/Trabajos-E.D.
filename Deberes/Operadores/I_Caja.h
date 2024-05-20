/***********************************************************************
 * Module:  I_Caja.h
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:52:21
 * Purpose: Declaration of the class I_Caja
 ***********************************************************************/

#if !defined(__Caja_I_Caja_h)
#define __Caja_I_Caja_h
#include "Caja.cpp"
class I_Caja
{
public:
   virtual void imprrimir()=0;
   virtual double volumen() =0;
   virtual bool operator>(const Caja &c) =0;

protected:
private:

};

#endif