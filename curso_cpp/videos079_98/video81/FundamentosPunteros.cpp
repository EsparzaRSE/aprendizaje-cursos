#include <iostream>

int main(){

    int x {35};
    int& y {x};  // Declarar una referencia es guardar en una variable la dirección de otra variable, por ejemplo
    int* ptr{&x};  // Creas el puntero con el asterisco pegado al tipo y el & para indicarle la dirección
    std::cout << *ptr;  //Operador de indirección o desreferencia para que te devuelva el valor que hay en en esa dirección.
}