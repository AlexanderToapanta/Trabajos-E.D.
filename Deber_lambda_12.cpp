/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Funcion para conocer la velocidad final de un MRU 
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 15/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
#include <conio.h>
#include <functional>
using namespace std;

class MRUV
{
    private:
    float velocidad_0,tiempo,aceleracion;
    function<float(float,float,float)>calculo;
    public:
    MRUV(float i, float t,float a,function<float(float,float,float)>f )
    {
        velocidad_0=i;
        tiempo=t;
        aceleracion=a;
        calculo=f;
    }
    ~MRUV(){}
    float Calculo_velocidadF(){return calculo(velocidad_0,tiempo,aceleracion);}
};
int main(){
float a=34,b=25.5,c=12;
MRUV velocidadF(a,b,c,[](float a,float b,float c){return a+(b*c);});
cout<<"La velocidad final es: "<<velocidadF.Calculo_velocidadF()<<" m/s"<<endl;

    getch;
}