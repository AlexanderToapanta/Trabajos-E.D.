#include<iostream>
#include"I_Racional.h"
using namespace std;

int Suma_int(Radical ra1, Radical r2){
    int a=ra1.getNumerador(),b=ra1.getDenominador() ,c=r2.getNumerador() ,d=r2.getDenominador();
    int numerador, denominador;

    if (b==d){
        numerador = a+c;
        denominador=d;
    } else{
        numerador=  a * d + c * b;
        denominador = b*d;
         
    }
    
     cout << "Numerador: " << numerador << ", Denominador: " << denominador << endl;

        return numerador - denominador;

}
