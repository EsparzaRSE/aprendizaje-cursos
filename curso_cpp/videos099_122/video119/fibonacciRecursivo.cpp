#include <iostream>

//NO OPTIMO CON RECURSIÓN

int fiboRecursivo(int n){

    if(n == 0) return 0;
    if(n == 1) return 1;
    return fiboRecursivo(n - 1) + fiboRecursivo(n - 2);
}

int main(){

    for(int i{0}; i < 13; ++i){
        std::cout << fiboRecursivo(i) << " ";
    }

    return 0;
}