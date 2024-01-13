#include <iostream>

int main(){

    unsigned short x { 65535 };
    std::cout << "El valor de x es: " << x << "\n";
    x = 65536;
    std::cout << "El valor desboraddo de x ahora es " << x << "\n"; // compilar compila pero si que es verdad que te avisa del overflow
    return 0;
}