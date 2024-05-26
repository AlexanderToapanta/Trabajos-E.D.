
#include <iostream>
#include"Racional.cpp"
#include"racional_metodos.cpp"
using namespace std;

int main(){
    int sum;
    float div;
    Racional r1(2,4);
    Racional r2(1,5);
    Racional r3;
     cout<<"Suma de fracciones"<<endl;
    sum= Suma_int(r1,r2);
    r3= Suma_ra(r1,r2);
    div=Suma_irra(r1,r2);
    cout<<"Retorno entero:"<<sum<<endl;
   cout << "Retorno racional: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;
    cout<<"Retorno irracional :"<<div<<endl;
    cout<<endl;
    cout<<"Multiplicacion de fracciones"<<endl;
    
    sum= Multiplicacion_int(r1,r2);
    r3= Multiplicacion_ra(r1,r2);
    div=Multiplicacion_irra(r1,r2);
    cout<<"Retorno entero:"<<sum<<endl;
   cout << "Retorno racional: " << r3.getNumerador() << "/" << r3.getDenominador() << endl;
    cout<<"Retorno irracional :"<<div<<endl;
    
    return 0;
}