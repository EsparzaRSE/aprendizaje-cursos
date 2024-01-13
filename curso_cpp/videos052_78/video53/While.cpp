#include <iostream>

int main(){

    int num {};
    int x { 0 };

    std::cout << "Ingresa un número: ";
    std::cin >> num;

    while(x <= num){

        if(x < num) std::cout << x << " , ";
        else std::cout << x;
        ++x;
    }

    return 0;
}