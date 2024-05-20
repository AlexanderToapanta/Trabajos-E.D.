/***********************************************************************
 * Module:  Caja.h
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:50:01
 * Purpose: Declaration of the class Caja
 ***********************************************************************/

#if !defined(__Caja_Caja_h)
#define __Caja_Caja_h

class Caja
{
public:
   double getAltura(void);
   void setAltura(double newAltura);
   double getAncho(void);
   void setAncho(double newAncho);
   double getProfundidad(void);
   void setProfundidad(double newProfundidad);
   Caja(double a, double h, double p);
   ~Caja();
   Caja();
   void imprimir();
   double volumen()const;
   bool operator>(const Caja &c)const ;

protected:
private:
   double altura;
   double ancho;
   double profundidad;


};

#endif