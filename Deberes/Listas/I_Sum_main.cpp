#include<iostream>
#include"I_Sum_int.h"
using namespace std;

int main(){
    int* Numeros;
    int Cantidad, Sum;
    Ingreso(Numeros,Cantidad);
    cout<< "La suma de los numero es:"<< Suma(Numeros,Cantidad,Sum)<<endl;
    return 0;
}