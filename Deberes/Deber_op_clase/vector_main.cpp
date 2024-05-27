#include<iostream>
#include"Vector.cpp"
using namespace std;

int main(){
Vector v1,v2,p_cruz;
cout<<"Ingrese el primer vector:"<<endl;
v1.in();
cout<<"Ingrese el segundo vector:"<<endl;
v2.in();
p_cruz = v1%v2;
p_cruz.imprimir();
return 0;

}