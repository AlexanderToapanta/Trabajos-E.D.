/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion lambda para calcular la densidad
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 14/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
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
<<a<<" kg y el siguiente volumen: "<<b<<"m^3"<<endl;
cout<< "La densidad del elemento es: "<<Densidad<float>(a,b,[](float a, float b){return a/b;})<<endl;



    getch();
}