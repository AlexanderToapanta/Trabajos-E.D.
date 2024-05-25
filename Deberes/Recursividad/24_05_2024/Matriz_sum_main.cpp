#include "Matriz_sum.cpp"
#include <cstdlib>
#include<ctime>
using namespace std;
int main() {
    const size_t N = 3;

    int** mat1 = new int*[N];
    int** mat2 = new int*[N];
    int** matR = new int*[N];
    for (size_t i = 0; i < N; ++i) {
        mat1[i] = new int[N];
        mat2[i] = new int[N];
        matR[i] = new int[N];
    }

    srand(static_cast<unsigned int>(time(nullptr)));

    auto generarAleatorio = []() -> int { return static_cast<int>((rand() / 32768.1) * 1000);};
    LlenarMatriz(mat1, mat2, N, function<int()>(generarAleatorio));

    auto imprimirEntero = [](const int& val) { std::cout << val; };
    ImprimirM(mat1, mat2, N, function<void(const int&)>(imprimirEntero));

    auto sumarEnteros = [](int a, int b) -> int { return a + b; };
    SumaRecursivaM(mat1, mat2, matR, N, function<int(int, int)>(sumarEnteros));

    ImprimirSum(matR, N, function<void(const int&)>(imprimirEntero));

    return 0;
}