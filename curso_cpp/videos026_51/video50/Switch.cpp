#include <iostream>

void imprimeNumero(int x){

    switch (x){  // La expresión o variable que se evalua sirven tipos integrales o enum

        case 1:  // 1 sería una expresión constante ÚNICA (no pueden repetirse en varios case) que debe coincidir con el tipo que se evalúa
            std::cout << "Uno\n"; 
            return;
        case 2:  // Si las expresiones son iguales, empieza a ejecutar el código desde aquí
            std::cout << "Dos\n"; 
            return;   // Sale del switch y la función
        case 3:
            std::cout << "Tres\n"; 
            break;    // Sale del switch pero NO de la función
        default:
            std::cout << "Otro\n"; 
            return;  // Si no pusieramos ni return ni break, se ejecutaría todo el código desde ese punto.
    }
}

int main(){

    imprimeNumero(3);

    return 0;
}
