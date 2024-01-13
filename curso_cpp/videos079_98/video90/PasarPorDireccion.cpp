#include <iostream>
#include <string>

void imprimirPorDireccion(const std::string* ptr){ // puntero que contiene la dirección de ptr

    std::cout << *ptr << "\n";
}

int main(){

    std::string str{"Hola mundo"};
    imprimirPorDireccion(&str);  // se le pasa la dirección, no hace copia de str

    return 0;
}