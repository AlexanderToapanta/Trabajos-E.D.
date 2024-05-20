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
#include "tiempo_metodos.cpp"


int main(){
    Tiempo t1(3,45),t2(1,30);
    Tiempo t3 = t1 -t2;
    t3.Imprimir();
    return 0;
}