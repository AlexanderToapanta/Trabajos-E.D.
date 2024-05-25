
#include <iostream>
#include"Racional.cpp"
#include"racional_metodos.cpp"
using namespace std;

int main(){
    int sum;
    Radical r1(2,4);
    Radical r2(1,5);
    Radical  r3;
    sum= Suma_int(r1,r2);
    printf("%d",sum);
    return 0;
}