#include <iostream>
#include <conio.h>
#include <functional>
#include <cmath> 
using namespace std;

class MRU{
    private:
    float distancia,tiempo;
    function<float(float,float)> div;

public:
MRU(float x, float t, function<float(float,float)>f)
{
distancia=x;
tiempo=t;
div=f;
}
~MRU(){}

float Calculo_velocidad(){return div(distancia,tiempo);}

};

int main(){
    float a=300,b=11;
    MRU  velocidad(a,b,[](float a, float b){return a/b;});

    cout<<"Se busca calcular la velocidad de un coche que recorrio "
    << a << " metros, en "<< b <<" segundos"<<endl;
    cout<<"La velocidad del coche es: "<<velocidad.Calculo_velocidad()<<"m/s"<<endl;

    getch();


}