#include<iostream>
#include"I_Fracc.h"
using namespace std;

int a, b;
void Frac::in(){
    cout<<"Ingrese el numerador: ";
    cin>>a;
    
    cout<<"Ingrese el denominador: ";
    cin>>b;
}

Frac Frac::operator*(const Frac &obj) {
    Frac temporal;
    temporal.a = a *obj.a;
    temporal.b = b*obj.b;
    return temporal;
}

void Frac::out()  {
    cout<<"La multiplica#cion de la fracciones: "<<a<<"/"<<b<<endl;

}