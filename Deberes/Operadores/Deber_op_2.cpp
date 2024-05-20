/***********************************************************************
 * Universidad de las Fuerzas Armadas ESPE
 * Descipcion del problema: Operador que utliza el "--", para
 * realizar un contador de forma descendente.
 * Autor:  Alexander Toapanta
 * Fecha de creacion: 19/05/2024
 * Fecha de modificacion: 
 ***********************************************************************/
#include <iostream>
using namespace std;

class Contador{
private:
int count;
public:
    Contador():count(20){}

    Contador& operator--(int){
        --count;
        return *this;
    }

    void imprimir(){
        cout<<"Contador: "<<count<<endl;

    }
};

int main(){
    Contador c;
    c--;
    c.imprimir();
    c--;
    c.imprimir();
    return 0;
}