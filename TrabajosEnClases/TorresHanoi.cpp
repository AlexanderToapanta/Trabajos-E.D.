#include <iostream>
#include <vector>
#include <string>

class Hanoi {
public:
    Hanoi(int numDiscos) : numDiscos(numDiscos) {}

    void resolver() {
        moverDiscos(numDiscos, "A", "C", "B");
    }

private:
    int numDiscos;

    void moverDiscos(int n, const std::string& origen, const std::string& destino, const std::string& auxiliar) {
        if (n == 1) {
            std::cout << "Mover disco 1 de " << origen << " a " << destino << std::endl;
            return;
        }
        moverDiscos(n - 1, origen, auxiliar, destino);
        std::cout << "Mover disco " << n << " de " << origen << " a " << destino << std::endl;
        moverDiscos(n - 1, auxiliar, destino, origen);
    }
};

int main() {
    int numDiscos;
    std::cout << "Ingrese el número de discos: ";
    std::cin >> numDiscos;

    Hanoi hanoi(numDiscos);
    hanoi.resolver();

    return 0;
}
