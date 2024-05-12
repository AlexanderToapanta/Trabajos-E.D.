/***********************************************************************
 * Module:  Radical.h
 * Author:  Alexander Toapanta
 * Modified: mi�rcoles, 8 de mayo de 2024 15:54:17
 * Purpose: Declaration of the class Radical
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Radical_h)
#define __Class_Diagram_1_Radical_h

class Radical
{
public:
   int getNumerador(void);
   void setNumerador(int newNumerador);
   int getDenominador(void);
   void setDenominador(int newDenominador);
   Radical(int num, int den);
   Radical();

protected:
private:
   int numerador;
   int denominador;


};

#endif