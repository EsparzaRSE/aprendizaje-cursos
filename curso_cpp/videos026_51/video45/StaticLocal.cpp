#include <iostream>

void imprimirNumero(){    //Aquí es duración automática, se crea y se destruye en este bloque

    static int s_x = { 1 };  // PERO si le añadimos static, la variable se crea 1 vez y se mantiene hasta que termine el programa.
    ++s_x;
    std::cout << s_x << "\n"; 
}

int main(){

    imprimirNumero();  // por esa razón siempre va a devolver 2 en cada llamada, si quisieramos
    imprimirNumero();  // que incrementase a partir de la llamada anterior, habría que hacer
    imprimirNumero();  // a esa variable static

    return 0;
}