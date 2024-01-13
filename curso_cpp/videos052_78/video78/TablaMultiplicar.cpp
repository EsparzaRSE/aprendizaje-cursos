#include <iostream>

int main(){

    constexpr int numFilas{ 10 };
    constexpr int numCol{ 10 };

    int arrayBi[numFilas][numCol]{};  

    for(int i {1}; i < numFilas; ++i){   // quedan vacias (a 0) la primera fila entera y la primera columna entera

        for(int j {1}; j < numCol; ++j){
            arrayBi[i][j] = i * j;
         }
    }

    for(int i {1}; i < numFilas; ++i){

        for(int j{1}; j < numCol; ++j){
            std::cout << arrayBi[i][j] << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}