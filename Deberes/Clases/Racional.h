/***********************************************************************
 * Module:  Radical.h
 * Author:  Alexander Toapanta
 * Modified: mi�rcoles, 8 de mayo de 2024 15:54:17
 * Purpose: Declaration of the class Radical
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Racional_h)
#define __Class_Diagram_1_Racional_h

class Racional
{
public:
   int getNumerador(void);
   void setNumerador(int newNumerador);
   int getDenominador(void);
   void setDenominador(int newDenominador);
    Racional(int num, int den); 
    Racional();
    //funciones  del deber1
    int Suma_int(Racional ra1, Racional r2);
    void Suma_void(Racional ra1, Racional r2);
    float Suma_irra(Racional ra1, Racional r2);
Racional Suam_ra(Racional& ra1,  Racional& r2);
//funciones del deber2
 int Multiplicacion_int(Racional ra1, Racional r2);
    void Multiplicacion_void(Racional ra1, Racional r2);
    float Multiplicacion_irra(Racional ra1, Racional r2);
Racional Multiplicacion_ra(Racional& ra1,  Racional& r2);
protected:
private:
   int numerador;
   int denominador;


};

#endif