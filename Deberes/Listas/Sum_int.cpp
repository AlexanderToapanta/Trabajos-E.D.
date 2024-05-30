#include "Sum_int.h"

using namespace std;
int Sum_int::getCantidad(void)
{
   return Cantidad;
}
void Sum_int::setCantidad(int newCantidad)
{
   Cantidad = newCantidad;
}
int Sum_int::getSum(void)
{
   return Sum;
}
void Sum_int::setSum(int newSum)
{
   Sum = newSum;
}
int* Sum_int::getNumeros(void)
{
   return Numeros;
}
void Sum_int::setNumeros(int* newNumeros)
{
   Numeros = newNumeros;
}

Sum_int::Sum_int(int* Num, int Can,int sum)
{
   Numeros= Num;
  Cantidad = Can;
  Sum= sum;
}
Sum_int::~Sum_int()
{
   // TODO : implement
}
void Ingreso(int*& Numeros, int& Cantidad){
    cout<<"Ingrese los numeros (ingrese 0 para finalizar el ingreso)"<<endl;
    int num, capacidad=10;
    Cantidad=0;
    Numeros = new int[capacidad];
    while (cin >> num && num != 0) {
        Numeros[Cantidad++] = num;
        if (Cantidad == capacidad) {
            capacidad *= 2;
            int* temp = new int [capacidad];
            for (size_t i = 0; i < Cantidad; ++i) {
                temp[i] =Numeros[i];
            }
            delete[] Numeros;
            Numeros = temp;
        }
    }
}
int Suma(int* Numeros, int Cantidad,int& sum){

for (int i = 0; i < Cantidad; ++i) {
        sum += Numeros[i]; 
    }

    return sum;
}