#include <iostream>

int main(){

    int array[5]{1, 2, 3, 4, 5};

    std::cout << "Si imprimes el array aparece su dirección " << &array[1] << "\n";

    int* ptr { array };  // Crea un puntero a un array

    std::cout << "Tamaño del array y del puntero al array: " << std::size(array) << " ";
    return 0;
}