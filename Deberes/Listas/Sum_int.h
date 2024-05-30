#if !defined(__Sum_int_Sum_int_h)
#define __Sum_int_Sum_int_h

class Sum_int
{
public:
   int* getNumeros(void);
   void setNumeros(int* newNumeros);
   int getCantidad(void);
   void setCantidad(int newCantidad);
   int getSum(void);
   void setSum(int newSum);
   Sum_int(int* Num, int Can,int sum);
   ~Sum_int();
   void Ingreso(int*& Numeros, int& Cantidad);
   int Suma(int* Numeros, int Cantidad,int& sum);

protected:
private:
   int* Numeros;
   int Cantidad;
   int Sum;


};

#endif