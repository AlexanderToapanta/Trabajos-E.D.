#include<iostream>
using namespace std;
class Frac{
    private:
        int a, b;
    public:
        Frac():a(0),b(0){}
        void in();
        Frac operator*(const Farc &obj);
        void out();


};