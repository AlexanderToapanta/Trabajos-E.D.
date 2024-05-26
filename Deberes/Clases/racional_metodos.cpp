#include<iostream>
#include"I_Racional.h"
using namespace std;

//funciones  del deber1

int Suma_int(Racional ra1, Racional r2){
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
void Suma_void(Racional ra1,Racional r2){
    int a=ra1.getNumerador(),b=ra1.getDenominador() ,c=r2.getNumerador() ,d=r2.getDenominador();
    int numerador, denominador;

    if (b==d){
        numerador = a+c;
        denominador=d;
    } else{
        numerador=  a * d + c * b;
        denominador = b*d;
         
    }
    


}
Racional Suma_ra(Racional& ra1, Racional& r2) {
    int a = ra1.getNumerador(), b = ra1.getDenominador(), c = r2.getNumerador(), d = r2.getDenominador();
    int num, den;

    if (b == d) {
        num = a + c;
        den = b;
    } else {
        num = a * d + c * b;
        den = b * d;
    }

    return Racional(num, den);
}
float Suma_irra(Racional& ra1, Racional& r2) {
    int a = ra1.getNumerador(), b = ra1.getDenominador(), c = r2.getNumerador(), d = r2.getDenominador();
    float num, den;

    if (b == d) {
        num = (float)a + c;
        den = (float)b;
    } else {
        num = (float)a * d + c * b;
        den =(float) b * d;
    }

    return num/den;
}

//funciones del deber2

int Multiplicacion_int(Racional ra1, Racional r2){
    int a=ra1.getNumerador(),b=ra1.getDenominador() ,c=r2.getNumerador() ,d=r2.getDenominador();
    int numerador, denominador;

    numerador= a*c;
    denominador = b*d;
    
     cout << "Numerador: " << numerador << ", Denominador: " << denominador << endl;

        return numerador * denominador;

}
void Multiplicacion_void(Racional ra1,Racional r2){
    int a=ra1.getNumerador(),b=ra1.getDenominador() ,c=r2.getNumerador() ,d=r2.getDenominador();
    int numerador, denominador;
    numerador= a*c;
    denominador = b*d;
    
     cout << "Numerador: " << numerador << ", Denominador: " << denominador << endl;



}
Racional Multiplicacion_ra(Racional& ra1, Racional& r2) {
   int a=ra1.getNumerador(),b=ra1.getDenominador() ,c=r2.getNumerador() ,d=r2.getDenominador();
    int numerador, denominador;
    numerador= a*c;
    denominador = b*d;
    

    return Racional(numerador, denominador);
}
float Multiplicacion_irra(Racional& ra1, Racional& r2) {
    int a = ra1.getNumerador(), b = ra1.getDenominador(), c = r2.getNumerador(), d = r2.getDenominador();
    float num, den;

    num= (float)a*c;
    den = (float)b*d;

    return num/den;
}