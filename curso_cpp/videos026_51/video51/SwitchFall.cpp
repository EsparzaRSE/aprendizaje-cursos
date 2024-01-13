#include <iostream>

void imprimeNumero(int x){

    switch (x){  // La expresión o variable que se evalua sirven tipos integrales o enum

        case 1:  // 1 sería una expresión constante ÚNICA (no pueden repetirse en varios case) que debe coincidir con el tipo que se evalúa
            std::cout << "Uno\n"; 
            return;
        case 2:  // Si las expresiones son iguales, empieza a ejecutar el código desde aquí
            std::cout << "Dos\n"; 
            [[fallthrough]]; // Es un fallo intencional y se lo indicamos al compilador con este atributo
        case 3:
            std::cout << "Tres\n"; 
        default:
            std::cout << "Otro\n"; 
    }
}

void esVocal(char vocal){

    switch (vocal){

        int a;   // alcance en todo el bloque switch, osea en todos los casos

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            std::cout << "Es vocal minúscula\n";
            a = 3;
            break;
        default: { //nada impide crear bloques en un case o default, donde el alcance será de bloque
            std::cout << "no es vocal o es mayúscula\n";
            a = 7;
            break;
        } 
    }
}

int main(){

    imprimeNumero(3);

    return 0;
}