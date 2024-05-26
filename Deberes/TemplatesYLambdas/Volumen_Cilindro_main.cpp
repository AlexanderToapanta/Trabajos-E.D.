#include "Volumen_Cilindro.cpp"
#include <iostream>
#include<cmath>
#include <functional>
using namespace std;

int main() {
    double radio, altura;

    Ingreso(radio, altura);

    auto volumeFunc = [](double r, double h) { return M_PI * r * r * h; };
    auto printFunc = [](double volume) { cout << "Volumen del cilindro: " << volume << endl; };

    double volume = Cal_Volumen(radio, altura,function<double(double,double)> (volumeFunc));
    Im_Resultado(volume,function<void(double)> (printFunc));

    return 0;
}
