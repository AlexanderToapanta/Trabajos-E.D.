/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion lambda para ordenar numeros del 1 al 10, en dos arreglos, uno numero pares
 * y en el otro numeros impares; los impares son ordenando en orden descendente.
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 15/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <functional>
#include <array>
using namespace std;

template<typename T>
void comprobar_pares(T&n,array<T,10>&p,array<T,10>&i,T&pares_count,T&impares_count){
    if(n%2==0&&pares_count<p.size()){
        p[pares_count++]=n;
    } else{
        i[impares_count++]=n;
    }
}
int main(){
array<int, 10> numeros ={1,2,3,4,5,6,7,8,9,10};
array < int,10> pares;
array <int, 10 > impares;
int pares_count=0;
int impares_count=0;
for_each(numeros.begin(),numeros.end(),[&](int& num){comprobar_pares(num,pares,impares,pares_count,impares_count);});
cout<<"Numeros pares:"<<endl;
for (int j=0;j<pares_count;++j){
    cout<<pares[j]<<" ";
};
cout<<endl;
cout<<"Numeros impares:"<<endl;
for (int j=impares_count-1;j>=0;--j){
    cout<<impares[j]<<" ";
}  
    
    
    
    getch();
}