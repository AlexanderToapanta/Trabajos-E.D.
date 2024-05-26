#include <iostream>
#include "Area_Piramide.cpp"
using namespace std;
int main() {
    double baseSide,altura;

    Ingreso( baseSide,altura);

    auto AreaFunc = [](double a, double b) { return a+b; };
    auto printFunc = [](double area) { cout << "Area de la piramide rectangular: " << area << endl; };

    double area = Area_Piramide(baseSide,altura,function<double(double,double)> (AreaFunc));
    Im_Resultado(area,function<void(double)> (printFunc));

    return 0;
}