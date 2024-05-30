#if !defined(__Sum_int_I_Sum_int_h)
#define __Sum_int_I_Sum_int_h
#include"Sum_int.cpp"

class I_Sum_int
{
public:
   virtual void  Ingreso(int*& Numeros, int& Cantidad)=0;
   virtual int Suma(int* Numeros, int Cantidad,int& sum)=0;

protected:
private:

};

#endif