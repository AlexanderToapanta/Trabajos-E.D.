#include"MCD.cpp"
#include<iostream>
using namespace std;

int main(){

int n1, n2, resultado;
IngresarNumeros(n1,n2);

resultado = cal_MCD(n1,n2,function<int(int,int)>([](int n1, int n2) {return n1,n2;}));
cout<<"El maximo comun divisor (MCD) de " << n1 << " y " << n2 << " es: " << resultado << endl;


    return 0;
}