#include <iostream> 
#include "I_Caja.h"
using namespace std;

double Caja::volumen() const {
        return ancho*altura*profundidad;
    }

    bool Caja::operator>(const Caja &c) const {
   return this->volumen() > c.volumen();
}

    void Caja::imprimir(){
        cout<<"Caja: "<<ancho<<" cm "<<altura<<" cm "<<profundidad<<" cm"<<endl;

    }