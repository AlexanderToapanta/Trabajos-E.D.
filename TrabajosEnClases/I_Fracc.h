/***********************************************************************
 * Module:  I_Fracc.h
 * Author:  Usuario
 * Modified: s�bado, 18 de mayo de 2024 22:29:15
 * Purpose: Declaration of the class I_Fracc
 ***********************************************************************/

#if !defined(__Fraccion_I_Fracc_h)
#define __Fraccion_I_Fracc_h

#include"Frac.cpp"
class I_Fracc
{
public:
   virtual void in()  = 0;
   virtual void out()  = 0;
   virtual Frac operator*(const Frac &obj) = 0;

protected:
private:

};

#endif