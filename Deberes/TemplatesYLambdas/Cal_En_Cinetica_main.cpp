#include <iostream>
#include "Cal_En_Cinetica.cpp"
using namespace std;

int main() {
    double m,v;

    Ingreso(m,v);

    auto EkFunc = [](double m,double v) { return 0.5*m*v*v; };
    auto printFunc = [](double Ek) { cout << "La energia cinetica fue: " << Ek << endl; };

    double Ek = Cal_En_cinetica(m,v,function<double(double,double)> (EkFunc));
    Im_Resultado(Ek,function<void(double)> (printFunc));

    return 0;
}