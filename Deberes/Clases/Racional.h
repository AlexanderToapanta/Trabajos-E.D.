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
    int Suma_int(Radical ra1, Radical r2);
    void Suma_void(Radical ra1, Radical r2);
    float Suma_irra(Radical ra1, Radical r2);
Radical Suam_ra(Radical ra1, Radical r2);
protected:
private:
   int numerador;
   int denominador;


};

#endif