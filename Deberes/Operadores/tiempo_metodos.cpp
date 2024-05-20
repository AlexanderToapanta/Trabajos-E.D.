#include <iostream> 
#include"I_tiempo.h"
using namespace std;

Tiempo Tiempo:: operator-(const Tiempo &t){
        int totalMin1= hora*60+minutos;
        int totlaMin2= t.hora*60+t.minutos;
        int diffMin = totalMin1 - totlaMin2;

        return Tiempo(diffMin/60,diffMin %60);
    }
    void Tiempo:: Imprimir(){
        cout<<"Tiempo:"<<hora<<" horas y "<<minutos<<" minutos"<<endl;
    }