#include <iostream>

int main(){

    int x {7};
    int* ptr( &x );

    if(ptr) std::cout << *ptr << "\n";

    else std::cout << "Puntero nulo";
    
    return 0;
}