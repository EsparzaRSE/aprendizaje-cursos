#include <iostream>

int obtenerValorDelUsuario(){

    std::cout << "Escribe un valor entero: ";
    int input{};
    std::cin >> input;

    return input;
}

void imprimirValor(int valor){

    std::cout << "El doble de " << valor << " es: " << (valor * 2) << "\n";
}

int main(){

    int num {obtenerValorDelUsuario()};
    imprimirValor(num);
}