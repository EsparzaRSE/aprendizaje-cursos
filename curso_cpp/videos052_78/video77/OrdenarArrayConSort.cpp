#include <iostream>
#include <algorithm>
#include <iterator>

int main(){

    int array[]{73, 21, 11, 46, 62};

              //Accede al primer elemento del array y al último elemento
    std::sort(std::begin(array), std::end(array));  //esto solo ya ordena el array

    for(int i {0}; i < static_cast<int>(std::size(array)); ++i){  //por si acaso, recordamos que size devuelve un unsigned
        std::cout << array[i] << ", ";
    }

    std::cout << "\n";

    return 0;
}