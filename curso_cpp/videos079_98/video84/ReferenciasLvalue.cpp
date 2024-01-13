#include <iostream>

int main(){

    int x { 5 };
    int& ref {x};  //comparten dirección y valor, es el mismo objeto con distinto nombre

    std::cout << "Variable x: " << &x << " Y referencia ref: " << &ref << "\n";

    return 0;
}