#include<iostream>
#include<stack>
#include<vector>
#include"RecursionPilas.h"
using namespace std;

template <typename T>
void IngresarNumeros(T*& nums, size_t& cantidad) {
    cout << "Ingrese los numeros (ingrese 0 para finalizar):\n";
    T num;
    size_t capacidad = 10;
    cantidad = 0;
    nums = new T[capacidad]; 

    while (cin >> num && num != 0) {
        nums[cantidad++] = num;
        if (cantidad == capacidad) {
            capacidad *= 2;
            T* temp = new T[capacidad];
            for (size_t i = 0; i < cantidad; ++i) {
                temp[i] = nums[i];
            }
            delete[] nums;
            nums = temp;
        }
    }
}
template <typename T>
void RecursionPilas<T>::ordenadoInsertar(std::stack<T>& stack, T key) {
    auto insertFunc = [&stack, &key, this]() {
        if (stack.empty() || key > stack.top()) {
            stack.push(key);
            return;
        }

        T top = stack.top();
        stack.pop();
        ordenadoInsertar(stack, key);
        stack.push(top);
    };

    insertFunc();
}

template <typename T>
void RecursionPilas<T>::clasificarPila(stack<T>& stack) {
    auto sortFunc = [&stack, this]() {
        if (stack.empty()) {
            return;
        }

        T top = stack.top();
        stack.pop();
        clasificarPila(stack);
        ordenadoInsertar(stack, top);
    };

    sortFunc();
}

template <typename T>
void RecursionPilas<T>::imprimirPila(stack<T> pila) {
    stack<T> tempPila = pila;  
    cout << "Pila: ";
    while (!tempPila.empty()) {
        cout << tempPila.top() << " ";
        tempPila.pop();
    }
    cout << endl;
}