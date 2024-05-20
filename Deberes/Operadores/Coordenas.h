/***********************************************************************
 * Module:  Coordenas.h
 * Author:  Usuario
 * Modified: lunes, 20 de mayo de 2024 15:42:59
 * Purpose: Declaration of the class Coordenas
 ***********************************************************************/

#if !defined(__Coordenas_Coordenas_h)
#define __Coordenas_Coordenas_h

class Coordenas
{
public:
   int getX(void);
   void setX(int newX);
   int getY(void);
   void setY(int newY);
   Coordenas(int x, int y);
   ~Coordenas();
   Coordenas();
   void imprimir();
   bool operator==(const Coordenas &obj) const;

protected:
private:
   int x;
   int y;


};

#endif