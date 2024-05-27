#include <iostream>
#include"Factorial.cpp"
using namespace std;
int main() {
    int n;

    Ingresar(n);

    auto FactoFunc = [](int n) { return n; };
    auto printFunc = [](int fac) { cout << "El factorial es : " << fac << endl; };

    int fac = Proceso_Factorial(n,function<int(int)>(FactoFunc));
    Imprimir(fac,function<void(int)> (printFunc));

    return 0;
}