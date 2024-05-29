/***********************************************************************
 * Module:  Exponente_M.h
 * Author:  Usuario
 * Modified: martes, 28 de mayo de 2024 15:18:40
 * Purpose: Declaration of the class Exponente_M
 ***********************************************************************/

#if !defined(__Exponente_M_Exponente_M_h)
#define __Exponente_M_Exponente_M_h


class Exponente_M 
{
public:
   int** getMatriz(void);
   void setMatriz(int** newMatriz);
   int getColumnas(void);
   void setColumnas(int newColumnas);
   int getFilas(void);
   void setFilas(int newFilas);
   int getExponente(void);
   void setExponente(int newExponente);
   Exponente_M(int** matriz, int c, int f, int e);
   ~Exponente_M();
   Exponente_M();
   void Exponencial_M(int** matriz, int c, int f,int e);
  void GenerarMatriz(int** matriz, int c, int f);
  void LlenarMatriz(int** matriz, int c, int f);
   void imprimirMatriz(int** matriz, int c, int f);
   int potencia (int dato, int e);
   int**  multiplicarMatrices(int** matrizA, int** matrizB, int c, int f);

protected:
private:
   int** Matriz;
   int columnas;
   int filas;
   int exponente;


};

#endif