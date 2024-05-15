#include <iostream>
#include <conio.h>
#include <functional>
#include <cmath> 
using namespace std;

template<class T>
T Cambio_metro(T a,T b,function<T(T,T)>cam){return cam(a,b);}

int main(){
float a= 345;

cout<<"Se va a cambiar la siguiente longitud que se encuentra en pies: "
<<a<<" a metros."<<endl;
cout<<"La conversion dio como resultado: "<<Cambio_metro<float>(a,0.3048,[](float a, float b){return a*b;})
<<endl;

    getch();
}