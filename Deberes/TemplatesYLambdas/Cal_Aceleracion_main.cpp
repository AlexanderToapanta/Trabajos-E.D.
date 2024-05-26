#include <iostream>
#include "Cal_Aceleracion.cpp"
using namespace std;

int main() {
    float V,t,V_i;

    Ingreso( V,t,V_i);

    auto VeloFunc = [](float V,float t,float V_i) { return (V_i-V)/t; };
    auto printFunc = [](float a) { cout << "La aceleracion de la distancia recorrida fue de: " << a << endl; };

    float a = Cal_aceleracion(V,t,V_i,function<float(float,float,float)> (VeloFunc));
    Im_Resultado(a,function<void(float)> (printFunc));

    return 0;
}