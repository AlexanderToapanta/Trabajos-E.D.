/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion lambda para calcular el volumen de un prisma triangular
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
T Volumen_prismaT(T a,T b,T c, function<T(T,T,T)>tr){return tr(a,b,c);}

int main(){
float a=10,b=7,c=20;
cout<<"Se calculara el volumen de un prisma triangular con las siguientes medidas:"<<endl;
cout<<"La base del triangulo es: "<<a<<" cm"<<"la altura del triangulo es: "
<<b<<" cm. La altura del prisma es: "<<c<<" cm."<<endl;
cout<<"El voumen calculado es: "<<Volumen_prismaT<float>(a,b,c,[](float a, float b, float c){return (a*b/2)*c;})
<<" cm^3"<<endl;

getch();

}