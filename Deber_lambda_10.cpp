/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion para calcular a que precio se deberia vender un producto, para ganar
 * el porcentaje que elija el vendedor
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 15/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <functional>
#include <cmath> 
using namespace std;
template<class T>
T Calcula_porcentaje(T a,T b,T c, function<T(T,T,T)>cal){return cal(a,b,c);}

template<class T>
T Calcula_ganacia(T b,T c, function<T(T,T)>gan){return gan(b,c);}

int main(){
float a=35.5,b=20,c=0;

cout<<Calcula_porcentaje<float>(a,b,c,[](float a, float b,float c){return c=(b/100)*a;})
<<" el 20% del coste del producto"<<endl;
cout<<Calcula_ganacia<float>(b,c,[](float b, float c){return c+a;})<<" el coste a vender par representar el 20% de ganacia"
<<endl;

    getch();
}