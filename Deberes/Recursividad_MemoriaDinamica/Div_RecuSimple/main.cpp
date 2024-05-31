#include"div.cpp"
int main() {
    float* numeros;
    size_t cantidad;

    IngresarNumeros(numeros, cantidad);

    DividirNumeros(numeros, cantidad);

    std::cout << "Numeros divididos por 2:\n";
    for (size_t i = 0; i < cantidad; ++i) {
        std::cout << numeros[i] << " ";
    }
    std::cout << std::endl;

    delete[] numeros;

    return 0;
}