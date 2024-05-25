/***********************************************************************
 * Module:  I_Racional.h
 * Author:  Usuario
 * Modified: viernes, 24 de mayo de 2024 10:41:43
 * Purpose: Declaration of the class I_Racional
 ***********************************************************************/


#if !defined(__I_racional_I_Racional_h)
#define __I_racional_I_Racional_h
#include"Racional.h"
class I_Racional
{
public:
   virtual int Suma_int(Radical ra1, Radical r2)=0;
   virtual void Suma_void(Radical ra1, Radical r2)=0;
   virtual Radical Suam_ra(Radical ra1, Radical r2)=0;
   virtual float Suma_irra(Radical ra1, Radical r2)=0;

protected:
private:

};

#endif