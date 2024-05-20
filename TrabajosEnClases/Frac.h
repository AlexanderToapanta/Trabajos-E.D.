/***********************************************************************
 * Module:  Frac.h
 * Author:  Usuario
 * Modified: s�bado, 18 de mayo de 2024 22:30:01
 * Purpose: Declaration of the class Frac
 ***********************************************************************/

#if !defined(__Fraccion_Frac_h)
#define __Fraccion_Frac_h

class Frac
{
public:
   int getNumerador(void);
   void setNumerador(int newNumerador);
   int getDenominador(void);
   void setDenominador(int newDenominador);
   Frac(int num, int dem);
   ~Frac();
   Frac();
    void in();
    void out() ;
    Frac operator*(const Frac &obj) ;
protected:
private:
   int numerador;
   int denominador;


};

#endif