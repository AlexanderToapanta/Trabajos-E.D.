/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Operador que utliza el "==", para
 * comparar un par de numeros o puntos y ver si su coordenas son iguales.
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 19/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
#include"Coordenas.cpp"
using namespace std;


int main(){
    Coordenas c1(1,2), c2(5,6), c3(5,6);
    cout<<"c1 y c2 son "<<(c1==c2 ? "iguales":"diferentes")<<endl;
    cout<<"c2 y c3 son "<<(c2==c3 ? "iguales":"diferentes")<<endl;
    cout<<"c1 y c3 son "<<(c1==c3 ? "iguales":"diferentes")<<endl;
    return 0;
}