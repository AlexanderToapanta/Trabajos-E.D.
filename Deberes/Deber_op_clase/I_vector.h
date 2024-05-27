/***********************************************************************
 * Module:  I_vector.h
 * Author:  Usuario
 * Modified: domingo, 19 de mayo de 2024 20:55:35
 * Purpose: Declaration of the class I_vector
 ***********************************************************************/

#if !defined(__Vectores_2D_I_vector_h)
#define __Vectores_2D_I_vector_h

#include "Vector.h"

class I_vector
{
public:
    virtual Vector operator%(const Vector &obj) = 0;
   virtual void imprimir() = 0;
   virtual void in()=0;

protected:
private:

};

#endif