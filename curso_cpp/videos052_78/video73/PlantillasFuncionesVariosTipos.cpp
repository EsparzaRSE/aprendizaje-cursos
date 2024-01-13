#include <iostream>

template <typename T, typename U>   // simplemente añades otro typename y ya lo puedes usar.
T mayor(U x, T y){

    return (x > y) ? x : y;
}

template <typename T>
int retorno(T x, double y){
    return 5;
}

int main(){

    std::cout << mayor<double>(1.0,2.0) << "\n";  // instancia y llama a la función mayor

    return 0;
}