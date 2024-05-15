#include <iostream>
#include <conio.h>
#include <functional>
#include <cmath> 
using namespace std;

template<class T>
T Calcular_aceleracion(T a,T b,T c,function<T(T,T,T)>ace){return ace(a,b,c);}

int main(){
float a=10,b=30,c=5.5,aceleracion;

cout<<"Se calculara la aceleracion de un coche con los siguientes datos:"<<endl;
cout<<"La velocidad inicial es de: "<<a<<" m/s, la velocidad final es de: "
<<b<<" m/s, el tiempo trasncurrido fue de "<<c<<"segundos."<<endl;
aceleracion= Calcular_aceleracion<float>(a,b,c,[](float a, float b, float c){return (b-a)/c;});
if(aceleracion>0){
cout<<"El coche aumento su velocidad con una aceleracion de: "<< aceleracion<<" m/s^2."<<endl;
} else if(aceleracion<0){
cout<<"El coche disminuyo su velocidad con una aceleracion de: "<<aceleracion<< " m/s^2."<<endl;
}
else{
cout<<"La aceleracion del coche es 0, por lo tanto no hubo cambio en su velocidad."<<endl;
}
    getch();
}