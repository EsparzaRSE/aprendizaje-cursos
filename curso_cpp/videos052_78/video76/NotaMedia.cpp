#include <iostream>
#include <iterator>

#if 0

  // Los comento porque al tener puesto que me compile todos los archivos me da error
  // de múltiples main

int main(){

    int notaEstudiantes[]{79, 88, 61, 54, 93, 76, 98, 59};  // inicializas el array
    int sizeArray{static_cast<int>(std::size(notaEstudiantes))};  // Obtienes el size del array (static_cast porque devuelve unsigned)
    int notaTotal{};         // valor intermedio

    for(int i = 0; i < sizeArray; ++i){
        notaTotal += notaEstudiantes[i];
    }

    double notaMedia {static_cast<double>(notaTotal) / sizeArray};  // Valor final

    std::cout << "La nota media de los " << sizeArray << " estudiantes es: " << notaMedia << "\n";

    return 0;
}
#endif