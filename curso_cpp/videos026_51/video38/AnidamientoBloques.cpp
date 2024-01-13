#include <iostream>

int main(){ //Nivel 1 de anidamiento

    std::cout << "Introduce un entero: ";
    int x {};
    std::cin >> x;

    if(x > 0){ //Nivel 2 de anidamiento
        if((x % 2) == 0){ //nivel 3 de anidamiento que contiene 2 bloques en el mismo nivel
            std::cout << "El número es positivo y par\n";
        }
        else{
            std::cout << "El número es positivo e impar\n";   
        }
    }

    return 0;
}