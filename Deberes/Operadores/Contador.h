/***********************************************************************
 * Module:  Contador.h
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:55:11
 * Purpose: Declaration of the class Contador
 ***********************************************************************/

#if !defined(__Contador_Contador_h)
#define __Contador_Contador_h

class Contador
{
public:
   int getCount(void);
   void setCount(int newCount);
   Contador(int count);
   ~Contador();
   Contador();
   void imprimir();
   void operator--(int);


protected:
private:
   int count;


};

#endif