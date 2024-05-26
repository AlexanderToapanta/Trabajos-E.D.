#include "Volumen_cubo.cpp"
#include <iostream>
#include <functional>
using namespace std;

int main() {
    double lado;

    Ingreso(lado);

    auto volumeFunc = [](double l) { return l*l*l; };
    auto printFunc = [](double volume) { cout << "Volumen del cubo: " << volume << endl; };

    double volume = Volumen_cu(lado,function<double(double)> (volumeFunc));
    Im_Resultado(volume,function<void(double)> (printFunc));

    return 0;
}