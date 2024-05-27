/***********************************************************************
 * Module:  Vector.h
 * Author:  Usuario
 * Modified: domingo, 19 de mayo de 2024 20:55:35
 * Purpose: Declaration of the class Vector
 ***********************************************************************/

#if !defined(__Vectores_2D_Vector_h)
#define __Vectores_2D_Vector_h

class Vector
{
public:
   int getPunto_x(void);
   void setPunto_x(int newPunto_x);
   int getPunt_y(void);
   void setPunt_y(int newPunt_y);
   Vector(int x, int y);
   ~Vector();
   Vector();
   void in();
      void imprimir();
      void imprimir_d(int det);
      Vector operator%(const Vector &obj);
    

protected:
private:
   int Punto_x;
   int Punt_y;


};

#endif