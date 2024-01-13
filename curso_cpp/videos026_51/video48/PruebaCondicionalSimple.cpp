#include <iostream>

int main(){

    int x { 7 };

    // Para no añadir llaves en una sola declaración, con ponerla en la misma línea que el if 
    // a mi entender queda mucho más claro. Si fuera necesario pronto se le añaden llaves, eso no es problema.

    if(x == 7) std::cout << "Se puede poner en una línea\n";

    return 0; 
}