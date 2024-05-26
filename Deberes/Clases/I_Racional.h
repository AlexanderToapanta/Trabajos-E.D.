/***********************************************************************
 * Module:  I_Racional.h
 * Author:  Usuario
 * Modified: viernes, 24 de mayo de 2024 10:41:43
 * Purpose: Declaration of the class I_Racional
 ***********************************************************************/


#if !defined(__I_racional_I_Racional_h)
#define __I_racional_I_Racional_h
#include"Racional.h"
class I_Racional {
public:
//funciones  del deber1
    virtual int Suma_int(Racional ra1, Racional r2) = 0;
    virtual void Suma_void(Racional ra1, Racional r2) = 0;
    virtual Racional Suam_ra(Racional& ra1, Racional& r2) = 0;
    virtual float Suma_irra(Racional ra1, Racional r2) = 0;
    //funciones del deber2
    virtual int Multiplicacion_int(Racional ra1, Racional r2)=0;
    virtual void Multiplicacion_void(Racional ra1, Racional r2)=0;
    virtual float Multiplicacion_irra(Racional ra1, Racional r2)=0;
virtual Racional Multiplicacion_ra(Racional& ra1,  Racional& r2)=0;
protected:
private:
};

#endif