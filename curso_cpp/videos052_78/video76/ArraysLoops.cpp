#include <iostream>
#include <iterator>

enum NombreEstudiantes{

    Pedro, Juan, Miguel, Alberto, max_estudiantes
    //con max_estudiantes, si añadimos otro estudiante pasa a ser N+1, por lo que se actualiza solo el tamaño del array
};

#if 0
int main(){

    int notaEstudiante[max_estudiantes]{0,1,2,3}; // Se pueden inicializar así
    int idEstudiante[]{}; // no tengo claro que hace esto, ya que si uso idEstudiante[8]; devuelve sin problemas el valor

    std::cout << "Imprimiendo el array 0 y 1: " << notaEstudiante[0] << " " << notaEstudiante[Miguel] << "\n";
    std::cout << std::size(notaEstudiante);
}
#endif