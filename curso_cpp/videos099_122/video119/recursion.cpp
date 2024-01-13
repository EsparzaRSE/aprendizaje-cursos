#include <iostream>

void cuentaAtras(int cuenta){

    std::cout << cuenta << "\n";
    if(cuenta > 0) cuentaAtras(cuenta - 1);
}

int main(){

    cuentaAtras(5);

    return 0;
}