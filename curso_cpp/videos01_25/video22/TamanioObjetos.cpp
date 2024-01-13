#include <iostream>

int main(){

    int x { 64 };
    std::cout << "El tamaño del tipo char es:\t" << sizeof(char) << " bytes\n";
    std::cout << "El tamaño del tipo char es:\t" << sizeof(int) << " bytes\n";
    std::cout << "El tamaño de la variable x que contiene 64 es:\t" << sizeof(x) << " bytes\n"; // se puede hacer con variables
    return 0; 
}