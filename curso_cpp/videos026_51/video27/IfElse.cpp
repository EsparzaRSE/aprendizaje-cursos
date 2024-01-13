#include <iostream>

int main(){

    std::cout << "Introduce un número: ";
    int x{};
    std::cin >> x;

    if(x > 0) std::cout << "El número " << x << " es positivo\n";
    else if(x < 0) std::cout << "El número " << x << " es negativo\n";
    else std::cout << "el número es 0\n";
    return 0;
}