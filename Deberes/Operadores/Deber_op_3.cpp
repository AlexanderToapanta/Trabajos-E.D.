/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Operador que utliza el "-", para
 * calcular la diferencia entre las horas y los minutos que se
 * asigne en el codigo.
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 19/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include<iostream>
using namespace std;

class Calcular_tiempo{
private:
    int horas, minutos;
public:
    Calcular_tiempo():horas(0),minutos(0){}
    Calcular_tiempo(int h, int m): horas(h), minutos(m){}

    Calcular_tiempo operator-(const Calcular_tiempo &t){
        int totalMin1= horas*60+minutos;
        int totlaMin2= t.horas*60+t.minutos;
        int diffMin = totalMin1 - totlaMin2;

        return Calcular_tiempo(diffMin/60,diffMin %60);
    }
    void imprimir(){
        cout<<"Tiempo:"<<horas<<" horas y "<<minutos<<" minutos"<<endl;
    }
};

int main(){
    Calcular_tiempo t1(3,45),t2(1,30);
    Calcular_tiempo t3 = t1 -t2;
    t3.imprimir();
    return 0;
}