#include <iostream>
#include <conio.h>
#include <functional>
#include <cmath> 
using namespace std;

template<class T>
T Densidad(T a,T b,function<T(T,T)>den){return den(a,b);}

int main(){
float a= 30, b= 15.5;

cout<<"Se desea calcular la densidad de un elemento, el cual tiene la siguiente masa: "
<<a<<" gr y el siguiente volumen: "<<b<<"m^3"<<endl;
cout<< "La densidad del elemento es: "<<Densidad<float>(a,b,[](float a, float b){return a/b;})<<endl;



    getch();
}