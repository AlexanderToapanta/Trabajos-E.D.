#include<iostream>
#include"Cal_Velocidad.cpp"
using namespace std;

int main() {
    float x,t;

    Ingreso( x,t);

    auto VeloFunc = [](float x,float t) { return x/t; };
    auto printFunc = [](float v) { cout << "La velocidad de la distancia recorrida fue de: " << v << endl; };

    double v = Cal_velocidad(x,t,function<float(float,float)> (VeloFunc));
    Im_Resultado(v,function<void(double)> (printFunc));

    return 0;
}