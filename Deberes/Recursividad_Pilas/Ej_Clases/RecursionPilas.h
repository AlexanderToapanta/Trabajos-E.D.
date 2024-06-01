
#include<iostream>
using namespace std;
template<typename T>

class RecursionPilas{
    public:
    void ordenadoInsertar(stack<T>&stack,T);
    void clasificarPila(stack<T>&stack);
     void imprimirPila(stack<T>stack);
    void IngresarNumeros(T*&nums,size_t& cantidad);
};
