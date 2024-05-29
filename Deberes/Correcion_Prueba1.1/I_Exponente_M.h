/***********************************************************************
 * Module:  I_Exponente_M.h
 * Author:  Usuario
 * Modified: martes, 28 de mayo de 2024 15:20:18
 * Purpose: Declaration of the class I_Exponente_M
 ***********************************************************************/

#if !defined(__Exponente_M_I_Exponente_M_h)
#define __Exponente_M_I_Exponente_M_h
#include "Exponente_M.h"
class I_Exponente_M
{
public:
   virtual void Exponencial_M(int** matriz, int c, int f,int e)=0;
  virtual void GenerarMatriz(int** matriz, int c, int f)=0;
  virtual void LlenarMatriz(int** matriz, int c, int f)=0;
   virtual void imprimirMatriz(int** matriz, int c, int f)=0;
   virtual int potencia (int dato, int exponente)=0;
   virtual  int**  multiplicarMatrices(int** matrizA, int** matrizB, int c, int f);
protected:
private:

};

#endif