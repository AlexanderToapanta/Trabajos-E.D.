/***********************************************************************
 * Module:  List_Num.h
 * Author:  Usuario
 * Modified: martes, 28 de mayo de 2024 16:51:42
 * Purpose: Declaration of the class List_Num
 ***********************************************************************/

#if !defined(__List_Num_List_Num_h)
#define __List_Num_List_Num_h

class List_Num
{
public:
   int* getNumeros(void);
   void setNumeros(int* newNumeros);
   int getCantidad(void);
   void setCantidad(int newCantidad);
   List_Num(int* Num, int Can);
   ~List_Num();
   void Ingreso(int*& Numeros, int& Cantidad);
   void Invertir(int* Numeros, int Cantidad);

protected:
private:
   int* Numeros;
   int Cantidad;


};

#endif