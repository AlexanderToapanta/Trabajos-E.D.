/***********************************************************************
 * Module:  Tiempo.h
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:44:55
 * Purpose: Declaration of the class Tiempo
 ***********************************************************************/

#if !defined(__Tiempo_Tiempo_h)
#define __Tiempo_Tiempo_h

class Tiempo
{
public:
   int getHora(void);
   void setHora(int newHora);
   int getMinutos(void);
   void setMinutos(int newMinutos);
   Tiempo(int h, int m);
   ~Tiempo();
   Tiempo();
   void Imprimir();
   Tiempo operator-(const Tiempo &t);

protected:
private:
   int hora;
   int minutos;


};

#endif