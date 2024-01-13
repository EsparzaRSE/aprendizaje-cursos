#include <iostream>

int main(){

    for(int contador {1}; contador <= 10; ++contador){

        std::cout << contador << " ";
    }

    for(int x {0}, y {1}; (x || y) <=10; ++x, --y){
        //lo que sea
    }
    return 0;
}