#include <iostream>

void imprimir(int x){

    std::cout << "El valor es " << x << " \n";
}

int main(){

    imprimir(static_cast<int>(5.5));

    return 0;
}