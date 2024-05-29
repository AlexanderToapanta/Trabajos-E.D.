/***********************************************************************
 * Module:  I_List_Num.h
 * Author:  Usuario
 * Modified: martes, 28 de mayo de 2024 17:15:41
 * Purpose: Declaration of the class I_List_Num
 ***********************************************************************/

#if !defined(__List_Num_I_List_Num_h)
#define __List_Num_I_List_Num_h
#include"List_Num.cpp"

class I_List_Num
{
public:
   virtual void Ingreso(int*& Numeros, int& Cantidad)=0;
   virtual void Invertir(int* Numeros, int Cantidad)=0;

protected:
private:

};

#endif