#include <iostream>
#include <conio.h>
#include <functional>
using namespace std;

int main(){
    float a = 45;
    auto Operacion = [](float a, float b,float c){return a*b/c;};
    cout<<"Se convirtio"<< "  "<<a <<"  "<<"de km/h a m/s"<<endl;
    cout<< "Se obtuvo como resultado:" << Operacion(a,1000,3600);
    getch();

}