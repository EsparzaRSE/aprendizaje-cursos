#include <iostream>

bool esIgual (int x, int y){

    return (x == y);
}

int main(){

    std::cout << "Introduce un número: ";
    int x{};
    std::cin >> x;

    std::cout << "Introduce el segundo número: ";
    int y{};
    std::cin >> y;

    std::cout << "¿Son " << x << " y " << y << " iguales?\t";
    std::cout << std::boolalpha;
    std::cout << esIgual(x,y) << "\n\n";
    return 0;
}