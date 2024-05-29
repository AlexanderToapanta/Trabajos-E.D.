/***********************************************************************
 * Module:  Orde_Al.h
 * Author:  Usuario
 * Modified: martes, 28 de mayo de 2024 17:48:49
 * Purpose: Declaration of the class Orde_Al
 ***********************************************************************/

#if !defined(__Orden_Al_Orde_Al_h)
#define __Orden_Al_Orde_Al_h
#include<string>
#include"Orde_Al.h"
using namespace std;
class Orde_Al
{
public:
   int getCantidad(void);
   void setCantidad(int newCantidad);
   string* getPalabras(void);
   void setPalabras(string* newPalabras);
   Orde_Al(string* Palabras, int Cantidad);
   ~Orde_Al();
   void Separar_Espacio(string*& Palabras, int Cantidad);
   void Ingreso_Palabras(string* Palabras, int Cantidad);
   void Ordenar(string* Palabras, int Cantidad);

protected:
private:
   int Cantidad;
   string* Palabras;


};

#endif