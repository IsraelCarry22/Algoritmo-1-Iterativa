#include <iostream>

int encontrarMaximo(int arr[], int size) {
    int supremo = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > supremo) {
            supremo = arr[i];
        }
    }
    return supremo;
}

int main() {
    int arreglo[] = { 100, 52, 245, 127, 1245 };
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    int maximo = encontrarMaximo(arreglo, tamano);
    std::cout << "El máximo elemento del arreglo es: " << maximo << std::endl;

    return 0;
}