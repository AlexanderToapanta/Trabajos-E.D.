#include "Area_Trapecio.cpp"
#include <iostream>
using namespace std;
int main() {
    double base1,base2, altura;

    Ingreso(base1,base2, altura);

    auto AreaFunc = [](double b1,double b2, double h) { return ((b1 +b2)/2) * h; };
    auto printFunc = [](double area) { cout << "Area del trapecio: " << area << endl; };

    double area = Cal_Area(base1,base2, altura,function<double(double,double,double)> (AreaFunc));
    Im_Resultado(area,function<void(double)> (printFunc));

    return 0;
}