#include <iostream>
#include <conio.h>
#include <functional>
#include <cmath> 
using namespace std;

template<class T>
T Cambio_temperatura(T a, T b,function<T(T,T)>oper){return oper(a,b);}

int main(){
float a= 35.56,b=273;

cout<<"Se desea convertir la siguiente temperatura de grados C° a grados K° "
<< a <<endl;
cout<<"De la convsersion se obtuvo la siguiente temperatura en K° "
<< Cambio_temperatura<float>(a,b,[](float a, float b){return a+b;})<<endl;
    
    getch();
}