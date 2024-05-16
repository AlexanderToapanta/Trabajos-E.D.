/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion para transformar de pascales a atmosferas  
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 15/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <functional>
using namespace std;

template<class T>
T Cambiar_atmosfera(T a,T b, function<T(T,T)>cam){return cam(a,b);}

int main(){
    float a=3005;
    cout<<Cambiar_atmosfera<float>(a,101300,[](float a,float b){return a/101300;})
    <<" atmosferas"<<endl;
}