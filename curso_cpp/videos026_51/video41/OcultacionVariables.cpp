#include <iostream>

int main(){

    int contenidos { 10 };

    {
        std::cout << contenidos << "\n"; // Aquí imprime 10
        int contenidos { 5 };            // En este momento se queda oculta la variable del bloque 1 del main
        std::cout << contenidos << "\n"; // Aquí imprime 5
        ++contenidos;                    // La variable interna sería 6     
    }
    std::cout << contenidos << "\n";     // Y esta debe imprimir 10 porque no se ha tocado nada de la externa

    return 0;
}