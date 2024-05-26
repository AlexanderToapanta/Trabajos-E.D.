#include <iostream>
#include "Cal_Densidad.cpp"
using namespace std;

int main() {
    double m,v;

    Ingreso(m,v);

    auto DensiFunc = [](double m,double v) { return m/v; };
    auto printFunc = [](double d) { cout << "La densidad calculada fue: " << d << endl; };

    double d = Cal_densidad(m,v,function<double(double,double)> (DensiFunc));
    Im_Resultado(d,function<void(double)> (printFunc));

    return 0;
}