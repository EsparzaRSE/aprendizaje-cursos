#include <iostream>
#include <iterator>

int main(){

    int notaEstudiantes[]{77, 51, 98, 87, 79, 66, 71};
    int sizeArray{static_cast<int>(std::size(notaEstudiantes))};
    int notaMaxima{ 0 };

    for(int i = 0; i < sizeArray; ++i){
        if(notaEstudiantes[i] > notaMaxima){
            notaMaxima = notaEstudiantes[i];
        }
    }

    std::cout << "La nota más alta es: " << notaMaxima << "\n";

    return 0;
}